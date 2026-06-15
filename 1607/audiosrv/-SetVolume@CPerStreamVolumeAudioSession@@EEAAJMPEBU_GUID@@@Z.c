/*
 * XREFs of ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180009280
 * Callers:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x18000EAD0 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180008A98 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180008AD0 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180015BE0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ValidateAudioLevel @ 0x180029BB0 (ValidateAudioLevel.c)
 *     WPP_SF_Sg @ 0x18005FBC8 (WPP_SF_Sg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetVolume(
        CPerStreamVolumeAudioSession *this,
        float a2,
        const struct _GUID *a3)
{
  __int64 v5; // rdx
  bool v6; // r8
  int v7; // ebx
  double v9; // [rsp+20h] [rbp-28h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 18, (_DWORD)a3, *((_QWORD *)this + 107), SLOBYTE(v9));
  }
  if ( !(unsigned __int8)ValidateAudioLevel() )
  {
    v7 = -2147024809;
    goto LABEL_10;
  }
  CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this, v5, v6);
  v7 = CAudioSession::SetVolume(this, a2, a3);
  if ( v7 < 0 )
  {
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::SetVolume", 0x368u, v7);
    return (unsigned int)v7;
  }
  CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
  return (unsigned int)v7;
}
