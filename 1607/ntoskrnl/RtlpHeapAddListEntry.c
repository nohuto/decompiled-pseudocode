/*
 * XREFs of RtlpHeapAddListEntry @ 0x1400936E8
 * Callers:
 *     RtlpInsertFreeBlock @ 0x1400928CC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x140092ADC (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 *     RtlpPopulateListIndex @ 0x14012EC00 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x140688980 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x140094520 (RtlpHeapListCompare.c)
 */

__int64 __fastcall RtlpHeapAddListEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 result; // rax

  v6 = a4;
  v7 = a5 - *(_DWORD *)(a2 + 24);
  v9 = 2 * v7;
  if ( !*(_DWORD *)(a2 + 12) )
    v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = v9;
  v11 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( a5 == *(_DWORD *)(a2 + 8) - 1 )
    ++*(_DWORD *)(a2 + 20);
  if ( !v12 || (LOBYTE(a4) = 1, result = RtlpHeapListCompare(a1, v12, a6, a4), (int)result <= 0) )
  {
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(result + 8 * v10) = v6;
  }
  if ( !v12 )
  {
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4LL * (v7 >> 5)) |= 1 << (v7 & 0x1F);
  }
  return result;
}
