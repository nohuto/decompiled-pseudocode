/*
 * XREFs of MiUnlockFlushMdl @ 0x1400E3A38
 * Callers:
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140038E48 (MiDecrementModifiedWriteCount.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1400661D0 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x1401D2DEC (MiRetardMdl.c)
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
  result = (_QWORD *)MiDecrementModifiedWriteCount(a2, 0);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result);
  return result;
}
