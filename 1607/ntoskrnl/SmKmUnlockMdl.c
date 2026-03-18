/*
 * XREFs of SmKmUnlockMdl @ 0x14011E998
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14011E384 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14011E5E0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140220CB0 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025D10 (MmUnmapLockedPages.c)
 *     SmFpFree @ 0x14011ADA8 (SmFpFree.c)
 */

__int64 __fastcall SmKmUnlockMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
  {
    if ( a2 )
      SmFpFree(a2, 5, a3, MemoryDescriptorList);
    else
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  }
  if ( MemoryDescriptorList->Next )
  {
    SmFpFree(a2, 4, a3, MemoryDescriptorList->Next);
    MemoryDescriptorList->Next = 0LL;
  }
  return MiUnlockStoreLockedPages(MemoryDescriptorList);
}
