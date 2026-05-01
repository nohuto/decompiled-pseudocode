/*
 * XREFs of ?TimerCallbackThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180014B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RMExecServicesProvider::TimerCallbackThunk(
        struct _TP_CALLBACK_INSTANCE *a1,
        ExecutionModel::RMExecServicesProvider **a2,
        struct _TP_TIMER *a3)
{
  ExecutionModel::RMExecServicesProvider::TimerCallback(
    a2[1],
    (struct ExecutionModel::RMExecServicesProvider::PendingTimerItem *)a2);
}
