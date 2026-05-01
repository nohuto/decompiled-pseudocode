/*
 * XREFs of _dynamic_atexit_destructor_for__g_spRMExecServices__ @ 0x1800256D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_spRMExecServices__()
{
  return ATL::CComPtr<ExecutionModel::IRMExecServicesProvider>::~CComPtr<ExecutionModel::IRMExecServicesProvider>(&g_spRMExecServices);
}
