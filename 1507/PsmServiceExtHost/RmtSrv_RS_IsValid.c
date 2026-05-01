/*
 * XREFs of RmtSrv_RS_IsValid @ 0x1800316C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_IsValid(__int64 a1, unsigned int a2, int *a3)
{
  return ResourceManagerServerProxy::Handle_RS_IsValid(g_pProxy, a2, a3);
}
