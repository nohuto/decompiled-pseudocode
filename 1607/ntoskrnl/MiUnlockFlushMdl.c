/*
 * XREFs of MiUnlockFlushMdl @ 0x14008E75C
 * Callers:
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockMdlWritePages @ 0x14004D030 (MiUnlockMdlWritePages.c)
 *     MiDecrementModifiedWriteCount @ 0x14008E7E4 (MiDecrementModifiedWriteCount.c)
 *     MiRetardMdl @ 0x1401E2CDC (MiRetardMdl.c)
 */

_QWORD *__fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, int *a3)
{
  _QWORD *result; // rax

  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(
    &MemoryDescriptorList[1].Next,
    (unsigned __int64)&MemoryDescriptorList[1]
  + 8
  * ((MemoryDescriptorList->ByteCount
    + 4095LL
    + (unsigned __int64)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)) >> 12),
    a3);
  result = (_QWORD *)MiDecrementModifiedWriteCount(a2, 0LL);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result);
  return result;
}
