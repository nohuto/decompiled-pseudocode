/*
 * XREFs of ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180036390
 * Callers:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180015A60 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180028660 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800352A8 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003533C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ValidateAudioLevel @ 0x180036428 (ValidateAudioLevel.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_Sq @ 0x1800775D0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetVolume(
        CPerStreamVolumeAudioSession *this,
        float a2,
        struct _GUID *a3)
{
  TraceLoggingHProvider v5; // rcx
  unsigned int v6; // ebx
  double v8; // [rsp+20h] [rbp-28h]

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = a2;
    WPP_SF_Sq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      28,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)this + 107),
      SLOBYTE(v8));
  }
  if ( (unsigned __int8)ValidateAudioLevel() )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    v6 = CAudioSession::SetVolume(this, a2, a3);
    if ( (v6 & 0x80000000) == 0 )
    {
      CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
      return v6;
    }
    v5 = WPP_GLOBAL_Control;
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v5 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v5 + 28) & 0x40) != 0
    && *((_BYTE *)v5 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v5 + 2), 29LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, v6);
  }
  return v6;
}
