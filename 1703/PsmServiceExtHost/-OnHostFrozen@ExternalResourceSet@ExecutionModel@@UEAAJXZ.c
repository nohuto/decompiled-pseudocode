/*
 * XREFs of ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180034D00
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800191BC (-CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180034D20 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnHostFrozen(ExecutionModel::ExternalResourceSet *this)
{
  ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(this);
  ExecutionModel::ExternalResourceSet::RunWatchdog(this);
  return 0LL;
}
