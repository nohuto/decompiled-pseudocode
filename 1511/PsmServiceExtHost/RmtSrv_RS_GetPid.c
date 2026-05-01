/*
 * XREFs of RmtSrv_RS_GetPid @ 0x1800387F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_GetPid(__int64 a1, unsigned int a2, unsigned int *a3)
{
  return ResourceManagerServerProxy::Handle_RS_GetPid(g_pProxy, a2, a3);
}
