/*
 * XREFs of MiLockOwnedProtoPage @ 0x1400224F0
 * Callers:
 *     MiRelockProtoPoolPage @ 0x140022490 (MiRelockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockOwnedProtoPage(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rsi
  __int64 result; // rax
  unsigned int v6; // ebx

  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a2 != 17 )
      __writecr8(a2);
    v6 = 0;
    while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    MiLockPageInline(a1);
  }
  *(_BYTE *)(a1 + 34) |= 0x20u;
  result = *(_QWORD *)(a1 + 24) >> 62;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
  {
    result = MI_READ_PTE_LOCK_FREE(v2);
    if ( (result & 0x20) == 0 )
      result = MiWriteValidPteVolatile(v2, 1LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
