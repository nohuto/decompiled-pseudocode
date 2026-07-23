/*
 * XREFs of MiFreeEmptyBootPageTable @ 0x1407D0638
 * Callers:
 *     MxCreateFreePfns @ 0x140796AA8 (MxCreateFreePfns.c)
 * Callees:
 *     MiLockAndInsertPageInFreeList @ 0x140145314 (MiLockAndInsertPageInFreeList.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFreeEmptyBootPageTable(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9

  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  result = 0LL;
  if ( (__int64)(v2 << 25) >> 16 << 25 >> 16 < (unsigned __int64)MiLowHalVa )
  {
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)v2 = 0LL;
    if ( MiPteInShadowRange(v2) )
      MiWritePteShadow(v5, v4);
    return MiLockAndInsertPageInFreeList(v6);
  }
  return result;
}
