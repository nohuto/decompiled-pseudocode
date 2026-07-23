/*
 * XREFs of RtlHeapTrkInitialize @ 0x18008F3D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x180052050 (RtlDestroyHeap.c)
 *     RtlSetHeapInformation @ 0x18007E6F0 (RtlSetHeapInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18008F6F0 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlSetHeapDebuggingInformation @ 0x18008F840 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x18008F8B0 (RtlpHeapTrkGenerateHashRandoms.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x1800A6A40 (NtQueryPerformanceCounter.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall RtlHeapTrkInitialize(void *a1)
{
  NTSTATUS result; // eax
  PVOID Heap; // rax
  char *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r9
  char *v8; // r8
  char *v9; // rcx
  _QWORD *v10; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v12[6]; // [rsp+60h] [rbp-1h] BYREF
  int HeapInformation; // [rsp+C8h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+6Fh] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+D8h] [rbp+77h] BYREF
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp+7Fh] BYREF

  ViewSize = 0x10000LL;
  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  if ( SectionHandle )
    return -1073741823;
  if ( !a1
    || ZwMapViewOfSection(
         a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewShare,
         0,
         4u) < 0 )
  {
    return -1073741811;
  }
  if ( *(_QWORD *)BaseAddress < 0x400uLL )
    return -1073741789;
  if ( *((_DWORD *)BaseAddress + 13) > 0x40u
    || *((_DWORD *)BaseAddress + 14) > 2u
    || !*((_QWORD *)BaseAddress + 1)
    || *((_QWORD *)BaseAddress + 1) == -1LL
    || !*((_QWORD *)BaseAddress + 2)
    || *((_QWORD *)BaseAddress + 2) == -1LL
    || !*((_QWORD *)BaseAddress + 3)
    || *((_QWORD *)BaseAddress + 3) == -1LL )
  {
    return -1073741811;
  }
  result = NtQueryPerformanceCounter(&PerformanceCounter, &PerformanceFrequency);
  if ( result >= 0 )
  {
    if ( PerformanceFrequency.QuadPart )
    {
      dword_180153108 = *((_DWORD *)BaseAddress + 14);
      RtlpHeapTrkGenerateHashRandoms();
      Heap = RtlCreateHeap(
               *((_DWORD *)BaseAddress + 13) == 0 ? 2 : 0,
               0LL,
               (unsigned int)(*((_DWORD *)BaseAddress + 13) << 20),
               0LL,
               0LL,
               0LL);
      HeapHandle = Heap;
      if ( Heap )
      {
        HeapInformation = 2;
        RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, 4uLL);
        dword_1801530B8 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(
                                &qword_180153450,
                                &qword_180153478,
                                32LL,
                                (unsigned int)dword_1801530B8) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180153468, &qword_180153460, 8LL, 16LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180153470, &qword_180153458, 8LL, 16LL) )
            {
              qword_1801530F0 = (__int64)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
              if ( qword_1801530F0 )
              {
                v4 = (char *)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
                qword_180153100 = (__int64)v4;
                if ( v4 )
                {
                  v5 = (_QWORD *)qword_1801530F0;
                  v6 = 7919LL;
                  SectionHandle = a1;
                  v7 = qword_1801530F0 - (_QWORD)v4;
                  dword_1801530F8 = 0;
                  v8 = &v4[-qword_1801530F0];
                  do
                  {
                    v9 = (char *)v5 + (_QWORD)v8;
                    *v5 = v5;
                    *(_QWORD *)&v9[v7 + 8] = v5;
                    v10 = (_QWORD *)((char *)v5 + (_QWORD)v8);
                    v5 += 2;
                    *((_QWORD *)v9 + 1) = v10;
                    *v10 = v10;
                    --v6;
                  }
                  while ( v6 );
                  memset(v12, 0, sizeof(v12));
                  LOWORD(v12[1]) = 0;
                  v12[0] = RtlpHeapTrkInterceptor;
                  v12[5] = RtlpHeapTrkLeakCallback;
                  if ( (int)RtlSetHeapDebuggingInformation(0LL) >= 0 )
                  {
                    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                    return 0;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(HeapHandle);
        HeapHandle = 0LL;
        qword_180153478 = 0LL;
        qword_1801530F0 = 0LL;
        qword_180153468 = 0LL;
        qword_180153460 = 0LL;
        qword_180153100 = 0LL;
        qword_180153470 = 0LL;
        qword_180153458 = 0LL;
        if ( BaseAddress )
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        if ( SectionHandle )
        {
          NtClose(SectionHandle);
          SectionHandle = 0LL;
        }
      }
    }
    return -1073741823;
  }
  return result;
}
