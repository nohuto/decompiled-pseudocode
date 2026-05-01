/*
 * XREFs of RmpSystemQueryMemUtilMetricsForHosts @ 0x18001C8E8
 * Callers:
 *     RmpActivityHostPopulateMetricsArray @ 0x18001D5A4 (RmpActivityHostPopulateMetricsArray.c)
 * Callees:
 *     RmpActivityHostQueryProcessListForMetrics @ 0x180006880 (RmpActivityHostQueryProcessListForMetrics.c)
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpActivityHostAggregateMemUtilMetricsByProcess @ 0x18001D1AC (RmpActivityHostAggregateMemUtilMetricsByProcess.c)
 *     RmpGetMemUtilFlagsFromHostMetricFlags @ 0x18001D810 (RmpGetMemUtilFlagsFromHostMetricFlags.c)
 *     MemUtilQueryProcessMetrics @ 0x18001D938 (MemUtilQueryProcessMetrics.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpSystemQueryMemUtilMetricsForHosts(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  int v4; // eax
  int *v5; // rbp
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // r14
  _DWORD *Heap; // rax
  _DWORD *v10; // rdi
  int *v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int MemUtilFlagsFromHostMetricFlags; // eax
  unsigned int ProcessMetrics; // eax
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  unsigned int v20; // [rsp+30h] [rbp-78h] BYREF
  PVOID P; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  unsigned int *v23; // [rsp+60h] [rbp-48h]
  int v24; // [rsp+68h] [rbp-40h]
  int v25; // [rsp+6Ch] [rbp-3Ch]

  P = 0LL;
  v4 = RmpActivityHostQueryProcessListForMetrics(a1, a2, &P, &v20);
  v5 = (int *)P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = v20;
    if ( v20 )
    {
      v8 = v20;
      Heap = RmpAllocateHeap((unsigned __int64)v20 << 6);
      v10 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, (unsigned __int64)v7 << 6);
        if ( v7 )
        {
          v12 = v10;
          v11 = v5 + 2;
          do
          {
            v13 = *v11;
            v11 += 4;
            *v12 = v13;
            v12 += 16;
            --v8;
          }
          while ( v8 );
        }
        MemUtilFlagsFromHostMetricFlags = RmpGetMemUtilFlagsFromHostMetricFlags(a3, v11);
        ProcessMetrics = MemUtilQueryProcessMetrics(v10, v7, MemUtilFlagsFromHostMetricFlags);
        if ( ProcessMetrics )
        {
          if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)ProcessMetrics, 1uLL) )
          {
            v25 = 0;
            v23 = &v20;
            v20 = (unsigned int)v17;
            v24 = 4;
            TlgWrite(v17, &unk_180064F47, v18, v19, 3u, &pData);
          }
          v6 = -1073741823;
        }
        else
        {
          RmpActivityHostAggregateMemUtilMetricsByProcess(v5, v7, v10, a3);
          v6 = 0;
        }
        RmpFreeHeap(v10);
      }
      else
      {
        v6 = -1073741801;
      }
    }
    else
    {
      v6 = 0;
    }
  }
  if ( v5 )
    RmpFreeHeap(v5);
  return v6;
}
