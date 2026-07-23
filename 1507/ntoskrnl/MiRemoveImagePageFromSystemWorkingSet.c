/*
 * XREFs of MiRemoveImagePageFromSystemWorkingSet @ 0x140123B68
 * Callers:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 * Callees:
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiReleaseWsle @ 0x1400AE200 (MiReleaseWsle.c)
 *     MiRemoveWsle @ 0x1400AFB10 (MiRemoveWsle.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiRemoveImagePageFromSystemWorkingSet(_QWORD *a1, __int64 a2, __int64 a3)
{
  ULONG_PTR Wsle; // r14
  unsigned int v7; // ebp
  unsigned __int64 v8; // rbx
  __int64 result; // rax

  Wsle = *(_QWORD *)a3;
  *(_BYTE *)(a3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v7 = 0;
  v8 = a2 << 25 >> 16;
  if ( PsNtosImageBase
    && (v8 >= (unsigned __int64)PsNtosImageBase && v8 < PsNtosImageEnd
     || v8 >= (unsigned __int64)PsHalImageBase && v8 < PsHalImageEnd) )
  {
    _InterlockedDecrement((_DWORD *)&xmmword_14034EA58 + 2);
  }
  else
  {
    _InterlockedDecrement((_DWORD *)&xmmword_14034EA58 + 3);
  }
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 )
  {
    Wsle = MiLocateWsle(v8, (__int64)a1, Wsle);
  }
  else
  {
    --a1[16];
    if ( v8 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      --a1[14];
  }
  MiRemoveWsle(Wsle, (ULONG_PTR)a1);
  MiReleaseWsle(Wsle, a1, v8, 1);
  result = MiWriteValidPteVolatile(a2, 0x80000000LL);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
      result = *(_QWORD *)(a3 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
