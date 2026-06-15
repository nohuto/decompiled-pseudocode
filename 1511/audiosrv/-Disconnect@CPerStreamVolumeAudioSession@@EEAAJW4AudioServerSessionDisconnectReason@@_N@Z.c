/*
 * XREFs of ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180072540
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800352A8 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035594 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800721B0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v4; // edi

  v4 = CAudioSession::Disconnect(a1, a2, a3);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x59u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        v4);
    }
  }
  else if ( *(_BYTE *)(a1 + 920) )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer((CPerStreamVolumeAudioSession *)(a1 - 16));
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore((CPerStreamVolumeAudioSession *)(a1 - 16));
  }
  return (unsigned int)v4;
}
