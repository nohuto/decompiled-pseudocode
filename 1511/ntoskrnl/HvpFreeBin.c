/*
 * XREFs of HvpFreeBin @ 0x1403D82E0
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401AB468 (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1403D8960 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x1403D8C44 (HvpMapHiveImage.c)
 *     HvFreeHivePartial @ 0x140488090 (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x1405E48E8 (HvpFreeAllocatedBins.c)
 *     HvpReviveDiscardedBin @ 0x1405EC2A4 (HvpReviveDiscardedBin.c)
 *     HvpAddDummyBinToHive @ 0x1405EDAD4 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1405EDC64 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     CmpProtectPool @ 0x14001B388 (CmpProtectPool.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 124) & 4) == 0 || a3 || (a4 = a5) != 0 )
  {
    CmpProtectPool(a4, a2);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a4, a2);
  }
  return result;
}
