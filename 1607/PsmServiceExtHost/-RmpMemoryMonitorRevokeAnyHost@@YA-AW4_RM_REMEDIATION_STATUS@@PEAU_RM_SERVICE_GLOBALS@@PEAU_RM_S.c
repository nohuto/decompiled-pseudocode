/*
 * XREFs of ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180033800
 * Callers:
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x180008710 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180002040 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x18002ED34 (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180033318 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180033498 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeAnyHost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _RM_RESOURCE_USAGE_LIMITS *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r14
  __int64 v9; // rdx
  unsigned int v10; // ebx
  char v11; // si
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v18[3]; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-30h] BYREF

  v4 = a1 + 328;
  v17 = a3;
  v18[1] = v18;
  v6 = a1 + 424;
  v18[0] = v18;
  v18[2] = *(_QWORD **)(a1 + 352);
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpPolicyPopulateActivityHostMetrics(a1, 0, v6 + 1360, 0x43u, RmpPolicyFilterActivityHostWithFlags, 2LL);
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(v6 + 1396) )
  {
    RmpMemoryMonitorGenerateHostListAndRevoke(v6, v9, *(_DWORD *)(v17 + 8) - *(_DWORD *)(a2 + 8), 3, 7, (__int64)v18);
    if ( *(_DWORD *)(v6 + 1400) )
    {
      if ( v18[0] == v18 )
        goto LABEL_14;
      v11 = 1;
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( !v11 )
  {
    RmpMemoryMonitorRebootIfAble((struct _RM_POLICY *)v6, (struct _RM_MEMORY_MONITOR_DATA *)v4, a4);
    return 2;
  }
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (HANDLE *)v4,
                       28,
                       *(_DWORD *)(v4 + 68),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v17) )
  {
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v12, 0x400000000001uLL) )
      TlgWrite(v13, &unk_18004178B, v14, v15, 2u, &pData);
    v10 = 1;
  }
  else if ( (_DWORD)v17 == 2 )
  {
    v10 = 4;
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpActivityHostCleanupRemediationGroup(v18);
LABEL_14:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v10;
}
