/*
 * XREFs of ?RmpGameModeGetLargestValidResourceRequest@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180030994
 * Callers:
 *     ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18002CA18 (-RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESO.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAKPEA_K@Z @ 0x18002F6CC (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAKPEA_K@Z.c)
 */

void __fastcall RmpGameModeGetLargestValidResourceRequest(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2)
{
  memset_0(a2, 0, 0x20uLL);
  *(_DWORD *)a2 = 2;
  *((_DWORD *)a2 + 4) = 10;
  *((_DWORD *)a2 + 5) = 50;
  *((_DWORD *)a2 + 6) = 30;
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpCpuSetManagerGetGameModeRequestLimits(
    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 648),
    (unsigned int *)a2 + 1,
    (unsigned __int64 *)a2 + 1);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  *((_DWORD *)a2 + 5) = 100;
  *((_DWORD *)a2 + 6) = 100;
  *((_DWORD *)a2 + 4) = 10;
}
