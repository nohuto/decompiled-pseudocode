/*
 * XREFs of MiFreePoolPages @ 0x140018558
 * Callers:
 *     ExpAllocateBigPool @ 0x140011AD0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012AF0 (ExpInsertPoolTrackerExpansion.c)
 *     MiAllocateContiguousMemory @ 0x14009AF40 (MiAllocateContiguousMemory.c)
 *     MiFindContiguousMemoryInPool @ 0x14009B2EC (MiFindContiguousMemoryInPool.c)
 *     ExpResizeBigPageTable @ 0x14009D79C (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14022CD84 (ExGetBigPoolInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 *     MiCheckSessionPoolAllocations @ 0x140531DC8 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     MiInsertNonPagedPoolOnSlist @ 0x1400114D0 (MiInsertNonPagedPoolOnSlist.c)
 *     MiClearNonPagedPtes @ 0x140024520 (MiClearNonPagedPtes.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     MiReturnPhysicalPoolPages @ 0x140098380 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x140103670 (MiReturnNonPagedPoolVa.c)
 */

__int64 __fastcall MiFreePoolPages(unsigned __int64 *BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8

  if ( (unsigned __int64)BugCheckParameter2 < qword_140327F20
    || (unsigned __int64)BugCheckParameter2 >= qword_140327F20 + 0x100000000000LL )
  {
    return MiFreePagedPoolPages((ULONG_PTR)BugCheckParameter2);
  }
  v3 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  result = MiInsertNonPagedPoolOnSlist(BugCheckParameter2, v3);
  if ( (_DWORD)result != 1 )
  {
    v6 = MiClearNonPagedPtes(BugCheckParameter2, v3, v5);
    if ( v6 )
      MiReturnPhysicalPoolPages(v6);
    return MiReturnNonPagedPoolVa(BugCheckParameter2, v3, v7);
  }
  return result;
}
