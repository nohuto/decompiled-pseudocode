/*
 * XREFs of ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001ADF8
 * Callers:
 *     RmpMemoryMonitorOnSystemStateChanged @ 0x18001AB20 (RmpMemoryMonitorOnSystemStateChanged.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_SERVICE_GLOBALS@@T_RM_SYSTEM_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001B0E0 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_SERVICE_GLOBALS@@T_RM_SYSTEM_STATE@@W4_RM_RESOURC.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpMemoryMonitorSetTimer(__int64 a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 3340) & 2) == 0 )
  {
    if ( a2 == 1 )
      v3 = 0xFFFFFFFFLL;
    else
      v3 = 1000LL;
    v4 = *(_QWORD *)(a1 + 384);
    v5 = -10000000LL;
    if ( a3 <= 0 )
      v5 = -50000000LL;
    v6 = v5;
    TpSetTimer(v4, &v6, 0LL, v3);
  }
}
