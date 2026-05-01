/*
 * XREFs of RmtSrv_RS_NotifyPendingResourceSetTransition @ 0x1800316E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RmtSrv_RS_NotifyPendingResourceSetTransition(__int64 a1, unsigned int a2, struct RmResourceSetInfo *a3)
{
  return ResourceManagerServerProxy::Handle_RS_NotifyPendingResourceSetTransition(g_pProxy, a2, a3);
}
