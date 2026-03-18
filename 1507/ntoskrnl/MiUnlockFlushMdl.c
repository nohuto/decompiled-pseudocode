/*
 * XREFs of MiUnlockFlushMdl @ 0x140085148
 * Callers:
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x14008563C (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1400B55B0 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x14021414C (MiRetardMdl.c)
 */

__int64 __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(
    &MemoryDescriptorList[1],
    (char *)&MemoryDescriptorList[1]
  + 8
  * ((MemoryDescriptorList->ByteCount
    + 4095LL
    + (unsigned __int64)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)) >> 12),
    a3);
  result = MiDecrementModifiedWriteCount(a2, 0LL);
  if ( result )
    return MiReleaseControlAreaWaiters(result);
  return result;
}
