/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003C5D8
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180022DE0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180001D28 (TraceLoggingProviderEnabled.c)
 *     RmpSystemMemoryMetricsQuery @ 0x18000561C (RmpSystemMemoryMetricsQuery.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x18003B88C (RmpActivityHostCleanupRemediationGroup.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003D194 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTI.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18003DB08 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

void __fastcall RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // r13
  _QWORD *v2; // rax
  void *v3; // r12
  unsigned int v4; // ecx
  UCHAR v5; // dl
  unsigned int v6; // r14d
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned __int64 v10; // r9
  _QWORD *v11; // rax
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  UCHAR v20; // dl
  TraceLoggingHProvider v21; // rcx
  const struct _TlgProvider_t *v22; // rcx
  int v23; // r9d
  const struct _TlgProvider_t *v24; // rcx
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r8
  const GUID *v27; // r9
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
  const GUID *v30; // r9
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v33[3]; // [rsp+58h] [rbp-B0h] BYREF
  struct _RM_MEMORY_MONITOR_DATA *v34; // [rsp+70h] [rbp-98h]
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  char v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-60h] BYREF
  char v38; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v39; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  char *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  __int64 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF

  v1 = (char *)a1 + 208;
  v34 = (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1672);
  v2 = (_QWORD *)*((_QWORD *)a1 + 212);
  v33[1] = v33;
  v33[0] = v33;
  v33[2] = v2;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v3 = (void *)*((_QWORD *)v1 + 178);
  v4 = *((_DWORD *)v1 + 42);
  LODWORD(v31) = *((_DWORD *)v1 + 360);
  RmpPolicyPopulateActivityHostMetricsTable(
    v4,
    &v31,
    v3,
    1LL,
    (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, __int64))RmpMemoryMonitorActiveLowPriFilterCallback,
    0LL);
  v6 = v31;
  if ( (_DWORD)v31 )
  {
    v32 = 0LL;
    v10 = 0LL;
    v11 = v3;
    v12 = (const struct _TlgProvider_t *)(unsigned int)v31;
    do
    {
      v10 += *v11;
      v11 += 6;
      v32 = v10;
      v12 = (const struct _TlgProvider_t *)((char *)v12 - 1);
    }
    while ( v12 );
    if ( v10 >= *((_QWORD *)v1 + 16) )
    {
      if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(0LL, 0x200000000001uLL) )
      {
        v41 = 8LL;
        v40 = (__int64 *)&v32;
        v44 = &v31;
        v42 = v1 + 128;
        v43 = 8LL;
        LODWORD(v31) = v6;
        v45 = 4LL;
        TlgWrite(v12, &unk_18005B948, v16, v17, 5u, &v39);
      }
      if ( TraceLoggingProviderEnabled(v12, v5, 1uLL) )
      {
        RmpSystemMemoryMetricsQuery(&v35);
        v19 = v32;
      }
      RmpMemoryMonitorGenerateHostListAndRevoke(v1, v18, v3, v6, *((_QWORD *)v1 + 16) - v19, 5, v33);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      RmpMemoryMonitorWaitForEvents(v34, 0xDu, *((_DWORD *)v34 + 19), (enum _RM_MEMORY_MONITOR_EVENT *)&v31);
      if ( TraceLoggingProviderEnabled(v21, v20, 1uLL) )
      {
        if ( v23 )
        {
          if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v22, 0x200000000001uLL) )
            TlgWrite(v28, &unk_18005BBD3, v29, v30, 2u, &pData);
        }
        else
        {
          RmpSystemMemoryMetricsQuery(&v37);
          if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v24, 1uLL) )
          {
            v40 = &v31;
            v42 = &v36;
            v44 = (__int64 *)&v38;
            v41 = 4LL;
            v43 = 8LL;
            v45 = 8LL;
            TlgWrite(v25, &unk_18005BF03, v26, v27, 5u, &v39);
          }
        }
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
    }
    else if ( (unsigned int)dword_1800690A0 > 5 && TlgKeywordOn(0LL, 0x200000000001uLL) )
    {
      v41 = 8LL;
      v40 = (__int64 *)&v32;
      v44 = &v31;
      v42 = v1 + 128;
      v43 = 8LL;
      LODWORD(v31) = v6;
      v45 = 4LL;
      TlgWrite(v13, &unk_18005BC09, v14, v15, 5u, &v39);
    }
  }
  else if ( (unsigned int)dword_1800690A0 > 5 && TlgKeywordOn(0LL, 1uLL) )
  {
    TlgWrite(v7, &unk_18005BF75, v8, v9, 2u, &pData);
  }
  RmpActivityHostCleanupRemediationGroup(v33);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
