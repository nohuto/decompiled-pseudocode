/*
 * XREFs of RmpSystemMemoryMetricsQuery @ 0x18000561C
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180002F60 (-RmpMemoryMonitorCheckMetricsAndRemediate@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS.c)
 *     RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x1800055B4 (RmpPolicyGetDesiredEmptyOptimizationsForHost.c)
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B4C (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x18001A574 (RmpGetResourceManagerRuntimeConfiguration.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003C5D8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

char *__fastcall RmpSystemMemoryMetricsQuery(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  char *result; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-268h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-260h]
  unsigned int v14; // [rsp+2Ch] [rbp-25Ch]
  _QWORD v15[5]; // [rsp+60h] [rbp-228h] BYREF
  char v16; // [rsp+88h] [rbp-200h] BYREF
  _BYTE v17[48]; // [rsp+110h] [rbp-178h] BYREF
  unsigned int v18; // [rsp+140h] [rbp-148h]
  unsigned int v19; // [rsp+144h] [rbp-144h]

  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  NtQuerySystemInformation(SystemPerformanceInformation, v17, 0x158u, 0LL);
  NtQuerySystemInformation(SystemMemoryListInformation, v15, 0xB0u, 0LL);
  v2 = v13;
  v3 = v19;
  memset_0(a1, 0, 0x30uLL);
  v4 = (unsigned int)v3;
  v5 = v2 * (v3 - v18);
  v6 = v2 * v4;
  v7 = v2 * v14;
  a1[1] = v5;
  result = &v16;
  v9 = 0LL;
  *a1 = v6;
  a1[3] = v7;
  v10 = 8LL;
  do
  {
    v9 += *(_QWORD *)result;
    result += 8;
    --v10;
  }
  while ( v10 );
  v11 = v2 * (v15[0] + v15[1] + v9);
  a1[2] = v6 - v5;
  a1[4] = v11;
  a1[5] = v7 - v11;
  return result;
}
