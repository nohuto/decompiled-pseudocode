/*
 * XREFs of ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005DD10
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180008A98 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005A730 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005E2E8 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

void __fastcall CPerStreamVolumeAudioSession::OnPersistanceTimerElapsed(
        struct _TP_CALLBACK_INSTANCE *a1,
        const wchar_t **a2,
        struct _TP_WORK *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x8Fu,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      a2[107]);
  }
  if ( a2[138] )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer((CPerStreamVolumeAudioSession *)a2, (__int64)a2, (bool)a3);
    CPerStreamVolumeAudioSession::PersistSessionConfiguration((CPerStreamVolumeAudioSession *)a2);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore((CPerStreamVolumeAudioSession *)a2);
  }
  CUnknown::Release((CUnknown *)(a2 + 4));
}
