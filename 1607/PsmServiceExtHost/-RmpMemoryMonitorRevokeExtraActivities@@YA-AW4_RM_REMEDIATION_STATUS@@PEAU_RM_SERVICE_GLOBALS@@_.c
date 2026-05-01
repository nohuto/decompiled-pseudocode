/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x1800339C4
 * Callers:
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800327B0 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVI.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180002040 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     RmpPolicyPopulateFastCommitUse @ 0x1800048C8 (RmpPolicyPopulateFastCommitUse.c)
 *     RmpPolicyGetCurrentUsageLimits @ 0x18000705C (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x18002ED34 (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180033318 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // r15
  unsigned int v6; // edi
  __int64 v7; // rdx
  int HostListAndRevoke; // ebx
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v15[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  _BYTE v19[144]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v2 = a1 + 328;
  v15[1] = v15;
  v5 = a1 + 424;
  v15[0] = v15;
  v15[2] = *(_QWORD **)(a1 + 352);
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v19, 0, 0x88uLL);
  RmpPolicyGetCurrentUsageLimits(v5, v5 + 64, (__int64)v19, (__int64)v16);
  v6 = 2;
  RmpPolicyPopulateActivityHostMetrics(a1, 0, v5 + 1360, 0x43u, RmpPolicyFilterActivityHostWithFlags, 2LL);
  RmpPolicyPopulateFastCommitUse((__int64)v16, *(_DWORD *)(v5 + 1396), *(_QWORD *)(v5 + 1360));
  if ( v18 - v17 < a2 )
  {
    v6 = 3;
LABEL_14:
    RtlLeaveCriticalSection(&RmpGlobalLock);
    return v6;
  }
  if ( !*(_DWORD *)(v5 + 1396) )
    goto LABEL_14;
  HostListAndRevoke = RmpMemoryMonitorGenerateHostListAndRevoke(
                        v5,
                        v7,
                        (int)v18 - (int)v17 - (int)a2,
                        1,
                        5,
                        (__int64)v15);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( HostListAndRevoke )
  {
    if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                         (HANDLE *)v2,
                         13,
                         *(_DWORD *)(v2 + 68),
                         (enum _RM_MEMORY_MONITOR_EVENT *)&v14) )
    {
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v9, 0x200000000001uLL) )
        TlgWrite(v10, &unk_18004198A, v11, v12, 2u, &pData);
      v6 = 1;
    }
    else if ( v14 == 2 )
    {
      v6 = 4;
    }
    else
    {
      v6 = 0;
    }
    RtlEnterCriticalSection(&RmpGlobalLock);
    RmpActivityHostCleanupRemediationGroup(v15);
    goto LABEL_14;
  }
  return v6;
}
