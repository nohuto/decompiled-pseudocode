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
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(qword_1801486F8, 0, 8 * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_1801486A0 + 8 * v3), v4, v5, v6);
  v7 = qword_1801485E0;
  v8 = (_QWORD *)(qword_1801485E0 + 16LL * v1);
  v9 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
  {
LABEL_6:
    if ( Heap )
    {
      *(_WORD *)(Heap + 16) = v0;
      *(_WORD *)(Heap + 18) = v1;
      *(_DWORD *)(Heap + 20) = 1;
      memmove((void *)(Heap + 24), BackTrace, 8LL * v0);
      v11 = (unsigned __int64 *)(v7 + 16LL * v1);
      v12 = *v11;
      *(_QWORD *)Heap = *v11;
      *(_QWORD *)(Heap + 8) = v11;
      if ( *(unsigned __int64 **)(v12 + 8) != v11 )
        __fastfail(3u);
      *(_QWORD *)(v12 + 8) = Heap;
      *v11 = Heap;
      _InterlockedIncrement(&dword_1801485E8);
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801486A0 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801486A0 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v9 + 8) != v0 )
  {
LABEL_5:
    v9 = (_QWORD *)*v9;
    if ( v9 == (_QWORD *)(v7 + 16LL * v1) )
      goto LABEL_6;
  }
  if ( RtlCompareMemory(BackTrace, v9 + 3, 8LL * v0) != 8LL * v0 )
  {
    v7 = qword_1801485E0;
    goto LABEL_5;
  }
  ++*((_DWORD *)v9 + 5);
  RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801486A0 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(qword_1801486F8, 0, Heap);
  return (unsigned __int64)v9;
}
