/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001C580
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000D830 (-LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180012A80 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180012B40 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800196E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18001AE34 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001AE48 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001AEF0 (-RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LE.c)
 *     ?RmpMemoryMonitorGetCurrentUsageLimits@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001C790 (-RmpMemoryMonitorGetCurrentUsageLimits@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_L.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001C7BC (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x180031AD8 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@@Z @ 0x180031D40 (-RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180035CD8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x18003606C (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x180036088 (-RmpMemoryMonitorCheckPeriod@@YAEKK@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(__int64 Parameter)
{
  __int64 v2; // r15
  DWORD TickCount; // eax
  int i; // ebp
  int j; // eax
  int v6; // edi
  int v7; // r14d
  const struct _TlgProvider_t *v8; // rcx
  int v9; // edi
  DWORD v10; // esi
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  int IdealTimerState; // eax
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // rbx
  int v20; // [rsp+30h] [rbp-D8h] BYREF
  int v21[3]; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE v22[128]; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
  TickCount = GetTickCount();
  *(_DWORD *)(Parameter + 80) = TickCount;
  *(_DWORD *)(Parameter + 88) = TickCount;
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpMemoryMonitorSetTimerIfEnabled(Parameter, 4LL);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  memset_0(v22, 0, sizeof(v22));
  RmpMemoryMonitorGetCurrentUsageLimits(
    (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
    (struct _RM_RESOURCE_USAGE_LIMITS *)v22,
    0LL);
  RmpMemoryMonitorWaitForEvents(
    (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
    7,
    0xFFFFFFFF,
    (enum _RM_MEMORY_MONITOR_EVENT *)&v20);
  for ( i = v20; v20 != 2; i = v20 )
  {
    for ( j = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((HANDLE *)Parameter, (__int64)v22, (__int64)v21);
          j != 4;
          j = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((HANDLE *)Parameter, (__int64)v22, (__int64)v21) )
    {
      if ( j == 3 )
        break;
      v6 = 0;
      if ( j == 2 )
        goto LABEL_5;
    }
    v6 = j;
LABEL_5:
    v7 = v21[0];
    RmpMemoryMonitorUpdateMemoryUsageLevel(Parameter, v21[0]);
    if ( v6 == 4 )
      break;
    if ( i != 1 && v6 == 3 && (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 1uLL) )
      TlgWrite(v15, &unk_180043FDC, v16, v17, 2u, &pData);
    if ( *(_DWORD *)(v2 + 496) && RmpMemoryMonitorCheckPeriod(*(_DWORD *)(Parameter + 76), *(_DWORD *)(Parameter + 80)) )
    {
      RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
        (struct _RM_RESOURCE_USAGE_LIMITS *)v22);
      *(_DWORD *)(Parameter + 80) = GetTickCount();
    }
    if ( *(_DWORD *)(v2 + 500) )
    {
      v9 = *(_DWORD *)(Parameter + 88);
      v10 = *(_DWORD *)(Parameter + 84);
      if ( GetTickCount() - v9 >= v10
        && !(unsigned int)RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy((__int64 *)Parameter, (__int64)v22) )
      {
        *(_DWORD *)(Parameter + 88) = GetTickCount();
      }
    }
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 1528LL);
    if ( v11 )
    {
      RtlEnterCriticalSection(&RmpGlobalLock);
      v12 = *(_DWORD *)(v11 + 240);
      if ( (v12 & 3) == 0 )
      {
        v13 = *(_QWORD *)(v11 + 224);
        *(_DWORD *)(v11 + 240) = v12 | 1;
        TpPostWork(v13);
      }
      if ( dword_18004D030 )
        ExecutionModel::ResourceManager::LogTimedOutRevocationRequests((ExecutionModel::ResourceManager *)v11);
      RtlLeaveCriticalSection(&RmpGlobalLock);
    }
    if ( i == 1 || RmpMemoryMonitorCheckEvent(*(void **)(Parameter + 16)) )
    {
      RtlEnterCriticalSection(&RmpGlobalLock);
      IdealTimerState = RmpMemoryMonitorGetIdealTimerState(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 624LL));
      if ( IdealTimerState )
        RmpMemoryMonitorSetTimer((__int64 *)Parameter, IdealTimerState, v7);
      RtlLeaveCriticalSection(&RmpGlobalLock);
    }
    RmpMemoryMonitorWaitForEvents(
      (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
      7,
      0xFFFFFFFF,
      (enum _RM_MEMORY_MONITOR_EVENT *)&v20);
  }
  TpSetTimer(*(_QWORD *)(Parameter + 64), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(Parameter + 64), 1LL);
  v18 = *(_QWORD *)Parameter;
  RmpPartitionTableRemovePartition(
    (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(v18 + 24) + 312LL),
    (struct _RM_PARTITION *)v18);
  RmpPartitionCleanup((struct _RM_PARTITION *)v18);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v18);
  return 0LL;
}
