/*
 * XREFs of RtlpExtendListLookup @ 0x18004D1E4
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A4C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpPopulateListIndex @ 0x18004CB3C (RtlpPopulateListIndex.c)
 */

void __fastcall RtlpExtendListLookup(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  unsigned __int64 v6; // rbp
  __int64 Heap; // rax

  if ( !*(_QWORD *)a2 )
  {
    v4 = 0;
    v5 = (1055 - *(_DWORD *)(a2 + 8)) & 0xFFFFFFE0;
    if ( *(_DWORD *)(a2 + 12) )
      v4 = 8;
    v6 = (unsigned __int64)v5 >> 3;
    Heap = RtlAllocateHeap(a1, 0x80000Au, v6 + v5 * (v4 + 8LL) + 56);
    if ( Heap )
    {
      *(_BYTE *)(Heap - 1) = 1;
      *(_DWORD *)(Heap + 8) = v5 + *(_DWORD *)(a2 + 8);
      *(_DWORD *)(Heap + 24) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(Heap + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)(Heap + 40) = Heap + 56;
      *(_QWORD *)(Heap + 48) = v6 + Heap + 56;
      *(_QWORD *)(Heap + 32) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)a2 = Heap;
      RtlpPopulateListIndex(a1, *(_QWORD *)(a1 + 312));
    }
  }
}
