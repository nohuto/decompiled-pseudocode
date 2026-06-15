/*
 * XREFs of ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180075AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800352A8 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035594 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003AAF4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

void __fastcall CPerStreamVolumeAudioSession::OnPersistanceTimerElapsed(
        struct _TP_CALLBACK_INSTANCE *a1,
        const wchar_t **a2,
        struct _TP_WORK *a3)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBBu,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      a2[107]);
  }
  if ( a2[129] )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer((CPerStreamVolumeAudioSession *)a2);
    CPerStreamVolumeAudioSession::PersistSessionConfiguration((CPerStreamVolumeAudioSession *)a2);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore((CPerStreamVolumeAudioSession *)a2);
  }
  CUnknown::Release((CUnknown *)(a2 + 4));
}
