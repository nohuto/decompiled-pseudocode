/*
 * XREFs of RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W44PendType@2@PEA_N5PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003574 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B08 (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800417F8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x180042574 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042CE4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x180042E8C (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     RmpActivityHostPopulateMetricsArray @ 0x18001D5A4 (RmpActivityHostPopulateMetricsArray.c)
 *     RmpActivityHostQueryPriority @ 0x18001D6E0 (RmpActivityHostQueryPriority.c)
 *     RmpEmPriorityCompare @ 0x18001D774 (RmpEmPriorityCompare.c)
 *     RmpObjectTableEnumerationGetNext @ 0x18001EF30 (RmpObjectTableEnumerationGetNext.c)
 *     RmpPolicyFilterActivityHostWithFlags @ 0x18001EFB0 (RmpPolicyFilterActivityHostWithFlags.c)
 *     RmpObjectTableEnumerationBegin @ 0x18001F564 (RmpObjectTableEnumerationBegin.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpPolicyPopulateActivityHostMetricsTable(
        int a1,
        unsigned int *a2,
        char *a3,
        char a4,
        __int64 (__fastcall *a5)(volatile signed __int32 *, __int64),
        __int64 a6)
{
  char *v6; // rbx
  unsigned int v11; // ebp
  volatile signed __int32 *Next; // rdi
  char v13; // al
  char *v14; // rbx
  __int64 result; // rax
  _QWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+78h] [rbp+10h] BYREF

  v6 = (char *)RmSvcGlobals;
  v11 = 0;
  memset_0(a3, 0, 56LL * *((unsigned int *)RmSvcGlobals + 6));
  RmpObjectTableEnumerationBegin(v6 + 24, v16);
  while ( 1 )
  {
    Next = (volatile signed __int32 *)RmpObjectTableEnumerationGetNext(v16);
    if ( !Next )
      break;
    if ( !a5
      || ((char *)a5 != (char *)RmpPolicyFilterActivityHostWithFlags
        ? (v13 = a5(Next, a6))
        : (v13 = RmpPolicyFilterActivityHostWithFlags(Next, a6)),
          v13) )
    {
      if ( (int)RmpActivityHostQueryPriority((__int64)Next, &v17) >= 0 && (int)RmpEmPriorityCompare(v17, a1) <= 0 )
      {
        v14 = &a3[56 * v11];
        memset_0(v14, 0, 0x38uLL);
        ++v11;
        *((_QWORD *)v14 + 5) = Next;
      }
    }
    RmpObjectRelease(Next);
  }
  RmpActivityHostPopulateMetricsArray((__int64)a3, v11, a4);
  result = RtlReleaseSRWLockShared(v16[0] + 16LL);
  *a2 = v11;
  return result;
}
