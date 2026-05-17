/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800E0E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x180093C10 (NtQueryPerformanceCounter.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800D852C (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800E11A4 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800E16EC (RtlpHeapTrkGenerateHashRandoms.c)
 */

__int64 __fastcall RtlHeapTrkInitialize(void *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 Heap; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  char *v12; // rcx
  _QWORD *v13; // rax
  _QWORD v14[11]; // [rsp+58h] [rbp-1h] BYREF
  int v15; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+6Fh]
  __int64 v17; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v18; // [rsp+D8h] [rbp+7Fh]

  v18 = 0x10000LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( Handle )
    return 3221225473LL;
  if ( !a1 || (int)ZwMapViewOfSection() < 0 )
    return 3221225485LL;
  if ( *(_QWORD *)v16 < 0x400uLL )
    return 3221225507LL;
  if ( *(_DWORD *)(v16 + 52) > 0x40u
    || *(_DWORD *)(v16 + 56) > 2u
    || !*(_QWORD *)(v16 + 8)
    || *(_QWORD *)(v16 + 8) == -1LL
    || !*(_QWORD *)(v16 + 16)
    || *(_QWORD *)(v16 + 16) == -1LL
    || !*(_QWORD *)(v16 + 24)
    || *(_QWORD *)(v16 + 24) == -1LL )
  {
    return 3221225485LL;
  }
  result = NtQueryPerformanceCounter();
  if ( (int)result >= 0 )
  {
    if ( !qword_1801476D8 )
      return 3221225473LL;
    dword_1801485EC = *(_DWORD *)(v16 + 56);
    RtlpHeapTrkGenerateHashRandoms((unsigned int)dword_1801485EC, v3, v4, v5, 0LL, &v17);
    Heap = RtlCreateHeap(
             *(_DWORD *)(v16 + 52) == 0 ? 2 : 0,
             0LL,
             (unsigned int)(*(_DWORD *)(v16 + 52) << 20),
             0LL,
             0LL,
             0LL);
    qword_1801486F8 = Heap;
    if ( !Heap )
      return 3221225473LL;
    v15 = 2;
    RtlSetHeapInformation(Heap, 0, &v15, 4uLL);
    dword_1801486E0 = NtCurrentPeb()->NumberOfProcessors;
    if ( !(unsigned __int8)RtlpHeapTrkAllocCacheAligned(
                             &qword_1801476D0,
                             &qword_180148690,
                             32LL,
                             (unsigned int)dword_1801486E0) )
      goto LABEL_27;
    if ( !(unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180148698, &qword_1801486E8, 8LL, 16LL) )
      goto LABEL_27;
    if ( !(unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801486A0, &qword_1801486B0, 8LL, 16LL) )
      goto LABEL_27;
    qword_1801485F0 = RtlAllocateHeap(qword_1801486F8, 0, 126704LL);
    if ( !qword_1801485F0 )
      goto LABEL_27;
    v7 = RtlAllocateHeap(qword_1801486F8, 0, 126704LL);
    qword_1801485E0 = v7;
    if ( !v7 )
      goto LABEL_27;
    v8 = (_QWORD *)qword_1801485F0;
    v9 = 7919LL;
    Handle = a1;
    v10 = qword_1801485F0 - v7;
    dword_1801485E8 = 0;
    v11 = v7 - qword_1801485F0;
    do
    {
      v12 = (char *)v8 + v11;
      *v8 = v8;
      *(_QWORD *)&v12[v10 + 8] = v8;
      v13 = (_QWORD *)((char *)v8 + v11);
      v8 += 2;
      *((_QWORD *)v12 + 1) = v13;
      *v13 = v13;
      --v9;
    }
    while ( v9 );
    memset(v14, 0, 0x30uLL);
    LOWORD(v14[1]) = 0;
    v14[0] = RtlpHeapTrkInterceptor;
    v14[5] = RtlpHeapTrkLeakCallback;
    if ( (int)RtlSetHeapDebuggingInformation(0LL, (__int64)v14) < 0 )
    {
LABEL_27:
      RtlDestroyHeap(qword_1801486F8);
      qword_1801486F8 = 0LL;
      qword_180148690 = 0LL;
      qword_1801485F0 = 0LL;
      qword_180148698 = 0LL;
      qword_1801486E8 = 0LL;
      qword_1801485E0 = 0LL;
      qword_1801486A0 = 0LL;
      qword_1801486B0 = 0LL;
      if ( v16 )
        NtUnmapViewOfSection();
      if ( Handle )
      {
        NtClose(Handle);
        Handle = 0LL;
      }
      return 3221225473LL;
    }
    NtUnmapViewOfSection();
    return 0LL;
  }
  return result;
}
