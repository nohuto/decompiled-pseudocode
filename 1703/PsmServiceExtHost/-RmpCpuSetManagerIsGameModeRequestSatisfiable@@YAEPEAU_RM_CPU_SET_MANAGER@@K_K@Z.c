/*
 * XREFs of ?RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@K_K@Z @ 0x18002FD04
 * Callers:
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x18002CC6C (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAKPEA_K@Z @ 0x18002F6CC (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAKPEA_K@Z.c)
 */

bool __fastcall RmpCpuSetManagerIsGameModeRequestSatisfiable(
        struct _RM_CPU_SET_MANAGER *a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpCpuSetManagerGetGameModeRequestLimits(a1, &v7, &v8);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return a2 <= v7 && (~v8 & a3) == 0;
}
