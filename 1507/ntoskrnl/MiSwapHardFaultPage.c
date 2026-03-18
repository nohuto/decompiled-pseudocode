/*
 * XREFs of MiSwapHardFaultPage @ 0x140217428
 * Callers:
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 * Callees:
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x1402260DC (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiSwapHardFaultPage(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 PteShadow; // rcx
  __int64 updated; // rax
  __int64 *v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned int v11; // esi
  __int64 result; // rax

  PteShadow = *a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1, PteShadow);
  updated = MiUpdateTransitionPteFrame(PteShadow, (a3 + 0x58000000000LL) / 48);
  *v8 = updated;
  if ( v9 <= v10 )
    MiWritePteShadow(v8, updated);
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
    while ( *(__int64 *)(a3 + 24) < 0 );
  }
  MiCopyPfnEntry(a3, a2);
  if ( ((*(_QWORD *)(a2 + 40) >> 54) & 7) == 3 )
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a3 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(a2 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(a2) )
    MiPfnReferenceCountIsZero(a2, (a2 + 0x58000000000LL) / 48);
  else
    *(_WORD *)(a3 + 32) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
