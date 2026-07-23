/*
 * XREFs of MmFreePagesFromMdl @ 0x1400996F0
 * Callers:
 *     sub_140158738 @ 0x140158738 (sub_140158738.c)
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x1406588A8 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x140658A2C (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 * Callees:
 *     <none>
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
