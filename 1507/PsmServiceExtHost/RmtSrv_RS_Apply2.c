/*
 * XREFs of RmtSrv_RS_Apply2 @ 0x1800315E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_Apply2(__int64 a1, unsigned int a2)
{
  return ResourceManagerServerProxy::Handle_RS_Apply2(g_pProxy, a2);
}
