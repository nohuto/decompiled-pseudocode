/*
 * XREFs of ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@@Z @ 0x18000577C
 * Callers:
 *     RmpMemoryMonitorOnSystemStateChanged @ 0x180005934 (RmpMemoryMonitorOnSystemStateChanged.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@T_RM_SYSTEM_STATE@@@Z @ 0x180019A80 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@T_RM_SYSTEM_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorSetTimer(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 == 1 )
    v2 = 0xFFFFFFFFLL;
  else
    v2 = *(unsigned int *)(a1 + 72);
  v4 = -10000LL * *(unsigned int *)(a1 + 68);
  return TpSetTimer(*(_QWORD *)(a1 + 56), &v4, 0LL, v2);
}
