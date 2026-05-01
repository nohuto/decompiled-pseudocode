/*
 * XREFs of RmtSrv_RS_ForceReleaseResources @ 0x1800387D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_ForceReleaseResources(__int64 a1, unsigned int a2)
{
  return ResourceManagerServerProxy::Handle_RS_ForceReleaseResources(g_pProxy, a2);
}
