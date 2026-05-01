/*
 * XREFs of RmtSrv_RS_SetExternalResourcePriorities @ 0x1800388F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_SetExternalResourcePriorities(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  return ResourceManagerServerProxy::Handle_RS_SetExternalResourcePriorities(g_pProxy, a2, a3, a4);
}
