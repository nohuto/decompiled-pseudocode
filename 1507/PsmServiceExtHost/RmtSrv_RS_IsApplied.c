/*
 * XREFs of RmtSrv_RS_IsApplied @ 0x180031680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_IsApplied(__int64 a1, unsigned int a2, int *a3)
{
  return ResourceManagerServerProxy::Handle_RS_IsApplied(g_pProxy, a2, a3);
}
