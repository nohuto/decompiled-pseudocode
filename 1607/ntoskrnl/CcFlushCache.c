/*
 * XREFs of CcFlushCache @ 0x14008F434
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140024850 (CcZeroEndOfLastPage.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14008F364 (CcCoherencyFlushAndPurgeCache.c)
 *     MiFlushDataSection @ 0x1400FD7B0 (MiFlushDataSection.c)
 *     CcSetPrivateWriteFile @ 0x1401B240C (CcSetPrivateWriteFile.c)
 *     CcZeroData @ 0x1404584CC (CcZeroData.c)
 *     HvViewMapFlush @ 0x14060FB24 (HvViewMapFlush.c)
 * Callees:
 *     CcFlushCachePriv @ 0x1400E8E10 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, Length, 0, 0, (__int64)IoStatus);
}
