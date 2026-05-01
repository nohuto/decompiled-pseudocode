/*
 * XREFs of ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x1800059D0
 * Callers:
 *     RmpMemoryMonitorOnSystemStateChanged @ 0x180005934 (RmpMemoryMonitorOnSystemStateChanged.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@T_RM_SYSTEM_STATE@@@Z @ 0x180019A80 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@T_RM_SYSTEM_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorGetIdealTimerState(char a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  else
    return (unsigned int)((a1 & 2) != 0) + 1;
}
