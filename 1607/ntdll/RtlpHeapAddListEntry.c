/*
 * XREFs of RtlpHeapAddListEntry @ 0x18004C2E4
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x1800283F0 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpCreateSplitBlock @ 0x18004BEF0 (RtlpCreateSplitBlock.c)
 *     RtlpPopulateListIndex @ 0x18004CB2C (RtlpPopulateListIndex.c)
 *     RtlpUpdateUCRIndexInsert @ 0x18004D0C4 (RtlpUpdateUCRIndexInsert.c)
 *     RtlpInitializeUCRIndex @ 0x1800883D8 (RtlpInitializeUCRIndex.c)
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x18004C404 (RtlpHeapListCompare.c)
 */

__int64 __fastcall RtlpHeapAddListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
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
  if ( !v12 || (LOBYTE(a4) = a3, result = RtlpHeapListCompare(a1, v12, a6, a4), (int)result <= 0) )
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
