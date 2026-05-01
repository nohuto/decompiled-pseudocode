/*
 * XREFs of RmtSrv_RM_OnProcessTerminated @ 0x180029AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18002D1E8 (-RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 */

__int64 __fastcall RmtSrv_RM_OnProcessTerminated(__int64 a1, unsigned int a2)
{
  RmSrvOnProcessTerminated(*((struct _RM_SERVICE_GLOBALS **)g_pProxy + 2), a2);
  return 0LL;
}
