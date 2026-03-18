/*
 * XREFs of MiAllocateModWriterEntry @ 0x14011E6B8
 * Callers:
 *     MiAllocateMappedWriterMdls @ 0x14015F958 (MiAllocateMappedWriterMdls.c)
 *     MiMappedPageWriter @ 0x140165698 (MiMappedPageWriter.c)
 *     MiCreatePagefile @ 0x1405B4DBC (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x14011E720 (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
