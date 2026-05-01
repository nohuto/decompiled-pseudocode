/*
 * XREFs of ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_SERVICE_GLOBALS@@T_RM_SYSTEM_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001B0E0
 * Callers:
 *     RmpMemoryMonitorStart @ 0x18001B058 (RmpMemoryMonitorStart.c)
 * Callees:
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18001AC04 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001ADF8 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE.c)
 */

void __fastcall RmpMemoryMonitorSetTimerIfEnabled(__int64 a1, char a2)
{
  int IdealTimerState; // eax
  int v3; // r8d
  __int64 v4; // r9

  IdealTimerState = RmpMemoryMonitorGetIdealTimerState(a2);
  if ( IdealTimerState )
    RmpMemoryMonitorSetTimer(v4, IdealTimerState, v3);
}
