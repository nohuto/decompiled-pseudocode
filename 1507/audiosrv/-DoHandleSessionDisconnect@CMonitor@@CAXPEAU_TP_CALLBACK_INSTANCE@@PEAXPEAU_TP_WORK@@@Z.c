/*
 * XREFs of ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180098FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x180098D8C (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 */

void __fastcall CMonitor::DoHandleSessionDisconnect(
        PTP_CALLBACK_INSTANCE Instance,
        SessionDisconnectedContext *Context,
        PTP_WORK Work)
{
  CMonitor *v3; // rdi

  v3 = (CMonitor *)*((_QWORD *)Context + 1);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Au,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
  }
  CMonitor::AbortMonitor(v3);
  SessionDisconnectedContext::`scalar deleting destructor'(Context);
}
