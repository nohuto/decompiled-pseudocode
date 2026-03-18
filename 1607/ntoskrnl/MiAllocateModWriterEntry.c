/*
 * XREFs of MiAllocateModWriterEntry @ 0x140102A50
 * Callers:
 *     MiMappedPageWriter @ 0x14013D554 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x14014AB7C (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x140568D38 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x140102D9C (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
