/*
 * XREFs of RmpMemoryMonitorStart @ 0x180020EBC
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180020C08 (RmpInitializeGlobalModules.c)
 * Callees:
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@T_RM_SYSTEM_STATE@@@Z @ 0x180020F54 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@T_RM_SYSTEM_STATE@@@Z.c)
 */

__int64 RmpMemoryMonitorStart()
{
  unsigned int *v0; // rbx
  char *v1; // rsi
  unsigned int v2; // edi
  HANDLE Thread; // rax

  v0 = (unsigned int *)RmSvcGlobals;
  v1 = (char *)RmSvcGlobals + 1600;
  *((_DWORD *)v1 + 21) = GetTickCount();
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpMemoryMonitorSetTimerIfEnabled(v1, v0[436]);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v2 = 0;
  Thread = CreateThread(0LL, 0LL, RmpMemoryMonitorWorker, v0, 0, 0LL);
  if ( Thread )
    *((_QWORD *)v1 + 6) = Thread;
  else
    return (unsigned int)-1073741823;
  return v2;
}
