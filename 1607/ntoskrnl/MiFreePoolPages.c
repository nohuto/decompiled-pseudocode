/*
 * XREFs of MiFreePoolPages @ 0x1400180D8
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     MiAllocateContiguousMemory @ 0x14009A740 (MiAllocateContiguousMemory.c)
 *     MiFindContiguousMemoryInPool @ 0x14009AAEC (MiFindContiguousMemoryInPool.c)
 *     ExpResizeBigPageTable @ 0x14009CF9C (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14022CBB0 (ExGetBigPoolInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 *     MiCheckSessionPoolAllocations @ 0x140532308 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     MiInsertNonPagedPoolOnSlist @ 0x140011050 (MiInsertNonPagedPoolOnSlist.c)
 *     MiClearNonPagedPtes @ 0x1400240A0 (MiClearNonPagedPtes.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     MiReturnPhysicalPoolPages @ 0x140097B80 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 */

__int64 __fastcall MiFreePoolPages(unsigned __int64 *BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8

  if ( (unsigned __int64)BugCheckParameter2 < qword_140327F60
    || (unsigned __int64)BugCheckParameter2 >= qword_140327F60 + 0x100000000000LL )
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
