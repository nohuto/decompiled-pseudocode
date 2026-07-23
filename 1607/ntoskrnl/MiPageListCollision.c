/*
 * XREFs of MiPageListCollision @ 0x14008A878
 * Callers:
 *     MiReplenishPageSlist @ 0x140063EB0 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14008A180 (MiUnlinkNodeLargePageHelper.c)
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14008AFA0 (MiZeroPageWorkMapping.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiPageListCollision(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  _BYTE *v9; // rdx

  v4 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 34) &= ~8u;
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_BYTE *)(v5 + 68) = 1;
  result = MiMakeDemandZeroPte(4LL, a1, v4, a4);
  *(_QWORD *)(v8 + 16) = result;
  v9 = *(_BYTE **)(v7 + 32);
  if ( v9 )
  {
    if ( (*v9 & 1) != 0 )
      return MiZeroPageWorkMapping(*(unsigned int *)(v7 + 64));
  }
  return result;
}
