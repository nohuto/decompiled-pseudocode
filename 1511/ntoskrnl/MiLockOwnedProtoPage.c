/*
 * XREFs of MiLockOwnedProtoPage @ 0x1400111C0
 * Callers:
 *     MiRelockProtoPoolPage @ 0x1400105C4 (MiRelockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14001103C (MiCheckProtoPtePageState.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockOwnedProtoPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rsi
  unsigned __int8 i; // bp
  unsigned int v7; // ebx

  result = 0x8000000000000000uLL;
  v4 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  for ( i = a2; (*(_BYTE *)(a1 + 34) & 0x20) != 0; result = MiLockPageInline(a1) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( i != 17 )
      __writecr8(i);
    v7 = 0;
    while ( (*(_WORD *)(a1 + 34) & 0x20) != 0 )
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7, a2, a3);
    }
  }
  *(_BYTE *)(a1 + 34) |= 0x20u;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
  {
    result = MI_READ_PTE_LOCK_FREE(v4);
    if ( (result & 0x20) == 0 )
      result = MI_WRITE_VALID_PTE_VOLATILE(v4, 1LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
