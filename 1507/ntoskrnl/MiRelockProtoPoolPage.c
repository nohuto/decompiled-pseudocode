/*
 * XREFs of MiRelockProtoPoolPage @ 0x1400E2960
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rax

  v4 = 0;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
    *a2 = CurrentIrql;
  }
  else
  {
    CurrentIrql = 17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  MiAddLockedPageCharge(a1, 1LL, a3);
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
    v8 = 0;
    while ( (*(_WORD *)(a1 + 34) & 0x20) != 0 )
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    __writecr8(2uLL);
    v9 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  *(_BYTE *)(a1 + 34) |= 0x20u;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
  {
    v10 = *v7;
    if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8 )
      LOBYTE(v10) = MiReadPteShadow(v7, *v7);
    if ( (v10 & 0x20) == 0 )
      MiWriteValidPteVolatile(v7, 1LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return a1;
}
