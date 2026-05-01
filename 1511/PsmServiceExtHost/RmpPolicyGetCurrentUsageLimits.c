/*
 * XREFs of RmpPolicyGetCurrentUsageLimits @ 0x180006F48
 * Callers:
 *     RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x180006DA4 (RmpPolicyGetDesiredEmptyOptimizationsForHost.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180029C70 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800417F8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 * Callees:
 *     RmpSystemMemoryMetricsQuery @ 0x180006E30 (RmpSystemMemoryMetricsQuery.c)
 *     RmpPolicyComputeUsageLimits @ 0x18000A5B0 (RmpPolicyComputeUsageLimits.c)
 *     MemUtilQueryMaxCommit @ 0x18000AA20 (MemUtilQueryMaxCommit.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPolicyGetCurrentUsageLimits(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  int v10; // ebx
  __int64 result; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned __int64 v14; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v15[3]; // [rsp+38h] [rbp-60h] BYREF

  v8 = MemUtilQueryMaxCommit(&v14);
  v9 = v14;
  v10 = v8;
  if ( !v8 )
    v9 = v14;
  RmpSystemMemoryMetricsQuery((__int64 *)v15);
  if ( v10 || *(_QWORD *)&v15[0] > v9 )
    v9 = *(_QWORD *)&v15[0];
  result = RmpPolicyComputeUsageLimits(a1, a2, v15, v9, a3);
  if ( a4 )
  {
    v12 = v15[1];
    *a4 = v15[0];
    v13 = v15[2];
    a4[1] = v12;
    a4[2] = v13;
  }
  return result;
}
