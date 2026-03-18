/*
 * XREFs of IoSynchronousPageWrite @ 0x1400E03A0
 * Callers:
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x1400E0460 (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __stdcall IoSynchronousPageWrite(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IoSynchronousPageWriteEx(
           (_DWORD)FileObject,
           (_DWORD)MemoryDescriptorList,
           (_DWORD)StartingOffset,
           (_DWORD)Event,
           0,
           (__int64)IoStatusBlock);
}
