/*
 * XREFs of ?WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RMExecServicesProvider::WorkerThreadThunk(
        struct _TP_CALLBACK_INSTANCE *a1,
        ExecutionModel::RMExecServicesProvider *a2,
        struct _TP_WORK *a3)
{
  ExecutionModel::RMExecServicesProvider::WorkerThread(a2);
}
