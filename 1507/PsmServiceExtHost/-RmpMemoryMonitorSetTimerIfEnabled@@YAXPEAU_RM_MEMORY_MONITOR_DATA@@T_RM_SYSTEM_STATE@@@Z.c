/*
 * XREFs of ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@T_RM_SYSTEM_STATE@@@Z @ 0x180019A80
 * Callers:
 *     RmpMemoryMonitorStart @ 0x1800199E8 (RmpMemoryMonitorStart.c)
 * Callees:
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@@Z @ 0x18000577C (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x1800059D0 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 */

__int64 __fastcall RmpMemoryMonitorSetTimerIfEnabled(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = RmpMemoryMonitorGetIdealTimerState(a2);
  if ( (_DWORD)result )
    return RmpMemoryMonitorSetTimer(v3, result);
  return result;
}
