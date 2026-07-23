/*
 * XREFs of MmCreateMdl @ 0x140088304
 * Callers:
 *     MiPfAllocateMdls @ 0x140499FF0 (MiPfAllocateMdls.c)
 *     SmKmStoreFileWriteHeader @ 0x1406999B0 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PMDL __stdcall MmCreateMdl(PMDL MemoryDescriptorList, PVOID Base, SIZE_T Length)
{
  struct _MDL *PoolWithTag; // r9
  PMDL result; // rax

  PoolWithTag = MemoryDescriptorList;
  if ( Length >= 0x100000000LL )
    return 0LL;
  if ( !MemoryDescriptorList )
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48,
                                   0x6C646D4Du);
    if ( !PoolWithTag )
      return 0LL;
  }
  PoolWithTag->Next = 0LL;
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->ByteCount = Length;
  PoolWithTag->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
  result = PoolWithTag;
  PoolWithTag->Size = 8 * (((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 6);
  PoolWithTag->ByteOffset = (unsigned __int16)Base & 0xFFF;
  return result;
}
