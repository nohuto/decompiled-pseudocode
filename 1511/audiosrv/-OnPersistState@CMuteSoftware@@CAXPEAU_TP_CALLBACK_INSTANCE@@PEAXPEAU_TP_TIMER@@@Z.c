/*
 * XREFs of ?OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006C590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

void __fastcall CMuteSoftware::OnPersistState(
        struct _TP_CALLBACK_INSTANCE *a1,
        CMuteSoftware *a2,
        struct _TP_TIMER *a3)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x4000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x24u,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      (__int64)a2);
  }
  CMuteSoftware::PersistMuteState(a2);
}
