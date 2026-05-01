/*
 * XREFs of ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000326C
 * Callers:
 *     ?RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800057C0 (-RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180007520 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 * Callees:
 *     ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x1800033D0 (-RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCES.c)
 *     ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180003580 (-RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU.c)
 *     MemUtilQueryProcessMetrics @ 0x18000382C (MemUtilQueryProcessMetrics.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpSystemQueryMemUtilMetricsForHosts(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        unsigned __int16 a3)
{
  int v4; // ebx
  SIZE_T v5; // rbx
  __int64 v6; // rsi
  struct _MEMUTIL_PROCESS_METRICS *Heap; // rax
  struct _MEMUTIL_PROCESS_METRICS *v8; // rdi
  unsigned int v9; // ebx
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v10; // r14
  struct _MEMUTIL_PROCESS_METRICS *v11; // rcx
  int *v12; // rdx
  int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned int ProcessMetrics; // eax
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  unsigned int v21; // [rsp+30h] [rbp-29h] BYREF
  PVOID P; // [rsp+38h] [rbp-21h] BYREF
  int v23; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-11h] BYREF
  int *v25; // [rsp+68h] [rbp+Fh]
  int v26; // [rsp+70h] [rbp+17h]
  int v27; // [rsp+74h] [rbp+1Bh]

  P = 0LL;
  v4 = RmpActivityHostQueryProcessListForMetrics(a1, a2, (struct _RM_PROCESS_ID_HOST_METRICS_PAIR **)&P, &v21);
  if ( v4 >= 0 )
  {
    if ( v21 )
    {
      v5 = (unsigned __int64)v21 << 6;
      v6 = v21;
      Heap = (struct _MEMUTIL_PROCESS_METRICS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      v8 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, v5);
        v9 = v21;
        v10 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
        if ( v21 )
        {
          v11 = v8;
          v12 = (int *)((char *)P + 8);
          do
          {
            v13 = *v12;
            v12 += 4;
            *(_DWORD *)v11 = v13;
            v11 = (struct _MEMUTIL_PROCESS_METRICS *)((char *)v11 + 64);
            --v6;
          }
          while ( v6 );
        }
        v14 = (2 * (a3 & 4)) | 1;
        if ( (a3 & 8) == 0 )
          v14 = 2 * (a3 & 4);
        v15 = v14 | 0x40;
        if ( (a3 & 0x20) == 0 )
          v15 = v14;
        ProcessMetrics = MemUtilQueryProcessMetrics(v8, v9, v15);
        if ( ProcessMetrics )
        {
          if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)ProcessMetrics, 1uLL) )
          {
            v27 = 0;
            v25 = &v23;
            v23 = (int)v18;
            v26 = 4;
            TlgWrite(v18, &unk_180044301, v19, v20, 3u, &pData);
          }
          v4 = -1073741823;
        }
        else
        {
          RmpActivityHostAggregateMemUtilMetricsByProcess(v10, v9, v8, a3);
          v4 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      }
      else
      {
        v4 = -1073741801;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)v4;
}
