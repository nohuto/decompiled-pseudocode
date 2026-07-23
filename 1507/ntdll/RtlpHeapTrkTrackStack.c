/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x1800E206C
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x1800E1D60 (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180012600 (RtlCaptureStackBackTrace.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x180095EE0 (RtlCompareMemory.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

_WORD *RtlpHeapTrkTrackStack()
{
  USHORT v0; // r14
  ULONG v1; // r12d
  _WORD *Heap; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  __int64 *v8; // rax
  __int64 v9; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801486A0 + 8 * v3));
  v4 = qword_1801485E0;
  v5 = (_QWORD *)(qword_1801485E0 + 16LL * v1);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_6:
    if ( Heap )
    {
      Heap[8] = v0;
      Heap[9] = v1;
      *((_DWORD *)Heap + 5) = 1;
      memmove(Heap + 12, BackTrace, 8LL * v0);
      v8 = (__int64 *)(v4 + 16LL * v1);
      v9 = *v8;
      *(_QWORD *)Heap = *v8;
      *((_QWORD *)Heap + 1) = v8;
      if ( *(__int64 **)(v9 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = Heap;
      *v8 = (__int64)Heap;
      _InterlockedIncrement(&dword_1801485E8);
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801486A0 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801486A0 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v6 + 8) != v0 )
  {
LABEL_5:
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(v4 + 16LL * v1) )
      goto LABEL_6;
  }
  if ( RtlCompareMemory(BackTrace, v6 + 3, 8LL * v0) != 8LL * v0 )
  {
    v4 = qword_1801485E0;
    goto LABEL_5;
  }
  ++*((_DWORD *)v6 + 5);
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801486A0 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(HeapHandle, 0, Heap);
  return v6;
}
