/*
 * XREFs of CcFlushCache @ 0x1400F8B70
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140088AE0 (CcZeroEndOfLastPage.c)
 *     MiFlushDataSection @ 0x1400E07B8 (MiFlushDataSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400F8AB8 (CcCoherencyFlushAndPurgeCache.c)
 *     CcSetPrivateWriteFile @ 0x1401DDBC0 (CcSetPrivateWriteFile.c)
 *     CcZeroData @ 0x1404B124C (CcZeroData.c)
 *     HvViewMapFlush @ 0x140662CF0 (HvViewMapFlush.c)
 * Callees:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((__int64)SectionObjectPointer, FileOffset, Length, 0LL, 0, (char *)IoStatus);
}
