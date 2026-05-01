/*
 * XREFs of ?Stop@RMExecServicesProvider@ExecutionModel@@UEAAJXZ @ 0x1800149A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x1800145F4 (-CancelOutstandingTimers@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 *     ?CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ @ 0x180014674 (-CancelOutstandingWorkItems@RMExecServicesProvider@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::RMExecServicesProvider::Stop(ExecutionModel::RMExecServicesProvider *this)
{
  ExecutionModel::RMExecServicesProvider::CancelOutstandingWorkItems(this);
  ExecutionModel::RMExecServicesProvider::CancelOutstandingTimers(this);
  return 0LL;
}
