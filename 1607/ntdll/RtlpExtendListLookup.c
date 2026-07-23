/*
 * XREFs of RtlpExtendListLookup @ 0x18004D1D4
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A3C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpPopulateListIndex @ 0x18004CB2C (RtlpPopulateListIndex.c)
 */

void __fastcall RtlpExtendListLookup(__int64 *HeapHandle, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  unsigned __int64 v6; // rbp
  _DWORD *Heap; // rax

  if ( !*(_QWORD *)a2 )
  {
    v4 = 0;
    v5 = (1055 - *(_DWORD *)(a2 + 8)) & 0xFFFFFFE0;
    if ( *(_DWORD *)(a2 + 12) )
      v4 = 8;
    v6 = (unsigned __int64)v5 >> 3;
    Heap = RtlAllocateHeap(HeapHandle, 0x80000Au, v6 + v5 * (v4 + 8LL) + 56);
    if ( Heap )
    {
      *((_BYTE *)Heap - 1) = 1;
      Heap[2] = v5 + *(_DWORD *)(a2 + 8);
      Heap[6] = *(_DWORD *)(a2 + 8);
      Heap[3] = *(_DWORD *)(a2 + 12);
      *((_QWORD *)Heap + 5) = Heap + 14;
      *((_QWORD *)Heap + 6) = (char *)Heap + v6 + 56;
      *((_QWORD *)Heap + 4) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)a2 = Heap;
      RtlpPopulateListIndex((__int64)HeapHandle, HeapHandle[39]);
    }
  }
}
