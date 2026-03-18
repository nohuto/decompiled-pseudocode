/*
 * XREFs of HvViewMapPinForFileOffset @ 0x1405EB1C8
 * Callers:
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     HvLoadHive @ 0x1403D3A54 (HvLoadHive.c)
 *     HvpProtectBin @ 0x1403D8E10 (HvpProtectBin.c)
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
 *     CmpDoSystemCacheWrite @ 0x1405E4B04 (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1405E67BC (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401AAC78 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401AADDC (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapReleaseLockExclusive @ 0x1401AAFD0 (HvpViewMapReleaseLockExclusive.c)
 */

__int64 __fastcall HvViewMapPinForFileOffset(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx

  HvpViewMapAcquireLockExclusive(a1);
  v6 = HvpViewMapPinForFileOffset(a1, a2, a3);
  HvpViewMapReleaseLockExclusive(a1);
  return v6;
}
