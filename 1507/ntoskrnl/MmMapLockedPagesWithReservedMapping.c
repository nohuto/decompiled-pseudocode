/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x140214DA4
 * Callers:
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
 *     sub_14017D1E4 @ 0x14017D1E4 (sub_14017D1E4.c)
 *     PnprCopyReservedMapping @ 0x1401FC738 (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x140244CE0 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1404002BC (PnprMapPhysicalPages.c)
 *     VerifierMmMapLockedPagesWithReservedMapping @ 0x140742318 (VerifierMmMapLockedPagesWithReservedMapping.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiMapMdlCommon @ 0x140214A44 (MiMapMdlCommon.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x140225C20 (MiMakeLinkedListPte.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  unsigned __int64 v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // r9
  __int64 LinkedListPte; // r10
  ULONG_PTR v11; // r11
  ULONG_PTR BugCheckParameter4; // rax
  __int64 PteShadow; // rax
  ULONG_PTR PteLink; // rax
  __int64 *v15; // r9
  ULONG_PTR v16; // r11
  unsigned __int64 v17; // rax
  ULONG_PTR v19; // r10
  unsigned __int64 v20; // r11
  __int64 v21; // rax

  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v8 = (__int64 *)((((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL);
  LinkedListPte = MiMakeLinkedListPte(PoolTag, PoolTag);
  BugCheckParameter4 = *(_QWORD *)(v9 - 8);
  if ( (unsigned __int64)(v9 - 8 + 0x90482413000LL) <= 0x7F8 )
    BugCheckParameter4 = MiReadPteShadow(v9 - 8, *(_QWORD *)(v9 - 8));
  if ( LinkedListPte != BugCheckParameter4 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v11, BugCheckParameter4);
  PteShadow = *v8;
  if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v8, *v8);
  PteLink = MiGetPteLink(PteShadow);
  if ( PteLink <= 2 )
    KeBugCheckEx(0xDAu, 0x105uLL, (ULONG_PTR)MappingAddress, v16, PteLink);
  v17 = PteLink - 2;
  if ( v7 > v17 )
    return 0LL;
  v19 = (ULONG_PTR)&v15[v17];
  if ( (unsigned __int64)v15 < v19 )
  {
    v20 = (unsigned __int64)(v15 + 0x12090482600LL);
    do
    {
      v21 = *v15;
      if ( v20 <= 0x7F8 )
        v21 = MiReadPteShadow(v15, *v15);
      if ( v21 )
        KeBugCheckEx(0xDAu, 0x107uLL, (ULONG_PTR)MappingAddress, (ULONG_PTR)v15, v19);
      ++v15;
      v20 += 8LL;
    }
    while ( (unsigned __int64)v15 < v19 );
  }
  return (PVOID)MiMapMdlCommon((__int64)MemoryDescriptorList, v8 + 2, 4, CacheType);
}
