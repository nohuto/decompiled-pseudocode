/*
 * XREFs of MiFreeEmptyBootPageTable @ 0x140784BBC
 * Callers:
 *     MxCreateFreePfns @ 0x140746A50 (MxCreateFreePfns.c)
 * Callees:
 *     MiLockAndInsertPageInFreeList @ 0x140131B78 (MiLockAndInsertPageInFreeList.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiFreeEmptyBootPageTable(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  result = (__int64)(v1 << 25) >> 16 << 25 >> 16;
  if ( result < MiLowHalVa )
  {
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)v1 = 0LL;
    if ( MiPteInShadowRange(v1) )
      MiWritePteShadow(v1, 0LL);
    return MiLockAndInsertPageInFreeList(a1);
  }
  return result;
}
