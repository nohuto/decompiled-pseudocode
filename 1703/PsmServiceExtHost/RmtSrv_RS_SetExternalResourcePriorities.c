/*
 * XREFs of RmtSrv_RS_SetExternalResourcePriorities @ 0x180029B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_SetExternalResourcePriorities(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  return RmSrvResourceSetExternalResourcePriorities(*((struct _RM_SERVICE_GLOBALS **)g_pProxy + 2), a2, a3, a4);
}
