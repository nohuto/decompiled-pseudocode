/*
 * XREFs of ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800968F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18006539C (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 */

void __fastcall CMonitor::DoHandleSessionDisconnect(
        PTP_CALLBACK_INSTANCE Instance,
        SessionDisconnectedContext *Context,
        PTP_WORK Work)
{
  CMonitor *v3; // rdi

  v3 = (CMonitor *)*((_QWORD *)Context + 1);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids);
  }
  CMonitor::AbortMonitor(v3);
  SessionDisconnectedContext::`scalar deleting destructor'(Context);
}
