/*
 * XREFs of MiFreePoolPages @ 0x14003B78C
 * Callers:
 *     ExpAllocateBigPool @ 0x140041130 (ExpAllocateBigPool.c)
 *     MiAllocateContiguousMemory @ 0x1400BD4F4 (MiAllocateContiguousMemory.c)
 *     MiFindContiguousMemoryInPool @ 0x1400BD920 (MiFindContiguousMemoryInPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C6E40 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140104978 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x140212B18 (ExGetBigPoolInfo.c)
 *     ExDeferredFreePool @ 0x140238000 (ExDeferredFreePool.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiCheckSessionPoolAllocations @ 0x1404F39F4 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140089B90 (MiInsertNonPagedPoolOnSlist.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     MiClearNonPagedPtes @ 0x1400D2B70 (MiClearNonPagedPtes.c)
 *     MiReturnPhysicalPoolPages @ 0x1400D6950 (MiReturnPhysicalPoolPages.c)
 */

__int64 __fastcall MiFreePoolPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax

  if ( BugCheckParameter2 + 0x200000000000LL > 0xFFFFFFFFFFFLL )
    return MiFreePagedPoolPages(BugCheckParameter2);
  v4 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  result = MiInsertNonPagedPoolOnSlist(BugCheckParameter2, v4);
  if ( (_DWORD)result != 1 )
  {
    v5 = MiClearNonPagedPtes(BugCheckParameter2, v4);
    if ( v5 )
      MiReturnPhysicalPoolPages(v5);
    return MiReturnNonPagedPoolVa(BugCheckParameter2, v4);
  }
  return result;
}
