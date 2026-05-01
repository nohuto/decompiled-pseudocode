/*
 * XREFs of RmpPolicyGetCurrentUsageLimits @ 0x18000705C
 * Callers:
 *     RmpPolicyGetUsageLimitsAndMetricsForAcquire @ 0x18000482C (RmpPolicyGetUsageLimitsAndMetricsForAcquire.c)
 *     RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x180006F74 (RmpPolicyGetDesiredEmptyOptimizationsForHost.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001ED60 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003233C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x1800339C4 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_.c)
 * Callees:
 *     MemUtilQueryMaxCommit @ 0x180008AC0 (MemUtilQueryMaxCommit.c)
 *     RmpPolicyComputeUsageLimits @ 0x180008C00 (RmpPolicyComputeUsageLimits.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180015250 (RmpSystemMemoryMetricsQuery.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPolicyGetCurrentUsageLimits(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  int v10; // ebx
  __int64 result; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned __int64 v15; // [rsp+30h] [rbp-98h] BYREF
  _OWORD v16[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v17; // [rsp+80h] [rbp-48h]

  v8 = MemUtilQueryMaxCommit(&v15);
  v9 = v15;
  v10 = v8;
  if ( !v8 )
    v9 = v15;
  RmpSystemMemoryMetricsQuery(v16);
  if ( v10 || *(_QWORD *)&v16[0] > v9 )
    v9 = *(_QWORD *)&v16[0];
  result = RmpPolicyComputeUsageLimits(a1, a2, v16, v9, a3);
  if ( a4 )
  {
    v12 = v16[1];
    *(_OWORD *)a4 = v16[0];
    v13 = v16[2];
    *(_OWORD *)(a4 + 16) = v12;
    v14 = v16[3];
    *(_OWORD *)(a4 + 32) = v13;
    *(_QWORD *)&v13 = v17;
    *(_OWORD *)(a4 + 48) = v14;
    *(_QWORD *)(a4 + 64) = v13;
  }
  return result;
}
