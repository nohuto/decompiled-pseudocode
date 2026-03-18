/*
 * XREFs of HvpFreeBin @ 0x14051450C
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B4C7C (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401B72D8 (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x14047DF10 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x140481AF0 (HvFreeHivePartial.c)
 *     HvpMapHiveImage @ 0x140513C14 (HvpMapHiveImage.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140514194 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHive @ 0x1405142C4 (HvFreeHive.c)
 *     HvpDropPagedBins @ 0x14054DD48 (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x140603A64 (HvpFreeAllocatedBins.c)
 *     HvpReviveDiscardedBin @ 0x14061089C (HvpReviveDiscardedBin.c)
 *     HvpAddDummyBinToHive @ 0x1406123A0 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x140612530 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     CmpProtectPool @ 0x1400F0310 (CmpProtectPool.c)
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
