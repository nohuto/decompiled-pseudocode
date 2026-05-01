/*
 * XREFs of ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x18003CF80
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180002F60 (-RmpMemoryMonitorCheckMetricsAndRemediate@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180022DE0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x18003B88C (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x18003CBCC (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18003CE40 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18003DB08 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptyWorkingSets(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 v9; // bx
  void *v10; // r14
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  const struct _TlgProvider_t *v14; // rcx
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  unsigned __int8 v22; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int8 v23[3]; // [rsp+41h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-2Dh] BYREF
  _QWORD *v25[3]; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-11h] BYREF

  v25[1] = v25;
  v25[0] = v25;
  v25[2] = *(_QWORD **)(a1 + 24);
  if ( (a5 & 1) != 0 )
    v9 = 12;
  else
    v9 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v10 = *(void **)(a2 + 1424);
  v11 = v9;
  v24 = *(_DWORD *)(a2 + 1440);
  v12 = 2;
  RmpPolicyPopulateActivityHostMetricsTable(
    2u,
    &v24,
    v10,
    v11,
    (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, __int64))RmpMemoryMonitorEmptyPolicyFilterCallback,
    a5);
  v13 = v24;
  if ( v24 )
  {
    RmpMemoryMonitorEmptyPolicyProcessHostArray((struct _RM_ACTIVITY_HOST_METRICS *)v10, v24, a5);
    RmpMemoryMonitorEmptyPolicyActOnHosts(
      (struct _RM_ACTIVITY_HOST_METRICS *)v10,
      v13,
      *(_QWORD *)(a3 + 40) - *(_QWORD *)(a4 + 40),
      a5,
      (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v25,
      &v22,
      v23);
    if ( v22 )
    {
      RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( RmpMemoryMonitorWaitForEvents(
             (struct _RM_MEMORY_MONITOR_DATA *)a1,
             0xDu,
             *(_DWORD *)(a1 + 76),
             (enum _RM_MEMORY_MONITOR_EVENT *)&v24) )
      {
        if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v14, 0x200000000001uLL) )
          TlgWrite(v18, &unk_18005BFE5, v19, v20, 2u, &pData);
      }
      else if ( v24 == 3 && v23[0] )
      {
        if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v14, 1uLL) )
          TlgWrite(v15, &unk_18005BA45, v16, v17, 2u, &pData);
        if ( !RmpMemoryMonitorWaitForEvents(
                (struct _RM_MEMORY_MONITOR_DATA *)a1,
                5u,
                *(_DWORD *)(a1 + 76),
                (enum _RM_MEMORY_MONITOR_EVENT *)&v24)
          && v24 == 2 )
        {
          v12 = 4;
LABEL_19:
          RtlEnterCriticalSection(&RmpGlobalLock);
          goto LABEL_20;
        }
      }
      v12 = 0;
      goto LABEL_19;
    }
  }
LABEL_20:
  RmpActivityHostCleanupRemediationGroup(v25);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v12;
}
