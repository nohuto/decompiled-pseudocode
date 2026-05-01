/*
 * XREFs of RmtSrv_RS_GetResourceSetInfo @ 0x180038810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_GetResourceSetInfo(
        __int64 a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  return ResourceManagerServerProxy::Handle_RS_GetResourceSetInfo(g_pProxy, a2, a3);
}
