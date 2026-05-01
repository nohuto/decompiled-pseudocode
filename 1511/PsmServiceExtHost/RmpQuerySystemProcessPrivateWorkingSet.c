/*
 * XREFs of RmpQuerySystemProcessPrivateWorkingSet @ 0x18001F4FC
 * Callers:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B08 (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800423AC (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     MemUtilQueryProcessMetrics @ 0x18001D938 (MemUtilQueryProcessMetrics.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpQuerySystemProcessPrivateWorkingSet(_QWORD *a1)
{
  __int64 result; // rax
  _DWORD v3[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v4; // [rsp+30h] [rbp-48h]

  memset_0(v3, 0, 0x40uLL);
  v3[0] = 4;
  result = MemUtilQueryProcessMetrics((unsigned __int64)v3, 1u, 1);
  if ( !(_DWORD)result )
    *a1 = v4;
  return result;
}
