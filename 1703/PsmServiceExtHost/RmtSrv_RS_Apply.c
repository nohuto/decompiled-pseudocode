/*
 * XREFs of RmtSrv_RS_Apply @ 0x180029B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_Apply(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return RmSrvResourceSetApply(*((struct _RM_SERVICE_GLOBALS **)g_pProxy + 2), a2, a3);
}
