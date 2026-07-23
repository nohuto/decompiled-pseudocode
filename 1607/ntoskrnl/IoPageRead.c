/*
 * XREFs of IoPageRead @ 0x14010F340
 * Callers:
 *     <none>
 * Callees:
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 */

NTSTATUS __stdcall IoPageRead(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v5; // al

  v5 = 0;
  if ( ((unsigned __int8)FileObject & 3) != 0 )
  {
    v5 = 2 - (((unsigned __int8)FileObject & 1) != 0);
    FileObject = (PFILE_OBJECT)((unsigned __int64)FileObject & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( ((unsigned __int8)MemoryDescriptorList & 1) != 0 )
  {
    v5 |= 4u;
    MemoryDescriptorList = (PMDL)((unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFEuLL);
  }
  if ( ((unsigned __int8)MemoryDescriptorList & 2) != 0 )
  {
    v5 |= 8u;
    MemoryDescriptorList = (PMDL)((unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFDuLL);
  }
  return IoPageReadEx(
           FileObject,
           (__int64)MemoryDescriptorList,
           StartingOffset,
           (__int64)Event,
           (__int64)IoStatusBlock,
           v5,
           0LL);
}
