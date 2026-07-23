/*
 * XREFs of MiFreePoolPages @ 0x1400630BC
 * Callers:
 *     ExpAllocateBigPool @ 0x140046030 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     MiAllocateContiguousMemory @ 0x140114E20 (MiAllocateContiguousMemory.c)
 *     MiFindContiguousMemoryInPool @ 0x140115220 (MiFindContiguousMemoryInPool.c)
 *     ExpResizeBigPageTable @ 0x140118C5C (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1402621DC (ExGetBigPoolInfo.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExDeferredFreePool @ 0x14028A240 (ExDeferredFreePool.c)
 *     MiCheckSessionPoolAllocations @ 0x140567CD4 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400478A0 (MiInsertNonPagedPoolOnSlist.c)
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiClearNonPagedPtes @ 0x140065600 (MiClearNonPagedPtes.c)
 *     MiReturnPhysicalPoolPages @ 0x14010E300 (MiReturnPhysicalPoolPages.c)
 */

__int64 __fastcall MiFreePoolPages(_SLIST_ENTRY *BugCheckParameter2, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8

  if ( (unsigned __int64)&BugCheckParameter2[0x20000000000LL] > 0xFFFFFFFFFFFLL )
    return MiFreePagedPoolPages((ULONG_PTR)BugCheckParameter2, a2, a3);
  v5 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  result = MiInsertNonPagedPoolOnSlist(BugCheckParameter2, v5);
  if ( (_DWORD)result != 1 )
  {
    v7 = MiClearNonPagedPtes(BugCheckParameter2, v5, v6);
    if ( v7 )
      MiReturnPhysicalPoolPages(v7);
    return MiReturnNonPagedPoolVa(BugCheckParameter2, v5, v8);
  }
  return result;
}
