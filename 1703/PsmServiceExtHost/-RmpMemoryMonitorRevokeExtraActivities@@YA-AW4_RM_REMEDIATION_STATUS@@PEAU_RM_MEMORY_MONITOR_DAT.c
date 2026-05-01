/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180037358
 * Callers:
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180036158 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800196E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorGetCurrentUsageLimits@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001C790 (-RmpMemoryMonitorGetCurrentUsageLimits@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_L.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18002E124 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180033540 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180036CCC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(__int64 a1, unsigned __int64 a2)
{
  struct _RM_PARTITION *v2; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  int HostListAndRevoke; // ebx
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v14[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-90h]
  _BYTE v18[128]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  v2 = *(struct _RM_PARTITION **)a1;
  v14[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14;
  v14[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14;
  v14[2] = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)(a1 + 32);
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v18, 0, sizeof(v18));
  RmpMemoryMonitorGetCurrentUsageLimits(
    (struct _RM_PARTITION **)a1,
    (struct _RM_RESOURCE_USAGE_LIMITS *)v18,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v15);
  v5 = 2;
  RmpPolicyPopulateActivityHostMetrics(
    (__int64)v2,
    0,
    (__int64)v2 + 144,
    0x43u,
    (unsigned __int8 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    (void *)2);
  RmpPolicyPopulateFastCommitUse((struct _RM_SYSTEM_MEMORY_METRICS *)v15, (struct _RM_PARTITION *)((char *)v2 + 144));
  if ( v16 - v17 < a2 )
  {
    v5 = 3;
LABEL_14:
    RtlLeaveCriticalSection(&RmpGlobalLock);
    return v5;
  }
  if ( !*((_DWORD *)v2 + 45) )
    goto LABEL_14;
  HostListAndRevoke = RmpMemoryMonitorGenerateHostListAndRevoke(
                        (__int64)v2,
                        v6,
                        v16 - v17 - a2,
                        1u,
                        5u,
                        (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( HostListAndRevoke )
  {
    if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                         (struct _RM_MEMORY_MONITOR_DATA *)a1,
                         13,
                         *(_DWORD *)(a1 + 72),
                         (enum _RM_MEMORY_MONITOR_EVENT *)&v13) )
    {
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 1uLL) )
        TlgWrite(v9, &unk_180043E62, v10, v11, 2u, &pData);
      v5 = 1;
    }
    else if ( v13 == 2 )
    {
      v5 = 4;
    }
    else
    {
      v5 = 0;
    }
    RtlEnterCriticalSection(&RmpGlobalLock);
    RmpActivityHostCleanupRemediationGroup(v14);
    goto LABEL_14;
  }
  return v5;
}
