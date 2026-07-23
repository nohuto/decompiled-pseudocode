/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x18008ED9C
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x18008ECCC (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x1800325A0 (RtlCaptureStackBackTrace.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1800AA6B0 (RtlCompareMemory.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

_WORD *RtlpHeapTrkTrackStack()
{
  USHORT v0; // bp
  ULONG v1; // r12d
  _WORD *Heap; // rdi
  __int64 v3; // r14
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180153470 + 8 * v3));
  v4 = qword_180153100;
  v5 = (_QWORD *)(qword_180153100 + 16LL * v1);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_2:
    if ( Heap )
    {
      Heap[8] = v0;
      Heap[9] = v1;
      *((_DWORD *)Heap + 5) = 1;
      memmove(Heap + 12, BackTrace, 8LL * v0);
      v7 = v4 + 16LL * v1;
      v8 = *(_QWORD *)v7;
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
        __fastfail(3u);
      *(_QWORD *)Heap = v8;
      *((_QWORD *)Heap + 1) = v7;
      *(_QWORD *)(v8 + 8) = Heap;
      *(_QWORD *)v7 = Heap;
      _InterlockedIncrement(&dword_1801530F8);
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180153470 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180153470 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v6 + 8) != v0 )
  {
LABEL_11:
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(v4 + 16LL * v1) )
      goto LABEL_2;
  }
  if ( RtlCompareMemory(BackTrace, v6 + 3, 8LL * v0) != 8LL * v0 )
  {
    v4 = qword_180153100;
    goto LABEL_11;
  }
  ++*((_DWORD *)v6 + 5);
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180153470 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(HeapHandle, 0, Heap);
  return v6;
}
