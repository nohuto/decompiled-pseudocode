/*
 * XREFs of CcFlushCache @ 0x14008EB94
 * Callers:
 *     CcZeroEndOfLastPage @ 0x1400243D0 (CcZeroEndOfLastPage.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14008EAC4 (CcCoherencyFlushAndPurgeCache.c)
 *     MiFlushDataSection @ 0x1400FB530 (MiFlushDataSection.c)
 *     CcSetPrivateWriteFile @ 0x1401B22F0 (CcSetPrivateWriteFile.c)
 *     CcZeroData @ 0x14045739C (CcZeroData.c)
 *     HvViewMapFlush @ 0x14060FBD8 (HvViewMapFlush.c)
 * Callees:
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, Length, 0, 0, (__int64)IoStatus);
}
