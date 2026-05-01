/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x180042E8C
 * Callers:
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x180041BD8 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     RmpActivityHostQueryCategory @ 0x180005ECC (RmpActivityHostQueryCategory.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x180040BB4 (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800427FC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800430E4 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  int v9; // r15d
  unsigned int v10; // edi
  size_t v11; // rsi
  __int64 v12; // rdx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  const struct _TlgProvider_t *v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  size_t NumOfElements; // [rsp+40h] [rbp-69h] BYREF
  _QWORD *v22[3]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v23; // [rsp+60h] [rbp-49h]
  __int64 v24; // [rsp+68h] [rbp-41h]
  __int64 v25; // [rsp+70h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-29h] BYREF
  size_t *p_NumOfElements; // [rsp+A0h] [rbp-9h]
  int v28; // [rsp+A8h] [rbp-1h]
  int v29; // [rsp+ACh] [rbp+3h]
  size_t v30; // [rsp+B0h] [rbp+7h]
  int v31; // [rsp+B8h] [rbp+Fh]
  int v32; // [rsp+BCh] [rbp+13h]

  v23 = a4;
  v22[1] = v22;
  v25 = a3;
  v22[0] = v22;
  v22[2] = *(_QWORD **)(a1 + 24);
  v24 = a2;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = *(char **)(a2 + 1344);
  LODWORD(NumOfElements) = *(_DWORD *)(a2 + 1360);
  v7 = 2;
  RmpPolicyPopulateActivityHostMetricsTable(
    2,
    (unsigned int *)&NumOfElements,
    v6,
    1,
    (__int64 (__fastcall *)(volatile signed __int32 *, __int64))RmpPolicyFilterActivityHostWithFlags,
    7LL);
  v8 = NumOfElements;
  qsort(
    v6,
    (unsigned int)NumOfElements,
    0x38uLL,
    (_CoreCrtNonSecureSearchSortCompareFunction)RmpMemoryMonitorCompareActivityHostsForTaskSwitchExemption);
  v9 = *(_DWORD *)(a1 + 64);
  v10 = v8;
  if ( v8 )
  {
    do
    {
      v11 = *(_QWORD *)&v6[56 * --v10 + 40];
      if ( (RmpActivityHostQueryCategory(v11) & 1) == 0 )
        break;
      --v9;
      v8 = v10;
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v13, 1uLL) )
      {
        v29 = 0;
        v32 = 0;
        p_NumOfElements = &NumOfElements;
        v30 = v11 + 24;
        NumOfElements = v11;
        v28 = v12 + 7;
        v31 = v12 + 7;
        TlgWrite((TraceLoggingHProvider)(unsigned int)(v12 + 7), &unk_1800634BD, v14, v15, 4u, &pData);
      }
    }
    while ( v9 && v10 );
    if ( v8 )
    {
      RmpMemoryMonitorGenerateHostListAndRevoke(
        v24,
        v12,
        v6,
        v8,
        *(_QWORD *)(v23 + 8) - *(_QWORD *)(v25 + 8),
        6,
        (__int64)v22);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( RmpMemoryMonitorWaitForEvents(
             (struct _RM_MEMORY_MONITOR_DATA *)a1,
             0xDu,
             *(_DWORD *)(a1 + 76),
             (enum _RM_MEMORY_MONITOR_EVENT *)&NumOfElements) )
      {
        if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v16, 0x200000000001uLL) )
          TlgWrite(v17, &unk_180063A90, v18, v19, 2u, &pData);
        v7 = 1;
      }
      else if ( (_DWORD)NumOfElements == 2 )
      {
        v7 = 4;
      }
      else
      {
        v7 = 0;
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
      RmpActivityHostCleanupRemediationGroup(v22);
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v7;
}
