/*
 * XREFs of ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800371B4
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180012B40 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800196E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18002E124 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180036CCC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180036E4C (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeAnyHost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _RM_RESOURCE_USAGE_LIMITS *a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  unsigned int v9; // ebx
  char v10; // si
  const struct _TlgProvider_t *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v17[3]; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-30h] BYREF

  v4 = *(_QWORD *)a1;
  v17[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v17;
  v16 = a3;
  v17[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v17;
  v17[2] = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)(a1 + 32);
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpPolicyPopulateActivityHostMetrics(
    v4,
    0,
    v4 + 144,
    0x43u,
    (unsigned __int8 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    (void *)2);
  v9 = 0;
  v10 = 0;
  if ( *(_DWORD *)(v4 + 180) )
  {
    RmpMemoryMonitorGenerateHostListAndRevoke(
      v4,
      v8,
      *(_QWORD *)(v16 + 24) - *(_QWORD *)(a2 + 24),
      3u,
      7u,
      (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v17);
    if ( *(_DWORD *)(v4 + 184) )
    {
      if ( (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)v17[0] == v17 )
        goto LABEL_14;
      v10 = 1;
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( !v10 )
  {
    RmpMemoryMonitorRebootIfAble((struct _RM_MEMORY_MONITOR_DATA *)a1, a4);
    return 2;
  }
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       28,
                       *(_DWORD *)(a1 + 72),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v16) )
  {
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v11, 1uLL) )
      TlgWrite(v12, &unk_180043EC8, v13, v14, 2u, &pData);
    v9 = 1;
  }
  else if ( (_DWORD)v16 == 2 )
  {
    v9 = 4;
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpActivityHostCleanupRemediationGroup(v17);
LABEL_14:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v9;
}
