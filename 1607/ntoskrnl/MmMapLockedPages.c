/*
 * XREFs of MmMapLockedPages @ 0x1401E4010
 * Callers:
 *     ViFlushDoubleBuffer @ 0x1407092A8 (ViFlushDoubleBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400DE220 (MmMapLockedPagesSpecifyCache.c)
 */

PVOID __stdcall MmMapLockedPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode)
{
  return MmMapLockedPagesSpecifyCache(MemoryDescriptorList, AccessMode, MmCached, 0LL, 1u, 0x20u);
}
