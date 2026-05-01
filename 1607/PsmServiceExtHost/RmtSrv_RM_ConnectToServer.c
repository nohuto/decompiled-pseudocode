/*
 * XREFs of RmtSrv_RM_ConnectToServer @ 0x18001F260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RmtSrv_RM_ConnectToServer(ResourceManagerServerProxy *a1, void **a2, struct _WNF_STATE_NAME *a3)
{
  return ResourceManagerServerProxy::Handle_RM_ConnectToServer(a1, a1, a2, a3);
}
