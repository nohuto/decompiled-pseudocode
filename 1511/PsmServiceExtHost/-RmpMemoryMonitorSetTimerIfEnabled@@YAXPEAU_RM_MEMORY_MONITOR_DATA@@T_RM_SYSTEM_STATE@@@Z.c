/*
 * XREFs of ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@T_RM_SYSTEM_STATE@@@Z @ 0x180020F54
 * Callers:
 *     RmpMemoryMonitorStart @ 0x180020EBC (RmpMemoryMonitorStart.c)
 * Callees:
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18001F104 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@@Z @ 0x18001F3C0 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
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
