/*
 * XREFs of RmtSrv_RS_Apply @ 0x180038770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_Apply(__int64 a1, unsigned int a2, unsigned int a3)
{
  return ResourceManagerServerProxy::Handle_RS_Apply(g_pProxy, a2, a3);
}
