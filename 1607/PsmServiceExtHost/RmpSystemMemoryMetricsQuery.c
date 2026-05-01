/*
 * XREFs of RmpSystemMemoryMetricsQuery @ 0x180015250
 * Callers:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180003B2C (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RmpPolicyGetCurrentUsageLimits @ 0x18000705C (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x180008710 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x18001B398 (RmpGetResourceManagerRuntimeConfiguration.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003233C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180033498 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180034470 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpOfferLazyDecommitCheckQueueWork @ 0x1800346F4 (RmpOfferLazyDecommitCheckQueueWork.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpSystemMemoryMetricsQuery(unsigned __int64 *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  _QWORD v11[22]; // [rsp+20h] [rbp-268h] BYREF
  _BYTE SystemInformation[12]; // [rsp+D0h] [rbp-1B8h] BYREF
  unsigned int v13; // [rsp+DCh] [rbp-1ACh]
  _BYTE v14[48]; // [rsp+110h] [rbp-178h] BYREF
  unsigned int v15; // [rsp+140h] [rbp-148h]
  unsigned int v16; // [rsp+144h] [rbp-144h]

  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  NtQuerySystemInformation(SystemPerformanceInformation, v14, 0x158u, 0LL);
  NtQuerySystemInformation(SystemMemoryListInformation, v11, 0xB0u, 0LL);
  v2 = v16;
  memset_0(a1, 0, 0x48uLL);
  v3 = RmpPageSize;
  result = v15;
  v5 = v11[13] + v11[14] + v11[15] + v11[16] + v11[17] + v11[18] + v11[19] + v11[20];
  v6 = v2 * RmpPageSize;
  v7 = RmpPageSize * v13;
  v8 = RmpPageSize * (v11[0] + v11[1] + v11[10] + v11[9] + v11[8] + v11[7] + v11[5] + v11[6]);
  v9 = v2 - v15;
  *a1 = v6;
  v10 = v3 * v9;
  a1[4] = v7;
  a1[6] = v7 - v8;
  a1[1] = v10;
  a1[5] = v8;
  a1[3] = v6 - v10;
  a1[7] += v5;
  return result;
}
