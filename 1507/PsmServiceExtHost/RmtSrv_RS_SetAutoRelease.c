/*
 * XREFs of RmtSrv_RS_SetAutoRelease @ 0x180031720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_SetAutoRelease(__int64 a1, unsigned int a2, int a3)
{
  return ResourceManagerServerProxy::Handle_RS_SetAutoRelease(g_pProxy, a2, a3);
}
