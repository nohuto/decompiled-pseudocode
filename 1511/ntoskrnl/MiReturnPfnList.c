/*
 * XREFs of MiReturnPfnList @ 0x140132B4C
 * Callers:
 *     MiPfnRangeIsZero @ 0x140132700 (MiPfnRangeIsZero.c)
 *     MiJoinBitmapPages @ 0x1401DA568 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MiEliminatePageTablesOfOnes @ 0x14074A504 (MiEliminatePageTablesOfOnes.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnPfnList(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx

  v1 = a1;
  v2 = 0LL;
  if ( a1 )
  {
    do
    {
      v3 = *(_QWORD *)v1;
      v4 = (unsigned __int8)MiLockPageInline(v1);
      *(_WORD *)(v1 + 32) = 0;
      *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((v1 + 0x58000000000LL) / 48, 2uLL);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v4);
      ++v2;
      v1 = v3;
    }
    while ( v3 );
  }
  return v2;
}
