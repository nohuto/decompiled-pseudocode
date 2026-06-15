/*
 * XREFs of ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800778C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180013698 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035354 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180077550 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v4; // edi

  v4 = CAudioSession::Disconnect(a1, a2, a3);
  if ( v4 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x59u,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        v4);
    }
  }
  else if ( *(_BYTE *)(a1 + 768) )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer((CPerStreamVolumeAudioSession *)(a1 - 16));
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore((CPerStreamVolumeAudioSession *)(a1 - 16));
  }
  return (unsigned int)v4;
}
