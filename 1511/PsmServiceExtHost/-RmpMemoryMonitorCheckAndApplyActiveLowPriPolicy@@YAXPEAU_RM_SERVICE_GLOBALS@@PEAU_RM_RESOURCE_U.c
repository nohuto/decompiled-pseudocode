/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800417F8
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180029C70 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180004330 (TraceLoggingProviderEnabled.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180006E30 (RmpSystemMemoryMetricsQuery.c)
 *     RmpPolicyGetCurrentUsageLimits @ 0x180006F48 (RmpPolicyGetCurrentUsageLimits.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x180040BB4 (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800427FC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800430E4 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

void __fastcall RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  char *v2; // r12
  char *v4; // r13
  char *v5; // r15
  int v6; // ecx
  UCHAR v7; // dl
  unsigned int v8; // esi
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned __int64 v12; // r9
  char *v13; // rax
  const struct _TlgProvider_t *v14; // rcx
  unsigned __int64 *v15; // r14
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  UCHAR v23; // dl
  TraceLoggingHProvider v24; // rcx
  const struct _TlgProvider_t *v25; // rcx
  int v26; // r9d
  const struct _TlgProvider_t *v27; // rcx
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
  const GUID *v30; // r9
  const struct _TlgProvider_t *v31; // rcx
  const GUID *v32; // r8
  const GUID *v33; // r9
  unsigned int v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v36[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  char v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  char v40; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v41; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  unsigned int *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  v2 = (char *)a1 + 1600;
  v4 = (char *)a1 + 208;
  v36[1] = v36;
  v36[0] = v36;
  v36[2] = *((_QWORD **)a1 + 203);
  RmpPolicyGetCurrentUsageLimits((__int64)a1 + 208, (__int64)a1 + 264, (__int64)a2, 0LL);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = (char *)*((_QWORD *)v4 + 168);
  v6 = *((_DWORD *)v4 + 344);
  v34 = *((_DWORD *)v4 + 340);
  RmpPolicyPopulateActivityHostMetricsTable(
    v6,
    &v34,
    v5,
    1,
    (__int64 (__fastcall *)(volatile signed __int32 *, __int64))RmpMemoryMonitorActiveLowPriFilterCallback,
    0LL);
  v8 = v34;
  if ( v34 )
  {
    v35 = 0LL;
    v12 = 0LL;
    v13 = v5;
    v14 = (const struct _TlgProvider_t *)v34;
    do
    {
      v12 += *(_QWORD *)v13;
      v13 += 56;
      v35 = v12;
      v14 = (const struct _TlgProvider_t *)((char *)v14 - 1);
    }
    while ( v14 );
    v15 = (unsigned __int64 *)((char *)a2 + 80);
    if ( v12 >= *v15 )
    {
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(0LL, 1uLL) )
      {
        v43 = 8LL;
        v42 = (unsigned int *)&v35;
        v46 = &v34;
        v44 = (char *)v15;
        v45 = 8LL;
        v34 = v8;
        v47 = 4LL;
        TlgWrite(v14, &unk_180063372, v19, v20, 5u, &v41);
      }
      if ( TraceLoggingProviderEnabled(v14, v7, 1uLL) )
      {
        RmpSystemMemoryMetricsQuery(&v37);
        v22 = v35;
      }
      RmpMemoryMonitorGenerateHostListAndRevoke(v4, v21, v5, v8, *v15 - v22, 5, v36);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      RmpMemoryMonitorWaitForEvents(
        (struct _RM_MEMORY_MONITOR_DATA *)v2,
        0xDu,
        *((_DWORD *)v2 + 19),
        (enum _RM_MEMORY_MONITOR_EVENT *)&v34);
      if ( TraceLoggingProviderEnabled(v24, v23, 1uLL) )
      {
        if ( v26 )
        {
          if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v25, 0x200000000001uLL) )
            TlgWrite(v31, &unk_1800635D0, v32, v33, 2u, &pData);
        }
        else
        {
          RmpSystemMemoryMetricsQuery(&v39);
          if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v27, 0x200000000001uLL) )
          {
            v42 = &v34;
            v44 = &v38;
            v46 = (unsigned int *)&v40;
            v43 = 4LL;
            v45 = 8LL;
            v47 = 8LL;
            TlgWrite(v28, &unk_180063508, v29, v30, 5u, &v41);
          }
        }
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
    }
    else if ( (unsigned int)dword_180071060 > 5 && TlgKeywordOn(0LL, 1uLL) )
    {
      v43 = 8LL;
      v42 = (unsigned int *)&v35;
      v46 = &v34;
      v44 = (char *)v15;
      v45 = 8LL;
      v34 = v8;
      v47 = 4LL;
      TlgWrite(v16, &unk_180063B9F, v17, v18, 5u, &v41);
    }
  }
  else if ( (unsigned int)dword_180071060 > 5 && TlgKeywordOn(0LL, 1uLL) )
  {
    TlgWrite(v9, &unk_1800637CD, v10, v11, 2u, &pData);
  }
  RmpActivityHostCleanupRemediationGroup(v36);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
