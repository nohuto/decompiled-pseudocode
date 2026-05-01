/*
 * XREFs of ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180033070
 * Callers:
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x180008710 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001ED60 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800327B0 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVI.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180002040 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x18002ED34 (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180032AA8 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180032D6C (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptyWorkingSets(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  struct _RM_ACTIVITY_HOST_METRICS **v9; // r10
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int8 v13; // al
  unsigned int v14; // ebx
  const struct _TlgProvider_t *v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  unsigned __int8 v23; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int8 v24[7]; // [rsp+41h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v26[3]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v27; // [rsp+68h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF

  v4 = a4;
  v26[1] = v26;
  v26[0] = v26;
  v5 = a1 + 328;
  v26[2] = *(_QWORD **)(a1 + 352);
  v27 = a3;
  v25 = a2;
  v23 = 0;
  v24[0] = 0;
  if ( (a4 & 0x20) != 0 )
  {
    v7 = 0;
    v8 = 0;
  }
  else
  {
    v8 = 1;
    v7 = (a4 & 8) != 0;
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  v9 = (struct _RM_ACTIVITY_HOST_METRICS **)(a1 + 1784);
  if ( v7 <= v8 )
  {
    while ( 1 )
    {
      v10 = 8;
      if ( v7 == 1 )
        v10 = 40;
      if ( (v4 & 1) != 0 )
        v10 |= 0x13u;
      if ( (v4 & 0x10) != 0 )
        v10 |= 2u;
      v11 = v4;
      if ( v7 != 1 )
        v11 = (unsigned int)v4 | 0x20;
      RmpPolicyPopulateActivityHostMetrics(
        a1,
        0,
        (__int64)v9,
        v10,
        (bool (__fastcall *)(__int64, char))RmpMemoryMonitorEmptyPolicyFilterCallback,
        v11);
      v9 = (struct _RM_ACTIVITY_HOST_METRICS **)(a1 + 1784);
      v12 = *(_DWORD *)(a1 + 1820);
      if ( v12 )
      {
        RmpMemoryMonitorEmptyPolicyProcessHostArray(*v9, v12, v4);
        RmpMemoryMonitorEmptyPolicyActOnHosts(
          (struct _RM_SERVICE_GLOBALS *)a1,
          *(struct _RM_ACTIVITY_HOST_METRICS **)(a1 + 1784),
          *(_DWORD *)(a1 + 1820),
          *(_QWORD *)(v25 + 48) - *(_QWORD *)(v27 + 48),
          v4,
          (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v26,
          &v23,
          v24);
        v13 = v23;
        v9 = (struct _RM_ACTIVITY_HOST_METRICS **)(a1 + 1784);
      }
      else
      {
        v13 = 0;
        v23 = 0;
      }
      if ( v13 )
        break;
      if ( ++v7 > v8 )
        goto LABEL_18;
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                         (HANDLE *)v5,
                         13,
                         *(_DWORD *)(v5 + 68),
                         (enum _RM_MEMORY_MONITOR_EVENT *)&v25) )
    {
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v16, 0x400000000001uLL) )
        TlgWrite(v20, &unk_180041F4D, v21, v22, 2u, &pData);
    }
    else if ( (_DWORD)v25 == 3 && v24[0] )
    {
      v14 = 4;
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v16, 1uLL) )
        TlgWrite(v17, &unk_180041B49, v18, v19, 2u, &pData);
      if ( !(unsigned int)RmpMemoryMonitorWaitForEvents(
                            (HANDLE *)v5,
                            5,
                            *(_DWORD *)(v5 + 68),
                            (enum _RM_MEMORY_MONITOR_EVENT *)&v25)
        && (_DWORD)v25 == 2 )
      {
        goto LABEL_33;
      }
    }
    v14 = 0;
LABEL_33:
    RtlEnterCriticalSection(&RmpGlobalLock);
    goto LABEL_19;
  }
LABEL_18:
  v14 = 2;
LABEL_19:
  RmpActivityHostCleanupRemediationGroup(v26);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v14;
}
