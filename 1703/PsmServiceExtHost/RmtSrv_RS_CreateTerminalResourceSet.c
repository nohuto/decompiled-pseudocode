/*
 * XREFs of RmtSrv_RS_CreateTerminalResourceSet @ 0x180029B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_CreateTerminalResourceSet(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return RmSrvResourceSetCreateTerminalSet(*((struct _RM_SERVICE_GLOBALS **)g_pProxy + 2), a2, a3);
}
