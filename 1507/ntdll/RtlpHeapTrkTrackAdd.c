/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x1800E1D60
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800E1810 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkHash @ 0x1800E1760 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkTrackStack @ 0x1800E206C (RtlpHeapTrkTrackStack.c)
 */

void __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  _QWORD *Heap; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rax

  Heap = RtlAllocateHeap(HeapHandle, 0, 0x28uLL);
  if ( Heap )
  {
    v5 = (unsigned int)RtlpHeapTrkHash(a2);
    Heap[2] = a1;
    Heap[3] = a2;
    v6 = RtlpHeapTrkTrackStack();
    Heap[4] = v6;
    if ( v6 )
    {
      v7 = v5 & 0xF;
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180148698 + 8 * v7));
      v8 = (__int64 *)(qword_1801485F0 + 16 * v5);
      v9 = *v8;
      *Heap = *v8;
      Heap[1] = v8;
      if ( *(__int64 **)(v9 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = Heap;
      *v8 = (__int64)Heap;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180148698 + 8 * v7));
    }
    else
    {
      RtlFreeHeap(HeapHandle, 0, Heap);
    }
  }
}
