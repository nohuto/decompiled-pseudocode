/*
 * XREFs of RmpActivityHostQueryCommitDebt @ 0x1800059EC
 * Callers:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B4C (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000DE60 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 */

__int64 __fastcall RmpActivityHostQueryCommitDebt(struct _RM_ACTIVITY_HOST *a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = 0LL;
  result = RmpActivityHostActOnProcesses(a1, a2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
