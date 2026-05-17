/*
 * XREFs of RtlHeapTrkInitialize @ 0x18008F3E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x180052060 (RtlDestroyHeap.c)
 *     RtlSetHeapInformation @ 0x18007E700 (RtlSetHeapInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18008F700 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlSetHeapDebuggingInformation @ 0x18008F850 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x18008F8C0 (RtlpHeapTrkGenerateHashRandoms.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x1800A6A40 (NtQueryPerformanceCounter.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlHeapTrkInitialize(void *a1)
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  char *v9; // rcx
  _QWORD *v10; // rax
  _BYTE v11[8]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v12[11]; // [rsp+60h] [rbp-1h] BYREF
  int v13; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v14; // [rsp+D0h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+D8h] [rbp+77h] BYREF
  __int64 v16; // [rsp+E0h] [rbp+7Fh] BYREF

  v16 = 0x10000LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( Handle )
    return 3221225473LL;
  if ( !a1 || (int)ZwMapViewOfSection(a1, -1LL, &v14, 0LL, 0LL, &v15, &v16, 1, 0, 4) < 0 )
    return 3221225485LL;
  if ( *(_QWORD *)v14 < 0x400uLL )
    return 3221225507LL;
  if ( *(_DWORD *)(v14 + 52) > 0x40u
    || *(_DWORD *)(v14 + 56) > 2u
    || !*(_QWORD *)(v14 + 8)
    || *(_QWORD *)(v14 + 8) == -1LL
    || !*(_QWORD *)(v14 + 16)
    || *(_QWORD *)(v14 + 16) == -1LL
    || !*(_QWORD *)(v14 + 24)
    || *(_QWORD *)(v14 + 24) == -1LL )
  {
    return 3221225485LL;
  }
  result = NtQueryPerformanceCounter(v11, &qword_180153478);
  if ( (int)result >= 0 )
  {
    if ( qword_180153478 )
    {
      dword_180153108 = *(_DWORD *)(v14 + 56);
      RtlpHeapTrkGenerateHashRandoms();
      Heap = RtlCreateHeap(
               *(_DWORD *)(v14 + 52) == 0 ? 2 : 0,
               0LL,
               (unsigned int)(*(_DWORD *)(v14 + 52) << 20),
               0LL,
               0LL,
               0LL);
      qword_1801530C0 = Heap;
      if ( Heap )
      {
        v13 = 2;
        RtlSetHeapInformation(Heap, 0, &v13, 4uLL);
        dword_1801530B8 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(
                                &qword_180153480,
                                &qword_180153470,
                                32LL,
                                (unsigned int)dword_1801530B8) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180153460, &qword_180153458, 8LL, 16LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180153468, &qword_180153450, 8LL, 16LL) )
            {
              qword_1801530F0 = RtlAllocateHeap(qword_1801530C0, 0, 0x1EEF0uLL);
              if ( qword_1801530F0 )
              {
                v4 = RtlAllocateHeap(qword_1801530C0, 0, 0x1EEF0uLL);
                qword_180153100 = v4;
                if ( v4 )
                {
                  v5 = (_QWORD *)qword_1801530F0;
                  v6 = 7919LL;
                  Handle = a1;
                  v7 = qword_1801530F0 - v4;
                  dword_1801530F8 = 0;
                  v8 = v4 - qword_1801530F0;
                  do
                  {
                    v9 = (char *)v5 + v8;
                    *v5 = v5;
                    *(_QWORD *)&v9[v7 + 8] = v5;
                    v10 = (_QWORD *)((char *)v5 + v8);
                    v5 += 2;
                    *((_QWORD *)v9 + 1) = v10;
                    *v10 = v10;
                    --v6;
                  }
                  while ( v6 );
                  memset(v12, 0, 0x30uLL);
                  LOWORD(v12[1]) = 0;
                  v12[0] = RtlpHeapTrkInterceptor;
                  v12[5] = RtlpHeapTrkLeakCallback;
                  if ( (int)RtlSetHeapDebuggingInformation(0LL, v12) >= 0 )
                  {
                    NtUnmapViewOfSection(-1LL, v14);
                    return 0LL;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(qword_1801530C0);
        qword_1801530C0 = 0LL;
        qword_180153470 = 0LL;
        qword_1801530F0 = 0LL;
        qword_180153460 = 0LL;
        qword_180153458 = 0LL;
        qword_180153100 = 0LL;
        qword_180153468 = 0LL;
        qword_180153450 = 0LL;
        if ( v14 )
          NtUnmapViewOfSection(-1LL, v14);
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
      }
    }
    return 3221225473LL;
  }
  return result;
}
