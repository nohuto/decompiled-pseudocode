/*
 * XREFs of RmtSrv_RS_CreateTerminalResourceSet @ 0x180031600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_CreateTerminalResourceSet(__int64 a1, unsigned int a2, unsigned int *a3)
{
  return ResourceManagerServerProxy::Handle_RS_CreateTerminalResourceSet(g_pProxy, a2, a3);
}
