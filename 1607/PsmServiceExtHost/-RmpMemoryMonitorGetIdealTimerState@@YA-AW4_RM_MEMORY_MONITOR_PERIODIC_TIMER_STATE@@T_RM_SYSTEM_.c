/*
 * XREFs of ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18001AC04
 * Callers:
 *     RmpMemoryMonitorOnSystemStateChanged @ 0x18001AB20 (RmpMemoryMonitorOnSystemStateChanged.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_SERVICE_GLOBALS@@T_RM_SYSTEM_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001B0E0 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_SERVICE_GLOBALS@@T_RM_SYSTEM_STATE@@W4_RM_RESOURC.c)
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
