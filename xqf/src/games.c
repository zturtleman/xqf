// DO NOT EDIT THIS FILE, AUTOMATICALLY GENERATED
struct game games[] = {
  {
    type                : Q1_SERVER,
    flags               : GAME_CONNECT | GAME_RECORD | GAME_QUAKE1_PLAYER_COLORS | GAME_QUAKE1_SKIN,
    name                : "Quake",
    default_port        : 26000,
    id                  : "QS",
    qstat_str           : "QS",
    qstat_option        : "-qs",
    pix                 : &q1_pix,
    parse_player        : poqs_parse_player,
    parse_server        : quake_parse_server,
    config_is_valid     : quake_config_is_valid,
    write_config        : write_quake_variables,
    exec_client         : q1_exec_generic,
    custom_cfgs         : q1_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : quake_init_maps,
    has_map             : quake_has_map,
    pd                  : &q1_private,
  },
  {
    type                : QW_SERVER,
    flags               : GAME_CONNECT | GAME_RECORD | GAME_SPECTATE | GAME_RCON
	    | GAME_QUAKE1_PLAYER_COLORS | GAME_QUAKE1_SKIN,
    name                : "QuakeWorld",
    default_port        : 27500,
    default_master_port : 27000,
    id                  : "QWS",
    qstat_str           : "QWS",
    qstat_option        : "-qws",
    qstat_master_option : "-qwm",
    pix                 : &q_pix,
    parse_player        : qw_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : qw_analyze_serverinfo,
    config_is_valid     : quake_config_is_valid,
    write_config        : write_quake_variables,
    exec_client         : qw_exec,
    custom_cfgs         : qw_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : quake_init_maps,
    has_map             : quake_has_map,
    pd                  : &qw_private,
  },
  {
    type                : Q2_SERVER,
    flags               : GAME_CONNECT | GAME_RECORD | GAME_SPECTATE | GAME_PASSWORD | GAME_RCON,
    name                : "Quake2",
    default_port        : 27910,
    default_master_port : 27900,
    id                  : "Q2S",
    qstat_str           : "Q2S",
    qstat_option        : "-q2s",
    qstat_master_option : "-q2m",
    pix                 : &q2_pix,
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : quake_config_is_valid,
    write_config        : write_quake_variables,
    exec_client         : q2_exec,
    custom_cfgs         : q2_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : quake_init_maps,
    has_map             : quake_has_map,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    pd                  : &q2_private,
  },
  {
    type                : Q3_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Quake3: Arena",
    default_port        : 27960,
    default_master_port : 27950,
    id                  : "Q3S",
    qstat_str           : "Q3S",
    qstat_option        : "-q3s",
    qstat_master_option : "-q3m",
    pix                 : &q3_pix,
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : quake3_config_is_valid,
    exec_client         : q3_exec,
    custom_cfgs         : q3_custom_cfgs,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    pd                  : &q3_private,
  },
  {
    type                : WO_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Wolfenstein",
    default_port        : 27960,
    default_master_port : 27950,
    id                  : "WOS",
    qstat_str           : "Q3S",
    qstat_option        : "-q3s",
    qstat_master_option : "-q3m",
    pix                 : &wo_pix,
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    pd                  : &wolf_private,
  },
  {
    type                : WOET_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Enemy Territory",
    default_port        : 27960,
    default_master_port : 27950,
    id                  : "WOETS",
    qstat_str           : "Q3S",
    qstat_option        : "-q3s",
    qstat_master_option : "-q3m",
    pix                 : &et_pix,
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : quake3_config_is_valid,
    exec_client         : q3_exec,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    pd                  : &wolfet_private,
  },
  {
    type                : EF_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Voyager Elite Force",
    default_port        : 27960,
    default_master_port : 27950,
    id                  : "EFS",
    qstat_str           : "Q3S",
    qstat_option        : "-q3s",
    qstat_master_option : "-efm",
    pix                 : &ef_pix,
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    save_info           : quake_save_info,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
  },
  {
    type                : H2_SERVER,
    flags               : GAME_CONNECT | GAME_QUAKE1_PLAYER_COLORS,
    name                : "Hexen2",
    default_port        : 26900,
    id                  : "H2S",
    qstat_str           : "H2S",
    qstat_option        : "-h2s",
    pix                 : &hex_pix,
    parse_player        : poqs_parse_player,
    parse_server        : quake_parse_server,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q1_exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : HW_SERVER,
    flags               : GAME_CONNECT | GAME_QUAKE1_PLAYER_COLORS | GAME_RCON,
    name                : "HexenWorld",
    default_port        : 26950,
    id                  : "HWS",
    qstat_str           : "HWS",
    qstat_option        : "-hws",
    pix                 : &hw_pix,
    parse_player        : qw_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : qw_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q1_exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : SN_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Sin",
    default_port        : 22450,
    id                  : "SNS",
    qstat_str           : "SNS",
    qstat_option        : "-sns",
    pix                 : &sn_pix,
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q2_exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : HL_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON,
    name                : "Half-Life",
    default_port        : 27015,
    default_master_port : 27010,
    id                  : "HLS",
    qstat_str           : "HLS",
    qstat_option        : "-hls",
    qstat_master_option : "-hlm",
    pix                 : &hl_pix,
    parse_player        : hl_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : hl_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : hl_exec,
    save_info           : quake_save_info,
    init_maps           : quake_init_maps,
    has_map             : quake_has_map,
    arch_identifier     : "sv_os",
    identify_os         : identify_os,
    pd                  : &hl_private,
  },
  {
    type                : KP_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Kingpin",
    default_port        : 31510,
    id                  : "Q2S:KP",
    qstat_str           : "Q2S",
    qstat_option        : "-q2s",
    pix                 : &kp_pix,
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q2_exec_generic,
    save_info           : quake_save_info,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
  },
  {
    type                : SFS_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Soldier of Fortune",
    default_port        : 28910,
    id                  : "SFS",
    qstat_str           : "SFS",
    qstat_option        : "-sfs",
    pix                 : &sfs_pix,
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q2_exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : SOF2S_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Soldier of Fortune 2",
    default_port        : 20100,
    default_master_port : 20110,
    id                  : "SOF2S",
    qstat_str           : "Q3S",
    qstat_option        : "-q3s",
    qstat_master_option : "-q3m",
    pix                 : &sof2s_pix,
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    save_info           : quake_save_info,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
  },
  {
    type                : T2_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Tribes 2",
    default_port        : 28000,
    default_master_port : 28000,
    id                  : "T2S",
    qstat_str           : "T2S",
    qstat_option        : "-t2s",
    qstat_master_option : "-t2m",
    pix                 : &t2_pix,
    parse_player        : t2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : t2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : t2_exec,
    save_info           : quake_save_info,
    arch_identifier     : "linux",
    identify_os         : t2_identify_os,
  },
  {
    type                : HR_SERVER,
    flags               : GAME_CONNECT | GAME_RCON,
    name                : "Heretic2 TODO",
    default_port        : 28910,
    id                  : "Q2S:HR",
    qstat_str           : "Q2S",
    qstat_option        : "-q2s",
    pix                 : &hr_pix,
    parse_player        : q2_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q2_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q2_exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : UN_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD,
    name                : "Unreal / UT",
    default_port        : 7777,
    id                  : "UNS",
    qstat_str           : "UNS",
    qstat_option        : "-uns",
    pix                 : &un_pix,
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    pd                  : &ut_private,
  },
  {
    type                : UT2_SERVER,
    flags               : GAME_CONNECT | GAME_SPECTATE | GAME_PASSWORD | GAME_LAUNCH_HOSTPORT,
    name                : "UT 2003",
    default_port        : 7777,
    id                  : "UT2S",
    qstat_str           : "UT2S",
    qstat_option        : "-ut2s",
    pix                 : &ut2_pix,
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    pd                  : &ut2_private,
  },
  {
    type                : RUNE_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD,
    name                : "Rune",
    default_port        : 7777,
    id                  : "RUNESRV",
    qstat_str           : "UNS",
    qstat_option        : "-uns",
    pix                 : &rune_pix,
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    pd                  : &rune_private,
  },
  {
    type                : POSTAL2_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD,
    name                : "Postal 2",
    default_port        : 7777,
    id                  : "POSTAL2",
    qstat_str           : "UNS",
    qstat_option        : "-uns",
    pix                 : &postal2_pix,
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    pd                  : &postal2_private,
  },
  {
    type                : AAO_SERVER,
    flags               : GAME_CONNECT | GAME_SPECTATE | GAME_PASSWORD | GAME_LAUNCH_HOSTPORT,
    name                : "America's Army",
    default_port        : 7777,
    id                  : "AMS",
    qstat_str           : "UNS",
    qstat_option        : "-uns",
    pix                 : &aao_pix,
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ut_exec,
    save_info           : quake_save_info,
    init_maps           : unreal_init_maps,
    has_map             : unreal_has_map,
    pd                  : &aao_private,
  },
  {
    type                : DESCENT3_SERVER,
    flags               : GAME_CONNECT,
    name                : "Descent3",
    default_port        : 2092,
    default_master_port : 3445,
    id                  : "D3P",
    qstat_str           : "D3P",
    qstat_option        : "-d3p",
    qstat_master_option : "-d3m",
    pix                 : &descent3_pix,
    parse_player        : descent3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : descent3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : exec_generic,
    save_info           : quake_save_info,
  },
  {
    type                : SSAM_SERVER,
    flags               : GAME_CONNECT,
    name                : "Serious Sam",
    default_port        : 25600,
    id                  : "SMS",
    qstat_str           : "SMS",
    qstat_option        : "-sms",
    pix                 : &ssam_pix,
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ssam_exec,
    save_info           : quake_save_info,
  },
  {
    type                : SSAMSE_SERVER,
    flags               : GAME_CONNECT,
    name                : "Serious Sam TSE",
    default_port        : 25600,
    id                  : "SMSSE",
    qstat_str           : "SMS",
    qstat_option        : "-sms",
    pix                 : &ssam_pix,
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : ssam_exec,
    save_info           : quake_save_info,
  },
  {
    type                : MOHAA_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Medal of Honor: Allied Assault",
    default_port        : 12204,
    default_master_port : 27950,
    id                  : "MHS",
    qstat_str           : "MHS",
    qstat_option        : "-mhs",
    qstat_master_option : "-q3m",
    pix                 : &mohaa_pix,
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    arch_identifier     : "version",
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    pd                  : &mohaa_private,
  },
  {
    type                : COD_SERVER,
    flags               : GAME_CONNECT | GAME_PASSWORD | GAME_RCON | GAME_QUAKE3_MASTERPROTOCOL,
    name                : "Call of Duty",
    default_port        : 28960,
    default_master_port : 20510,
    id                  : "CODS",
    qstat_str           : "CODS",
    qstat_option        : "-cods",
    qstat_master_option : "-codm",
    pix                 : &cod_pix,
    parse_player        : q3_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : q3_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : q3_exec,
    save_info           : quake_save_info,
    init_maps           : q3_init_maps,
    has_map             : quake_has_map,
    get_mapshot         : q3_get_mapshot,
    identify_cpu        : identify_cpu,
    identify_os         : identify_os,
    pd                  : &cod_private,
  },
  {
    type                : SAS_SERVER,
    flags               : GAME_CONNECT,
    name                : "Savage",
    default_port        : 11235,
    id                  : "SAS",
    qstat_str           : "SAS",
    qstat_option        : "-sas",
    pix                 : &savage_pix,
    parse_player        : savage_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : savage_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : savage_exec,
    save_info           : quake_save_info,
  },
  {
    type                : GPS_SERVER,
    flags               : GAME_CONNECT,
    name                : "Generic Gamespy",
    default_port        : 27888,
    id                  : "GPS",
    qstat_str           : "GPS",
    qstat_option        : "-sns",
    pix                 : &gamespy3d_pix,
    parse_player        : un_parse_player,
    parse_server        : quake_parse_server,
    analyze_serverinfo  : un_analyze_serverinfo,
    config_is_valid     : config_is_valid_generic,
    exec_client         : gamespy_exec,
    save_info           : quake_save_info,
  },
  {
    type                : UNKNOWN_SERVER,
    name                : "unknown",
    parse_server        : quake_parse_server,
    config_is_valid     : config_is_valid_generic,
    exec_client         : exec_generic,
    save_info           : quake_save_info,
  },
};
