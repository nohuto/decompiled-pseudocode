/*
 * XREFs of MiFreeZeroPagesNeeded @ 0x1401E3BDC
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1401E424C (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x140012CF0 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1401E3C54 (MiGetNodeStandbyPageCount.c)
 */

__int64 __fastcall MiFreeZeroPagesNeeded(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v7; // r11

  if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(a1 + 40) + 1336LL * a2, a3, 1024) >= 0x200
    || (unsigned __int64)MiGetNodeStandbyPageCount(a1, a2, a3) < 0x1000 )
  {
    return 0LL;
  }
  else
  {
    return 1024 - v7;
  }
}
