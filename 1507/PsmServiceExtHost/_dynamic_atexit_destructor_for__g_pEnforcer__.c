/*
 * XREFs of _dynamic_atexit_destructor_for__g_pEnforcer__ @ 0x1800256A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_pEnforcer__()
{
  return ATL::CComPtr<ExecutionModel::IRMExecServicesProvider>::~CComPtr<ExecutionModel::IRMExecServicesProvider>(&g_pEnforcer);
}
