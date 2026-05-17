/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x18008EDAC
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x18008ECDC (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x1800325B0 (RtlCaptureStackBackTrace.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1800AA6B0 (RtlCompareMemory.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

unsigned __int64 RtlpHeapTrkTrackStack()
{
  USHORT v0; // bp
  ULONG v1; // r12d
  unsigned __int64 Heap; // rdi
  __int64 v3; // r14
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(qword_1801530C0, 0, 8 * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180153468 + 8 * v3), v4, v5, v6);
  v7 = qword_180153100;
  v8 = (_QWORD *)(qword_180153100 + 16LL * v1);
  v9 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
  {
LABEL_2:
    if ( Heap )
    {
      *(_WORD *)(Heap + 16) = v0;
      *(_WORD *)(Heap + 18) = v1;
      *(_DWORD *)(Heap + 20) = 1;
      memmove((void *)(Heap + 24), BackTrace, 8LL * v0);
      v10 = v7 + 16LL * v1;
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        __fastfail(3u);
      *(_QWORD *)Heap = v11;
      *(_QWORD *)(Heap + 8) = v10;
      *(_QWORD *)(v11 + 8) = Heap;
      *(_QWORD *)v10 = Heap;
      _InterlockedIncrement(&dword_1801530F8);
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180153468 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180153468 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v9 + 8) != v0 )
  {
LABEL_11:
    v9 = (_QWORD *)*v9;
    if ( v9 == (_QWORD *)(v7 + 16LL * v1) )
      goto LABEL_2;
  }
  if ( RtlCompareMemory(BackTrace, v9 + 3, 8LL * v0) != 8LL * v0 )
  {
    v7 = qword_180153100;
    goto LABEL_11;
  }
  ++*((_DWORD *)v9 + 5);
  RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180153468 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(qword_1801530C0, 0, Heap);
  return (unsigned __int64)v9;
}
