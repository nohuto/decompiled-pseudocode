/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x14008F364
 * Callers:
 *     <none>
 * Callees:
 *     CcPurgeCacheSection @ 0x140072920 (CcPurgeCacheSection.c)
 *     CcFlushCache @ 0x14008F434 (CcFlushCache.c)
 *     MmTrimSection @ 0x14008F450 (MmTrimSection.c)
 */

void __stdcall CcCoherencyFlushAndPurgeCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus,
        ULONG Flags)
{
  bool v9; // di
  NTSTATUS v10; // eax
  bool v11; // si

  v9 = 0;
  v10 = MmTrimSection(SectionObjectPointer, FileOffset, Length, (Flags & 2) != 0);
  IoStatus->Status = v10;
  v11 = v10 == 277;
  CcFlushCache(SectionObjectPointer, FileOffset, Length, IoStatus);
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) == 0 )
      v9 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, Length, 4u) == 0;
    if ( IoStatus->Status >= 0 && (v11 || v9) )
      IoStatus->Status = 277;
  }
}
