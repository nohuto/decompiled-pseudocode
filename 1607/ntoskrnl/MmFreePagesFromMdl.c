/*
 * XREFs of MmFreePagesFromMdl @ 0x140099EF0
 * Callers:
 *     sub_1401581C8 @ 0x1401581C8 (sub_1401581C8.c)
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x1406587C4 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x140658948 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 * Callees:
 *     <none>
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
