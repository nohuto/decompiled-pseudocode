/*
 * XREFs of HvViewMapPinForFileOffset @ 0x14060FC6C
 * Callers:
 *     HvLoadHive @ 0x14047ECF8 (HvLoadHive.c)
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     HvWriteHivePrimaryFile @ 0x140483AA4 (HvWriteHivePrimaryFile.c)
 *     HvpSetRangeProtection @ 0x1405139A4 (HvpSetRangeProtection.c)
 *     HvpProtectBin @ 0x140513DE0 (HvpProtectBin.c)
 *     HvpDropPagedBins @ 0x14054DD48 (HvpDropPagedBins.c)
 *     CmpDoSystemCacheWrite @ 0x14060405C (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605D14 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401B6764 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401B68C8 (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapReleaseLockExclusive @ 0x1401B6ABC (HvpViewMapReleaseLockExclusive.c)
 */

__int64 __fastcall HvViewMapPinForFileOffset(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx

  HvpViewMapAcquireLockExclusive(a1);
  v6 = HvpViewMapPinForFileOffset(a1, a2, a3);
  HvpViewMapReleaseLockExclusive(a1);
  return v6;
}
