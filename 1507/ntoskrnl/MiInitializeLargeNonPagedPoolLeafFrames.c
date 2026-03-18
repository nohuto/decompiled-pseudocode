/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x14010E740
 * Callers:
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  __int16 v3; // r9
  _QWORD *v4; // r14
  unsigned __int64 *v5; // rcx
  unsigned __int64 PteShadow; // rsi
  __int64 v7; // rsi
  unsigned __int64 *v8; // rdi
  __int64 v9; // r12
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp+8h]

  v2 = a1;
  v3 = a2;
  v4 = (_QWORD *)(48 * a2 - 0x58000000000LL);
  v5 = (unsigned __int64 *)((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v5;
  if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v5, *v5);
  v7 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = v4 + 3;
  v9 = 512 - (v3 & 0x1FFu);
  do
  {
    v10 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( (*v8 & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) );
    }
    v11 = *v8 & 0xC000000000000001uLL;
    *(v8 - 2) = v2;
    *v4 = 0LL;
    *v8 = v11 | 1;
    LOBYTE(v11) = *((_BYTE *)v8 + 10) & 0xFE;
    *((_WORD *)v8 + 4) = 1;
    *((_BYTE *)v8 + 10) = v11 | 6;
    v8[2] = v7 | v8[2] & 0xFE3FFFF000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
    v4 += 6;
    v8 += 6;
    v2 += 8LL;
    --v9;
  }
  while ( v9 );
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
