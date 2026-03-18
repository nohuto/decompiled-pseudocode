/*
 * XREFs of CcFlushCache @ 0x1400E8FD4
 * Callers:
 *     MiFlushDataSection @ 0x14000E728 (MiFlushDataSection.c)
 *     CcZeroEndOfLastPage @ 0x14003D0A0 (CcZeroEndOfLastPage.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400E8F04 (CcCoherencyFlushAndPurgeCache.c)
 *     CcSetPrivateWriteFile @ 0x1401A96C8 (CcSetPrivateWriteFile.c)
 *     CcZeroData @ 0x1403CAF50 (CcZeroData.c)
 *     HvViewMapFlush @ 0x1405EB080 (HvViewMapFlush.c)
 * Callees:
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((__int64)SectionObjectPointer, FileOffset, Length, 0LL, 0, IoStatus);
}
