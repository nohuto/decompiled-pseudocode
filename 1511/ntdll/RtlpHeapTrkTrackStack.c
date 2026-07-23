/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x18008505C
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x180084F84 (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlCaptureStackBackTrace @ 0x180032D60 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1800A9270 (RtlCompareMemory.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 *RtlpHeapTrkTrackStack()
{
  USHORT v0; // r14
  ULONG v1; // r12d
  _QWORD *Heap; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 **v5; // rcx
  __int64 *v6; // rsi
  bool i; // zf
  __int64 *v9; // rax
  __int64 v10; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180146360 + 8 * v3));
  v4 = qword_1801463A0;
  v5 = (__int64 **)(qword_1801463A0 + 16LL * v1);
  v6 = *v5;
  for ( i = *v5 == (__int64 *)v5; !i; i = v6 == (__int64 *)(v4 + 16LL * v1) )
  {
    if ( *((_WORD *)v6 + 8) == v0 )
    {
      if ( RtlCompareMemory(BackTrace, v6 + 3, 8LL * v0) == 8LL * v0 )
      {
        ++*((_DWORD *)v6 + 5);
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180146360 + 8 * v3));
        if ( Heap )
          RtlFreeHeap(HeapHandle, 0, Heap);
        return v6;
      }
      v4 = qword_1801463A0;
    }
    v6 = (__int64 *)*v6;
  }
  if ( Heap )
  {
    *((_WORD *)Heap + 8) = v0;
    *((_WORD *)Heap + 9) = v1;
    *((_DWORD *)Heap + 5) = 1;
    memmove(Heap + 3, BackTrace, 8LL * v0);
    v9 = (__int64 *)(v4 + 16LL * v1);
    v10 = *v9;
    *Heap = *v9;
    Heap[1] = v9;
    if ( *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *(_QWORD *)(v10 + 8) = Heap;
    *v9 = (__int64)Heap;
    _InterlockedIncrement(&dword_180145FB4);
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180146360 + 8 * v3));
    return Heap;
  }
  else
  {
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180146360 + 8 * v3));
    return 0LL;
  }
}
