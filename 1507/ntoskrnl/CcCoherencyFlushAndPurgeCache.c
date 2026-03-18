/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x1400F8AB8
 * Callers:
 *     <none>
 * Callees:
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     CcFlushCache @ 0x1400F8B70 (CcFlushCache.c)
 *     MmTrimSection @ 0x1400F8B8C (MmTrimSection.c)
 */

void __stdcall CcCoherencyFlushAndPurgeCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus,
        ULONG Flags)
{
  bool v6; // di
  NTSTATUS v10; // eax
  bool v11; // si

  v6 = 0;
  v10 = MmTrimSection(SectionObjectPointer, FileOffset, Length);
  IoStatus->Status = v10;
  v11 = v10 == 277;
  CcFlushCache(SectionObjectPointer, FileOffset, Length, IoStatus);
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) == 0 )
      v6 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, Length, 4u) == 0;
    if ( IoStatus->Status >= 0 && (v11 || v6) )
      IoStatus->Status = 277;
  }
}
