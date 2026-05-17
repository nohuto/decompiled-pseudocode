/*
 * XREFs of RtlpHeapAddListEntry @ 0x1800573C4
 * Callers:
 *     RtlpFindAndCommitPages @ 0x18001E8B0 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpPopulateListIndex @ 0x1800563E8 (RtlpPopulateListIndex.c)
 *     RtlpCreateSplitBlock @ 0x180056BFC (RtlpCreateSplitBlock.c)
 *     RtlpUpdateUCRIndexInsert @ 0x180057DA0 (RtlpUpdateUCRIndexInsert.c)
 *     RtlpInitializeUCRIndex @ 0x18005AACC (RtlpInitializeUCRIndex.c)
 *     RtlZeroHeap @ 0x1800E2BC0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800F01C8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x180057700 (RtlpHeapListCompare.c)
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
