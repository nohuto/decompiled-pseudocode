/*
 * XREFs of HvpViewMapReleaseChargesForPinnedPages @ 0x1405EB684
 * Callers:
 *     HvpViewMapUnpinForFileOffset @ 0x1401AB048 (HvpViewMapUnpinForFileOffset.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x1400F8FC8 (MmReleaseResourceCharge.c)
 */

void __fastcall HvpViewMapReleaseChargesForPinnedPages(__int64 a1, unsigned int a2)
{
  MmReleaseResourceCharge(a2, 3, 1);
  *(_DWORD *)(a1 + 32) -= a2;
}
