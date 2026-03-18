/*
 * XREFs of HvViewMapUnpinForFileOffset @ 0x14060FE80
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B4C7C (HvSynchronizeAndDropTemporaryBins.c)
 *     CmpDoSystemCacheWrite @ 0x14060405C (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605D14 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401B6764 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401B6B34 (HvpViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvViewMapUnpinForFileOffset(__int64 a1, int a2, int a3)
{
  HvpViewMapAcquireLockExclusive(a1);
  HvpViewMapUnpinForFileOffset(a1, a2, a3);
  return HvpViewMapReleaseLockExclusive(a1);
}
