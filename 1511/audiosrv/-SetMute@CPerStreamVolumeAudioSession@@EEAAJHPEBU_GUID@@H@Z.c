/*
 * XREFs of ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180035270
 * Callers:
 *     ?SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z @ 0x1800159B0 (-SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035388 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180028410 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003533C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetMute(
        CPerStreamVolumeAudioSession *this,
        int a2,
        struct _GUID *a3,
        int a4)
{
  int v5; // ebx

  v5 = CAudioSession::SetMute(this, a2, a3, a4);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        33LL,
        &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (unsigned int)v5);
    }
  }
  else
  {
    CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
  }
  return (unsigned int)v5;
}
