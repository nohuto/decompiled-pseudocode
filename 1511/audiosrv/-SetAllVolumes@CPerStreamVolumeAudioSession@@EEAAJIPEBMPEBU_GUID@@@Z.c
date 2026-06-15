/*
 * XREFs of ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z @ 0x1800769C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003533C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x180076830 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetAllVolumes(
        CPerStreamVolumeAudioSession *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4)
{
  int v5; // ebx

  v5 = CAudioSession::SetAllVolumes(this, a2, a3, a4);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        v5);
    }
  }
  else
  {
    CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
  }
  return (unsigned int)v5;
}
