/*
 * XREFs of HvViewMapUnpinForFileOffset @ 0x1405EB3DC
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48 (HvSynchronizeAndDropTemporaryBins.c)
 *     CmpDoSystemCacheWrite @ 0x1405E4B04 (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1405E67BC (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401AAC78 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401AB048 (HvpViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvViewMapUnpinForFileOffset(__int64 a1, int a2, int a3)
{
  HvpViewMapAcquireLockExclusive(a1);
  HvpViewMapUnpinForFileOffset(a1, a2, a3);
  return HvpViewMapReleaseLockExclusive(a1);
}
