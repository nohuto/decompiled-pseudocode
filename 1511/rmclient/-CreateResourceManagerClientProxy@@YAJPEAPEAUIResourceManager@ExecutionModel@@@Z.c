/*
 * XREFs of ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180008810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CreateResourceManagerClientProxy(
        struct IResourceManager **a1,
        struct ExecutionModel::IRMExecServicesProvider **a2)
{
  return CreateResourceManagerClientProxyInternal(a1, a2);
}
