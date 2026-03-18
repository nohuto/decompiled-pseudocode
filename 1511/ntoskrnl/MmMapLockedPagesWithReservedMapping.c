/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x1401D37F4
 * Callers:
 *     SmFpAllocate @ 0x14010E714 (SmFpAllocate.c)
 *     sub_14014F020 @ 0x14014F020 (sub_14014F020.c)
 *     PnprCopyReservedMapping @ 0x1401C0B44 (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x1401F6098 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1403AFCD0 (PnprMapPhysicalPages.c)
 *     VerifierMmMapLockedPagesWithReservedMapping @ 0x1406C0AD8 (VerifierMmMapLockedPagesWithReservedMapping.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapMdlCommon @ 0x1401D35FC (MiMapMdlCommon.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v4; // rbx
  __int64 *v6; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // rbp
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v12; // rax
  unsigned __int64 v13; // rax
  ULONG_PTR v15; // rbx

  v4 = PoolTag;
  v6 = (__int64 *)((((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v10 = (((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL;
  BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((__int64 *)((((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL)
                                                       - 0x98000000008LL));
  if ( (v4 & 0xFFFFF01E) != BugCheckParameter4 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, (unsigned int)v4, BugCheckParameter4);
  v12 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v6 - 2) >> 28;
  if ( v12 <= 2 )
    KeBugCheckEx(0xDAu, 0x105uLL, (ULONG_PTR)MappingAddress, v4, v12);
  v13 = v12 - 2;
  if ( v8 > v13 )
    return 0LL;
  v15 = (ULONG_PTR)&v6[v13];
  while ( (unsigned __int64)v6 < v15 )
  {
    if ( MI_READ_PTE_LOCK_FREE(v6) )
      KeBugCheckEx(0xDAu, 0x107uLL, (ULONG_PTR)MappingAddress, (ULONG_PTR)v6, v15);
    ++v6;
  }
  return (PVOID)MiMapMdlCommon((__int64)MemoryDescriptorList, (__int64 *)(v10 + 16), 4, CacheType);
}
