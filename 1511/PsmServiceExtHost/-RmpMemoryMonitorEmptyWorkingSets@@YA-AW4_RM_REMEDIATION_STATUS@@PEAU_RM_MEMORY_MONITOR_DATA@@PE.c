/*
 * XREFs of ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x180042574
 * Callers:
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x18000A190 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180029C70 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x180041BD8 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x180040BB4 (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x180041F8C (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180042258 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800430E4 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptyWorkingSets(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  unsigned int v7; // edi
  unsigned int v8; // r14d
  unsigned int v9; // ebx
  char v10; // dl
  unsigned int v11; // ecx
  char *v12; // r13
  unsigned __int8 v13; // al
  const struct _TlgProvider_t *v15; // rcx
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  unsigned __int8 v22; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int8 v23[3]; // [rsp+41h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-3Dh] BYREF
  __int64 v25; // [rsp+48h] [rbp-39h]
  _QWORD *v26[3]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v27; // [rsp+68h] [rbp-19h]
  __int64 v28; // [rsp+70h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-9h] BYREF

  v26[1] = v26;
  v26[0] = v26;
  v5 = a2;
  v26[2] = *(_QWORD **)(a1 + 24);
  v27 = a4;
  v28 = a3;
  v25 = a2;
  v22 = 0;
  v23[0] = 0;
  if ( (a5 & 0x20) != 0 )
  {
    v7 = 0;
    v8 = 0;
  }
  else
  {
    v8 = 1;
    v7 = (a5 & 8) != 0;
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( v7 <= v8 )
  {
    v9 = 4;
    while ( 1 )
    {
      v10 = 4;
      if ( v7 == 1 )
        v10 = 20;
      if ( (a5 & 1) != 0 )
        v10 |= 8u;
      v11 = a5;
      if ( v7 != 1 )
        v11 = a5 | 0x20;
      v12 = *(char **)(v5 + 1344);
      v24 = *(_DWORD *)(v25 + 1360);
      RmpPolicyPopulateActivityHostMetricsTable(
        2,
        &v24,
        v12,
        v10,
        (__int64 (__fastcall *)(volatile signed __int32 *, __int64))RmpMemoryMonitorEmptyPolicyFilterCallback,
        v11);
      if ( v24 )
      {
        RmpMemoryMonitorEmptyPolicyProcessHostArray((struct _RM_ACTIVITY_HOST_METRICS *)v12, v24, a5);
        RmpMemoryMonitorEmptyPolicyActOnHosts(
          (struct _RM_ACTIVITY_HOST_METRICS *)v12,
          v24,
          *(_QWORD *)(v28 + 40) - *(_QWORD *)(v27 + 40),
          a5,
          (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v26,
          &v22,
          v23);
        v13 = v22;
      }
      else
      {
        v13 = 0;
        v22 = 0;
      }
      if ( v13 )
        break;
      v5 = v25;
      if ( ++v7 > v8 )
        goto LABEL_17;
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( RmpMemoryMonitorWaitForEvents(
           (struct _RM_MEMORY_MONITOR_DATA *)a1,
           0xDu,
           *(_DWORD *)(a1 + 76),
           (enum _RM_MEMORY_MONITOR_EVENT *)&v24) )
    {
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v15, 0x400000000001uLL) )
        TlgWrite(v19, &unk_180063606, v20, v21, 2u, &pData);
    }
    else if ( v24 == 3 && v23[0] )
    {
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v15, 1uLL) )
        TlgWrite(v16, &unk_180063C71, v17, v18, 2u, &pData);
      if ( !RmpMemoryMonitorWaitForEvents(
              (struct _RM_MEMORY_MONITOR_DATA *)a1,
              5u,
              *(_DWORD *)(a1 + 76),
              (enum _RM_MEMORY_MONITOR_EVENT *)&v24)
        && v24 == 2 )
      {
        goto LABEL_32;
      }
    }
    v9 = 0;
LABEL_32:
    RtlEnterCriticalSection(&RmpGlobalLock);
    goto LABEL_18;
  }
LABEL_17:
  v9 = 2;
LABEL_18:
  RmpActivityHostCleanupRemediationGroup(v26);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v9;
}
