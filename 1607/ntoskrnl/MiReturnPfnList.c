/*
 * XREFs of MiReturnPfnList @ 0x14013EB5C
 * Callers:
 *     MiPfnRangeIsZero @ 0x14013E6D4 (MiPfnRangeIsZero.c)
 *     MiJoinBitmapPages @ 0x1401EB324 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     MiDeleteLargePfnBitMap @ 0x1406648A0 (MiDeleteLargePfnBitMap.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnPfnList(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbp
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi

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
      MiInsertPageInFreeOrZeroedList((v1 + 0x58000000000LL) / 48, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v4);
      ++v2;
      v1 = v3;
    }
    while ( v3 );
  }
  return v2;
}
