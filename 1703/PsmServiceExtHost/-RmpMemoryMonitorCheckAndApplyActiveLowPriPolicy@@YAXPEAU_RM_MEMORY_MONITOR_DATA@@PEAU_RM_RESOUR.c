/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180035CD8
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001C580 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800196E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorGetCurrentUsageLimits@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001C790 (-RmpMemoryMonitorGetCurrentUsageLimits@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_L.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18002E124 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180036CCC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 */

void __fastcall RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  struct _RM_PARTITION *v2; // r13
  __int64 v5; // rbx
  __int64 v6; // r14
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned __int64 v11; // r9
  unsigned int i; // edx
  __int64 v13; // rcx
  unsigned __int64 *v14; // r15
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  UCHAR v22; // dl
  TraceLoggingHProvider v23; // rcx
  const struct _TlgProvider_t *v24; // rcx
  int v25; // r9d
  const struct _TlgProvider_t *v26; // rcx
  const struct _TlgProvider_t *v27; // rcx
  const GUID *v28; // r8
  const GUID *v29; // r9
  const struct _TlgProvider_t *v30; // rcx
  const GUID *v31; // r8
  const GUID *v32; // r9
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v35[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v36[16]; // [rsp+60h] [rbp-A0h] BYREF
  char v37; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v39; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR v40; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  char *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF

  v2 = *(struct _RM_PARTITION **)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v35[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v35;
  v35[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v35;
  v35[2] = *((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)a1 + 4);
  RmpMemoryMonitorGetCurrentUsageLimits((struct _RM_PARTITION **)a1, a2, 0LL);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = *(_QWORD *)a1 + 144LL;
  RmpPolicyPopulateActivityHostMetrics(
    (__int64)v2,
    *(_DWORD *)(v5 + 516),
    v6,
    3u,
    (unsigned __int8 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *))RmpMemoryMonitorActiveLowPriFilterCallback,
    0LL);
  v7 = 0LL;
  if ( *(_DWORD *)(v6 + 36) )
  {
    v34 = 0LL;
    v11 = 0LL;
    for ( i = 0; i < *(_DWORD *)(v6 + 36); v34 = v11 )
    {
      v13 = i++;
      v7 = (const struct _TlgProvider_t *)(v13 << 6);
      v11 += *(_QWORD *)((char *)v7 + *(_QWORD *)v6);
    }
    v14 = (unsigned __int64 *)((char *)a2 + 96);
    if ( v11 >= *v14 )
    {
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v7, 1uLL) )
      {
        v42 = 8LL;
        v41 = (__int64 *)&v34;
        v33 = *(_DWORD *)(v6 + 36);
        v45 = &v33;
        v43 = (char *)v14;
        v44 = 8LL;
        v46 = 4LL;
        TlgWrite(v7, &unk_180043B5D, v18, v19, 5u, &v40);
      }
      if ( TraceLoggingProviderEnabled(v7, i, 1uLL) )
      {
        RmpSystemMemoryMetricsQuery(v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v36);
        v21 = v34;
      }
      RmpMemoryMonitorGenerateHostListAndRevoke(v2, v20, *v14 - v21, 1LL, 5, v35);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      RmpMemoryMonitorWaitForEvents(a1, 13, *((_DWORD *)a1 + 18), (enum _RM_MEMORY_MONITOR_EVENT *)&v33);
      if ( TraceLoggingProviderEnabled(v23, v22, 1uLL) )
      {
        if ( v25 )
        {
          if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v24, 0x200000000001uLL) )
            TlgWrite(v30, &unk_1800440A0, v31, v32, 2u, &pData);
        }
        else
        {
          RmpSystemMemoryMetricsQuery(v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v38);
          if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v26, 0x200000000001uLL) )
          {
            v41 = (__int64 *)&v33;
            v43 = &v37;
            v45 = (int *)&v39;
            v42 = 4LL;
            v44 = 8LL;
            v46 = 8LL;
            TlgWrite(v27, &unk_180043C74, v28, v29, 5u, &v40);
          }
        }
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
    }
    else if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn(v7, 1uLL) )
    {
      v42 = 8LL;
      v41 = (__int64 *)&v34;
      v33 = *(_DWORD *)(v6 + 36);
      v45 = &v33;
      v43 = (char *)v14;
      v44 = 8LL;
      v46 = 4LL;
      TlgWrite(v15, &unk_180043D7F, v16, v17, 5u, &v40);
    }
  }
  else if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn(0LL, 1uLL) )
  {
    TlgWrite(v8, &unk_1800439C9, v9, v10, 2u, &pData);
  }
  RmpActivityHostCleanupRemediationGroup(v35);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
