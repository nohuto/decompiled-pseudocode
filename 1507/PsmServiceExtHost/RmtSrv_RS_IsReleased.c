/*
 * XREFs of RmtSrv_RS_IsReleased @ 0x1800316A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_IsReleased(__int64 a1, unsigned int a2, int *a3)
{
  return ResourceManagerServerProxy::Handle_RS_IsReleased(g_pProxy, a2, a3);
}
