/*
 * XREFs of ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D5F4
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180002F60 (-RmpMemoryMonitorCheckMetricsAndRemediate@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x18003B88C (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003D194 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTI.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@@Z @ 0x18003D328 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18003DB08 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeAnyHost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // r15
  __int64 v9; // rdx
  unsigned int v10; // ebx
  UCHAR v11; // dl
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v17; // [rsp+40h] [rbp-19h] BYREF
  _QWORD *v18[3]; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF

  v18[1] = v18;
  v18[0] = v18;
  v18[2] = *(_QWORD **)(a1 + 24);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v8 = *(_QWORD **)(a2 + 1424);
  v17 = *(_DWORD *)(a2 + 1440);
  RmpPolicyPopulateActivityHostMetricsTable(
    2u,
    &v17,
    v8,
    1LL,
    (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, __int64))RmpPolicyFilterActivityHostWithFlags,
    3LL);
  v10 = 0;
  if ( v17 )
    RmpMemoryMonitorGenerateHostListAndRevoke(
      a2,
      v9,
      v8,
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
      if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v12, 0x200000000001uLL) )
        TlgWrite(v13, &unk_18005B9D3, v14, v15, 2u, &pData);
      v10 = 1;
    }
    else if ( v17 == 2 )
    {
      v10 = 4;
    }
    RtlEnterCriticalSection(&RmpGlobalLock);
    RmpActivityHostCleanupRemediationGroup(v18);
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    RmpMemoryMonitorRebootIfAble((struct _RM_POLICY *)a2, v11);
    return 2;
  }
  return v10;
}
