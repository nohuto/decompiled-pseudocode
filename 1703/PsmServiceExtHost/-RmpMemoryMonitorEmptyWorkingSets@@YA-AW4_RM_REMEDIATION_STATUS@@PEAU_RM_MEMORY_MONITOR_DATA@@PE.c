/*
 * XREFs of ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180036A38
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180012A80 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180012B40 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180036158 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800196E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18002E124 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180036440 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180036734 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptyWorkingSets(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int v7; // r15d
  __int64 v8; // r12
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // ebx
  __int16 v12; // ax
  unsigned __int16 v13; // dx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  unsigned __int16 v16; // r9
  unsigned int v17; // edx
  unsigned __int8 v18; // al
  const struct _TlgProvider_t *v19; // rcx
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  const struct _TlgProvider_t *v23; // rcx
  const GUID *v24; // r8
  const GUID *v25; // r9
  unsigned __int8 v27; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int8 v28[3]; // [rsp+41h] [rbp-38h] BYREF
  int v29; // [rsp+44h] [rbp-35h] BYREF
  int v30; // [rsp+48h] [rbp-31h]
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v31[3]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v32; // [rsp+68h] [rbp-11h]
  __int64 v33; // [rsp+70h] [rbp-9h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-1h] BYREF

  v33 = a3;
  v31[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v31;
  v31[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v31;
  v31[2] = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)(a1 + 32);
  v32 = a2;
  v27 = 0;
  v28[0] = 0;
  if ( (a4 & 0x20) != 0 )
  {
    v6 = 0;
    v7 = 0;
  }
  else
  {
    v7 = 1;
    v6 = (a4 & 8) != 0;
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  v8 = *(_QWORD *)a1;
  v9 = a4 & 1;
  v10 = a4 & 0x10;
  v29 = v9;
  v30 = (unsigned __int8)v10;
  v11 = 2;
  while ( 1 )
  {
    v12 = 40;
    if ( v6 != 1 )
      v12 = 8;
    v13 = v12 | 0x13;
    v14 = v9 == 0;
    v15 = a4 | 0x20;
    if ( v14 )
      v13 = v12;
    if ( v6 == 1 )
      v15 = a4;
    v16 = v13 | 2;
    if ( !v10 )
      v16 = v13;
    RmpPolicyPopulateActivityHostMetrics(
      *(_QWORD *)a1,
      0,
      v8 + 144,
      v16,
      (unsigned __int8 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *))RmpMemoryMonitorEmptyPolicyFilterCallback,
      (void *)v15);
    v17 = *(_DWORD *)(v8 + 180);
    if ( v17 )
    {
      RmpMemoryMonitorEmptyPolicyProcessHostArray(*(struct _RM_ACTIVITY_HOST_METRICS **)(v8 + 144), v17, a4);
      RmpMemoryMonitorEmptyPolicyActOnHosts(
        (struct _RM_MEMORY_MONITOR_DATA *)a1,
        *(struct _RM_ACTIVITY_HOST_METRICS **)(v8 + 144),
        *(_DWORD *)(v8 + 180),
        *(_QWORD *)(v32 + 56) - *(_QWORD *)(v33 + 56),
        a4,
        (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v31,
        &v27,
        v28);
      v18 = v27;
    }
    else
    {
      v18 = 0;
      v27 = 0;
    }
    if ( v18 )
      break;
    v9 = v29;
    ++v6;
    v10 = v30;
    if ( v6 > v7 )
      goto LABEL_33;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       13,
                       *(_DWORD *)(a1 + 72),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v29) )
  {
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v19, 1uLL) )
      TlgWrite(v23, &unk_180043C45, v24, v25, 2u, &pData);
    goto LABEL_31;
  }
  if ( v29 != 3 || !v28[0] )
    goto LABEL_31;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v19, 1uLL) )
    TlgWrite(v20, &unk_180043E97, v21, v22, 2u, &pData);
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       5,
                       *(_DWORD *)(a1 + 72),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v29)
    || v29 != 2 )
  {
LABEL_31:
    v11 = 0;
    goto LABEL_32;
  }
  v11 = 4;
LABEL_32:
  RtlEnterCriticalSection(&RmpGlobalLock);
LABEL_33:
  RmpActivityHostCleanupRemediationGroup(v31);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v11;
}
