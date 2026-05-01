/*
 * XREFs of RmpSystemQueryMemUtilMetricsForHosts @ 0x18001938C
 * Callers:
 *     RmpActivityHostPopulateMetrics @ 0x1800090B0 (RmpActivityHostPopulateMetrics.c)
 *     RmpEnforcementWorkCallback @ 0x180016C10 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostAggregateMemUtilMetricsByProcess @ 0x180018EEC (RmpActivityHostAggregateMemUtilMetricsByProcess.c)
 *     RmpGetMemUtilFlagsFromHostMetricFlags @ 0x180019368 (RmpGetMemUtilFlagsFromHostMetricFlags.c)
 *     RmpActivityHostQueryProcessListForMetrics @ 0x1800194D4 (RmpActivityHostQueryProcessListForMetrics.c)
 *     MemUtilQueryProcessMetrics @ 0x180019674 (MemUtilQueryProcessMetrics.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpSystemQueryMemUtilMetricsForHosts(__int64 a1, __int64 a2, __int16 a3)
{
  int v4; // ebx
  SIZE_T v5; // rbx
  __int64 v6; // rsi
  _DWORD *Heap; // rax
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  __int64 *v10; // r14
  _DWORD *v11; // rcx
  int *v12; // rdx
  int v13; // eax
  unsigned int MemUtilFlagsFromHostMetricFlags; // eax
  unsigned int ProcessMetrics; // eax
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  unsigned int v20; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  int v22; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  int *v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+74h] [rbp-Ch]

  P = 0LL;
  v4 = RmpActivityHostQueryProcessListForMetrics(a1, a2, &P, &v20);
  if ( v4 >= 0 )
  {
    if ( v20 )
    {
      v5 = (unsigned __int64)v20 << 6;
      v6 = v20;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      v8 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, v5);
        v9 = v20;
        v10 = (__int64 *)P;
        if ( v20 )
        {
          v11 = v8;
          v12 = (int *)((char *)P + 8);
          do
          {
            v13 = *v12;
            v12 += 4;
            *v11 = v13;
            v11 += 16;
            --v6;
          }
          while ( v6 );
        }
        MemUtilFlagsFromHostMetricFlags = RmpGetMemUtilFlagsFromHostMetricFlags(a3);
        ProcessMetrics = MemUtilQueryProcessMetrics(v8, v9, MemUtilFlagsFromHostMetricFlags);
        if ( ProcessMetrics )
        {
          if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)ProcessMetrics, 1uLL) )
          {
            v26 = 0;
            v24 = &v22;
            v22 = (int)v17;
            v25 = 4;
            TlgWrite(v17, &unk_18004328D, v18, v19, 3u, &pData);
          }
          v4 = -1073741823;
        }
        else
        {
          RmpActivityHostAggregateMemUtilMetricsByProcess(v10, v9, (__int64)v8, a3);
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
