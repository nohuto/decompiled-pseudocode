/*
 * XREFs of HvViewMapPinForFileOffset @ 0x14060FD20
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     HvpSetRangeProtection @ 0x1404F6D94 (HvpSetRangeProtection.c)
 *     HvpProtectBin @ 0x1404F71D0 (HvpProtectBin.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     CmpDoSystemCacheWrite @ 0x140604110 (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605DC8 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401B6648 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401B67AC (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapReleaseLockExclusive @ 0x1401B69A0 (HvpViewMapReleaseLockExclusive.c)
 */

__int64 __fastcall HvViewMapPinForFileOffset(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx

  HvpViewMapAcquireLockExclusive(a1);
  v6 = HvpViewMapPinForFileOffset(a1, a2, a3);
  HvpViewMapReleaseLockExclusive(a1);
  return v6;
}
