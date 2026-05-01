/*
 * XREFs of RmpMemoryMonitorStart @ 0x18001B058
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001AE98 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_SERVICE_GLOBALS@@T_RM_SYSTEM_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001B0E0 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_SERVICE_GLOBALS@@T_RM_SYSTEM_STATE@@W4_RM_RESOURC.c)
 */

__int64 __fastcall RmpMemoryMonitorStart(_DWORD *lpParameter)
{
  DWORD TickCount; // eax
  HANDLE Thread; // rax

  TickCount = GetTickCount();
  lpParameter[101] = TickCount;
  lpParameter[103] = TickCount;
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpMemoryMonitorSetTimerIfEnabled(lpParameter, (unsigned int)lpParameter[480], 4LL);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  Thread = CreateThread(0LL, 0LL, RmpMemoryMonitorWorker, lpParameter, 0, 0LL);
  *((_QWORD *)lpParameter + 47) = Thread;
  return Thread == 0LL ? 0xC0000001 : 0;
}
