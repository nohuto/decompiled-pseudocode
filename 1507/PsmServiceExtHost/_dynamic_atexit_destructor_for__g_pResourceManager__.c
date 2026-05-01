/*
 * XREFs of _dynamic_atexit_destructor_for__g_pResourceManager__ @ 0x1800256C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_pResourceManager__()
{
  return ATL::CComPtr<ExecutionModel::IRMExecServicesProvider>::~CComPtr<ExecutionModel::IRMExecServicesProvider>(&g_pResourceManager);
}
