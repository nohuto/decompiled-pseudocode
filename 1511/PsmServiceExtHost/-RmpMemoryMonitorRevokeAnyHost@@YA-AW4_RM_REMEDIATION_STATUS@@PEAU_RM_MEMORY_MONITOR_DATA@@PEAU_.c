/*
 * XREFs of ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042CE4
 * Callers:
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x18000A190 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x180040BB4 (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800427FC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042980 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800430E4 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeAnyHost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _RM_RESOURCE_USAGE_LIMITS *a5)
{
  char *v9; // r15
  __int64 v10; // rdx
  unsigned int v11; // ebx
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v17; // [rsp+40h] [rbp-21h] BYREF
  _QWORD *v18[3]; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-1h] BYREF

  v18[1] = v18;
  v18[0] = v18;
  v18[2] = *(_QWORD **)(a1 + 24);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v9 = *(char **)(a2 + 1344);
  v17 = *(_DWORD *)(a2 + 1360);
  RmpPolicyPopulateActivityHostMetricsTable(
    2,
    &v17,
    v9,
    1,
    (__int64 (__fastcall *)(volatile signed __int32 *, __int64))RmpPolicyFilterActivityHostWithFlags,
    3LL);
  v11 = 0;
  if ( v17 )
    RmpMemoryMonitorGenerateHostListAndRevoke(
      a2,
      v10,
      v9,
      v17,
      *(_QWORD *)(a4 + 8) - *(_QWORD *)(a3 + 8),
      7,
      (__int64)v18);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v17 )
  {
    if ( RmpMemoryMonitorWaitForEvents(
           (struct _RM_MEMORY_MONITOR_DATA *)a1,
           0x1Cu,
           *(_DWORD *)(a1 + 76),
           (enum _RM_MEMORY_MONITOR_EVENT *)&v17) )
    {
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v12, 0x400000000001uLL) )
        TlgWrite(v13, &unk_18006333F, v14, v15, 2u, &pData);
      v11 = 1;
    }
    else if ( v17 == 2 )
    {
      v11 = 4;
    }
    RtlEnterCriticalSection(&RmpGlobalLock);
    RmpActivityHostCleanupRemediationGroup(v18);
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    RmpMemoryMonitorRebootIfAble((struct _RM_POLICY *)a2, (struct _RM_MEMORY_MONITOR_DATA *)a1, a5);
    return 2;
  }
  return v11;
}
