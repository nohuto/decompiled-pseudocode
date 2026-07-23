/*
 * XREFs of RtlpHeapTrkInterceptor @ 0x180090FA0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x180090F44 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlpHeapTrkTrackAdd @ 0x18008ECCC (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18008EF88 (RtlpHeapTrkTrackRemove.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A6010 (RtlGetCurrentProcessorNumber.c)
 *     NtQueryPerformanceCounter @ 0x1800A6A40 (NtQueryPerformanceCounter.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F0380 (RtlpHeapTrkTrackRemoveHeap.c)
 */

__int64 __fastcall RtlpHeapTrkInterceptor(PVOID a1, unsigned __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned __int64 v9; // rbx
  ULONG CurrentProcessorNumber; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  signed __int32 v13; // eax
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER v17; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == HeapHandle || dword_1801534F0 == 1 )
    return 0LL;
  v4 = a3 - 2;
  if ( !v4 )
  {
LABEL_10:
    if ( a2 )
    {
      v9 = (a2 >> 3) | 0xE000000000000000uLL;
      if ( dword_180153108 == 1 )
      {
        RtlpHeapTrkTrackAdd((__int64)a1, v9);
      }
      else if ( dword_180153108 == 2 )
      {
        CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
        v11 = CurrentProcessorNumber < dword_1801530B8 ? CurrentProcessorNumber : 0;
        v12 = (unsigned int)v11;
        v13 = **(_DWORD **)(qword_180153450 + 8 * v11);
        v14 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v14 - v13) >= 0x3E8
          && v13 == _InterlockedCompareExchange(
                      *(volatile signed __int32 **)(qword_180153450 + 8LL * (unsigned int)v11),
                      v14,
                      v13) )
        {
          _InterlockedExchange64(
            (volatile __int64 *)(*(_QWORD *)(qword_180153450 + 8LL * (unsigned int)v11) + 8LL),
            PerformanceFrequency.QuadPart / 100);
        }
        v15 = *(_QWORD *)(qword_180153450 + 8LL * (unsigned int)v11);
        if ( *(__int64 *)(v15 + 8) > 0 )
        {
          NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
          RtlpHeapTrkTrackAdd((__int64)a1, v9);
          NtQueryPerformanceCounter(&v17, 0LL);
          v17.QuadPart -= PerformanceCounter.QuadPart;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_180153450 + 8 * v12) + 8LL),
            -1 - v17.QuadPart);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_180153450 + 8 * v12) + 16LL));
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
        }
      }
    }
    return 0LL;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 2 )
          RtlpHeapTrkTrackRemoveHeap();
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  if ( a2 )
    RtlpHeapTrkTrackRemove((__int64)a1, (a2 >> 3) | 0xE000000000000000uLL);
  return 0LL;
}
