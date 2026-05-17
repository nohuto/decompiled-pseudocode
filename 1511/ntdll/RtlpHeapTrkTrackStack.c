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

unsigned __int64 RtlpHeapTrkTrackStack()
{
  USHORT v0; // r14
  ULONG v1; // r12d
  unsigned __int64 Heap; // rdi
  __int64 v3; // rbp
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 **v8; // rcx
  __int64 *v9; // rsi
  bool i; // zf
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(qword_1801463C0, 0, 8 * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180146360 + 8 * v3), v4, v5, v6);
  v7 = qword_1801463A0;
  v8 = (__int64 **)(qword_1801463A0 + 16LL * v1);
  v9 = *v8;
  for ( i = *v8 == (__int64 *)v8; !i; i = v9 == (__int64 *)(v7 + 16LL * v1) )
  {
    if ( *((_WORD *)v9 + 8) == v0 )
    {
      if ( RtlCompareMemory(BackTrace, v9 + 3, 8LL * v0) == 8LL * v0 )
      {
        ++*((_DWORD *)v9 + 5);
        RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180146360 + 8 * v3));
        if ( Heap )
          RtlFreeHeap(qword_1801463C0, 0, Heap);
        return (unsigned __int64)v9;
      }
      v7 = qword_1801463A0;
    }
    v9 = (__int64 *)*v9;
  }
  if ( Heap )
  {
    *(_WORD *)(Heap + 16) = v0;
    *(_WORD *)(Heap + 18) = v1;
    *(_DWORD *)(Heap + 20) = 1;
    memmove((void *)(Heap + 24), BackTrace, 8LL * v0);
    v12 = (unsigned __int64 *)(v7 + 16LL * v1);
    v13 = *v12;
    *(_QWORD *)Heap = *v12;
    *(_QWORD *)(Heap + 8) = v12;
    if ( *(unsigned __int64 **)(v13 + 8) != v12 )
      __fastfail(3u);
    *(_QWORD *)(v13 + 8) = Heap;
    *v12 = Heap;
    _InterlockedIncrement(&dword_180145FB4);
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180146360 + 8 * v3));
    return Heap;
  }
  else
  {
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180146360 + 8 * v3));
    return 0LL;
  }
}
