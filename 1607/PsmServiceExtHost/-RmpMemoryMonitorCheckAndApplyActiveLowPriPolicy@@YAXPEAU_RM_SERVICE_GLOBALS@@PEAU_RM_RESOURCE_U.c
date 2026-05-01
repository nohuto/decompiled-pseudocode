/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003233C
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001ED60 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180002040 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     RmpPolicyGetCurrentUsageLimits @ 0x18000705C (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180015250 (RmpSystemMemoryMetricsQuery.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x18002ED34 (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180033318 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_.c)
 */

void __fastcall RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  char *v2; // r13
  char *v4; // r15
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned __int64 v10; // r9
  _QWORD *v11; // rax
  const struct _TlgProvider_t *v12; // rdx
  unsigned __int64 *v13; // r14
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  UCHAR v21; // dl
  TraceLoggingHProvider v22; // rcx
  const struct _TlgProvider_t *v23; // rcx
  int v24; // r9d
  const struct _TlgProvider_t *v25; // rcx
  const struct _TlgProvider_t *v26; // rcx
  const GUID *v27; // r8
  const GUID *v28; // r9
  const struct _TlgProvider_t *v29; // rcx
  const GUID *v30; // r8
  const GUID *v31; // r9
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v34[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v35[3]; // [rsp+60h] [rbp-A0h] BYREF
  char v36; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v37[3]; // [rsp+B0h] [rbp-50h] BYREF
  char v38; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR v39; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v40; // [rsp+120h] [rbp+20h]
  int v41; // [rsp+128h] [rbp+28h]
  int v42; // [rsp+12Ch] [rbp+2Ch]
  char *v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+138h] [rbp+38h]
  int v45; // [rsp+13Ch] [rbp+3Ch]
  int *v46; // [rsp+140h] [rbp+40h]
  int v47; // [rsp+148h] [rbp+48h]
  int v48; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  v2 = (char *)a1 + 328;
  v4 = (char *)a1 + 424;
  v34[1] = v34;
  v34[0] = v34;
  v34[2] = *((_QWORD **)a1 + 44);
  RmpPolicyGetCurrentUsageLimits((__int64)a1 + 424, (__int64)a1 + 488, (__int64)a2, 0LL);
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpPolicyPopulateActivityHostMetrics(
    (__int64)a1,
    *((_DWORD *)v4 + 355),
    (__int64)(v4 + 1360),
    3u,
    (bool (__fastcall *)(__int64, char))RmpMemoryMonitorActiveLowPriFilterCallback,
    0LL);
  v6 = (const struct _TlgProvider_t *)*((unsigned int *)v4 + 349);
  if ( (_DWORD)v6 )
  {
    v10 = 0LL;
    v33 = 0LL;
    v11 = (_QWORD *)*((_QWORD *)v4 + 170);
    v12 = v6;
    do
    {
      v10 += *v11;
      v11 += 8;
      v33 = v10;
      v12 = (const struct _TlgProvider_t *)((char *)v12 - 1);
    }
    while ( v12 );
    v13 = (unsigned __int64 *)((char *)a2 + 96);
    if ( v10 >= *v13 )
    {
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v6, 1uLL) )
      {
        v42 = 0;
        v45 = 0;
        v48 = 0;
        v40 = (__int64 *)&v33;
        v46 = &v32;
        v41 = 8;
        v43 = (char *)v13;
        v44 = 8;
        v32 = (int)v6;
        v47 = 4;
        TlgWrite(v6, &unk_1800419BF, v17, v18, 5u, &v39);
      }
      if ( TraceLoggingProviderEnabled(v6, (UCHAR)v12, 1uLL) )
      {
        RmpSystemMemoryMetricsQuery(v35);
        v20 = v33;
      }
      RmpMemoryMonitorGenerateHostListAndRevoke(v4, v19, *v13 - v20, 1LL, 5, v34);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      RmpMemoryMonitorWaitForEvents((HANDLE *)v2, 13, *((_DWORD *)v2 + 17), (enum _RM_MEMORY_MONITOR_EVENT *)&v32);
      if ( TraceLoggingProviderEnabled(v22, v21, 1uLL) )
      {
        if ( v24 )
        {
          if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v23, 0x200000000001uLL) )
            TlgWrite(v29, &unk_180041B7A, v30, v31, 2u, &pData);
        }
        else
        {
          RmpSystemMemoryMetricsQuery(v37);
          if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v25, 0x200000000001uLL) )
          {
            v42 = 0;
            v45 = 0;
            v48 = 0;
            v40 = (__int64 *)&v32;
            v43 = &v36;
            v46 = (int *)&v38;
            v41 = 4;
            v44 = 8;
            v47 = 8;
            TlgWrite(v26, &unk_180041918, v27, v28, 5u, &v39);
          }
        }
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
    }
    else if ( (unsigned int)dword_18004C030 > 5 && TlgKeywordOn(v6, 1uLL) )
    {
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v40 = (__int64 *)&v33;
      v41 = 8;
      v43 = (char *)v13;
      v47 = 4;
      v44 = 8;
      v32 = (int)v14;
      v46 = &v32;
      TlgWrite(v14, &unk_1800417F9, v15, v16, 5u, &v39);
    }
  }
  else if ( (unsigned int)dword_18004C030 > 5 && TlgKeywordOn(v6, (unsigned int)((_DWORD)v6 + 1)) )
  {
    TlgWrite(v7, &unk_1800417BE, v8, v9, 2u, &pData);
  }
  RmpActivityHostCleanupRemediationGroup(v34);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
