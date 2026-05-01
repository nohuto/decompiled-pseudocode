/*
 * XREFs of RmtSrv_RM_CreateTerminalResourceSet @ 0x180038440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RmtSrv_RM_CreateTerminalResourceSet(__int64 a1, struct RmResourceSetInfo *a2, unsigned int *a3)
{
  return ResourceManagerServerProxy::Handle_RM_CreateTerminalResourceSet(g_pProxy, a2, a3);
}
