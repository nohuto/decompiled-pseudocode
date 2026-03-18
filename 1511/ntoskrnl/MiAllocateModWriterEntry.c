/*
 * XREFs of MiAllocateModWriterEntry @ 0x1400E5684
 * Callers:
 *     MiMappedPageWriter @ 0x1401364A8 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1401412B4 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1405384C0 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x1400E56EC (MiChargeForWriteInProgressPage.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * a2 + 264, 0x65576D4Du);
  if ( PoolWithTag )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0) )
      return PoolWithTag;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
