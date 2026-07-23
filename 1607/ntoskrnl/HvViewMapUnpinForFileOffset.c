/*
 * XREFs of HvViewMapUnpinForFileOffset @ 0x14060FF34
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4 (HvSynchronizeAndDropTemporaryBins.c)
 *     CmpDoSystemCacheWrite @ 0x140604110 (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605DC8 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401B6648 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401B6A18 (HvpViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvViewMapUnpinForFileOffset(__int64 a1, int a2, int a3)
{
  HvpViewMapAcquireLockExclusive(a1);
  HvpViewMapUnpinForFileOffset(a1, a2, a3);
  return HvpViewMapReleaseLockExclusive(a1);
}
