/*
 * XREFs of HvpFreeBin @ 0x1404F78FC
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401B71BC (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 *     HvpMapHiveImage @ 0x1404F7004 (HvpMapHiveImage.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404F7584 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x140603B18 (HvpFreeAllocatedBins.c)
 *     HvpReviveDiscardedBin @ 0x140610950 (HvpReviveDiscardedBin.c)
 *     HvpAddDummyBinToHive @ 0x140612454 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406125E4 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     CmpProtectPool @ 0x1400EE190 (CmpProtectPool.c)
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
