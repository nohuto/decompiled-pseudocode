/*
 * XREFs of HvpFreeBin @ 0x1404A086C
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E0FAC (HvpMapHiveImageFromSystemCache.c)
 *     HvFreeHivePartial @ 0x14044D4F0 (HvFreeHivePartial.c)
 *     HvpMapHiveImage @ 0x14049FFF8 (HvpMapHiveImage.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404A0584 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x1405987EC (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x14065B830 (HvpFreeAllocatedBins.c)
 *     HvpReviveDiscardedBin @ 0x14066490C (HvpReviveDiscardedBin.c)
 *     HvpAddDummyBinToHive @ 0x140665FC4 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x140666154 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     CmpProtectPool @ 0x1400628E0 (CmpProtectPool.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 124) & 4) == 0 || a3 || (a4 = a5) != 0 )
  {
    CmpProtectPool(a4, a2);
    return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a4, a2);
  }
  return result;
}
