/*
 * XREFs of MiFreeEmptyBootPageTable @ 0x1407FB334
 * Callers:
 *     MxCreateFreePfns @ 0x1407C5084 (MxCreateFreePfns.c)
 * Callees:
 *     MiLockAndInsertPageInFreeList @ 0x14015F7F4 (MiLockAndInsertPageInFreeList.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiFreeEmptyBootPageTable(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  result = (__int64)(v2 << 25) >> 16 << 25 >> 16;
  if ( result < MiLowHalVa )
  {
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)v2 = 0LL;
    if ( v2 + 0x90482413000LL <= 0x7F8 )
      MiWritePteShadow(v2, 0LL);
    return MiLockAndInsertPageInFreeList(a1);
  }
  return result;
}
