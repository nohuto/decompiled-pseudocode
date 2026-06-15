/*
 * XREFs of ?OnCheckForMonitorRestartWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800967C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::OnCheckForMonitorRestartWorker(
        PTP_CALLBACK_INSTANCE Instance,
        CMonitorManager *Context,
        PTP_TIMER Timer)
{
  CMonitorManager::OnCheckForMonitorRestart(Context);
}
