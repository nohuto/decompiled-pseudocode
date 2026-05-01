/*
 * XREFs of RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074
 * Callers:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B4C (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAPEAU_RM_ACTIVITY_HOST@@PEAK@Z @ 0x18000CF94 (-RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RES.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003C5D8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x18003CF80 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D5F4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D794 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     RmpObjectTableEnumerationBegin @ 0x180005734 (RmpObjectTableEnumerationBegin.c)
 *     RmpObjectTableEnumerationGetNext @ 0x180006188 (RmpObjectTableEnumerationGetNext.c)
 *     RmpPolicyFilterActivityHostWithFlags @ 0x180006210 (RmpPolicyFilterActivityHostWithFlags.c)
 *     RmpPolicyActivityHostMetricsInitialize @ 0x18000717C (RmpPolicyActivityHostMetricsInitialize.c)
 *     RmpEmPriorityCompare @ 0x180007394 (RmpEmPriorityCompare.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     RmpActivityHostQueryPriority @ 0x18000A5A8 (RmpActivityHostQueryPriority.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpPolicyPopulateActivityHostMetricsTable(
        unsigned int a1,
        _DWORD *a2,
        void *a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct _RM_ACTIVITY_HOST *, __int64),
        __int64 a6)
{
  LPVOID v6; // rbx
  int v9; // esi
  struct _RM_ACTIVITY_HOST *Next; // rbx
  char v11; // al
  int v12; // eax
  struct _RM_ACTIVITY_HOST *v13; // rcx
  __int64 result; // rax
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF

  v6 = RmSvcGlobals;
  v9 = 0;
  memset_0(a3, 0, 48LL * *((unsigned int *)RmSvcGlobals + 6));
  RmpObjectTableEnumerationBegin((__int64)v6 + 24, v15);
  while ( 1 )
  {
    Next = (struct _RM_ACTIVITY_HOST *)RmpObjectTableEnumerationGetNext(v15);
    if ( !Next )
      break;
    if ( !a5
      || ((char *)a5 != (char *)RmpPolicyFilterActivityHostWithFlags
        ? (v11 = a5(Next, a6))
        : (v11 = RmpPolicyFilterActivityHostWithFlags(Next, a6)),
          v11) )
    {
      if ( (int)RmpActivityHostQueryPriority(Next, &v16) >= 0 )
      {
        v12 = RmpEmPriorityCompare(v16, a1);
        v13 = Next;
        if ( v12 > 0 )
          goto LABEL_11;
        RmpPolicyActivityHostMetricsInitialize(Next);
        ++v9;
      }
    }
    v13 = Next;
LABEL_11:
    RmpObjectRelease(v13);
  }
  result = RtlReleaseSRWLockShared(v15[0] + 16LL);
  *a2 = v9;
  return result;
}
