/*
 * XREFs of ?TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18009CD50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18009C9C0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

void __fastcall CMonitor::TerminateMonitorInWorkerThread(
        PTP_CALLBACK_INSTANCE Instance,
        CMonitor *Context,
        PTP_WORK Work)
{
  CMonitor::Terminate(Context, 0, Instance);
  (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)Context + 16LL))(Context);
}
