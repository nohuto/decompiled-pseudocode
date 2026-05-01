/*
 * XREFs of ?Stop@RMExecServicesProvider@ExecutionModel@@UEAAJXZ @ 0x180042C20
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180042AD4 (-CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 *     ?CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180042B54 (-CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::RMExecServicesProvider::Stop(ExecutionModel::RMExecServicesProvider *this)
{
  ExecutionModel::RMExecServicesProvider::CancelOutstandingWorkItems(this);
  ExecutionModel::RMExecServicesProvider::CancelOutstandingTimers(this);
  return 0LL;
}
