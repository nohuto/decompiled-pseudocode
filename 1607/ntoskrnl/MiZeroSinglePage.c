/*
 * XREFs of MiZeroSinglePage @ 0x140066710
 * Callers:
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 * Callees:
 *     MiReleaseFreshPageLocked @ 0x140021D24 (MiReleaseFreshPageLocked.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     KeZeroPages @ 0x1401623C0 (KeZeroPages.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiZeroSinglePage(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // r15
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // r12
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(_QWORD **)(a1 + 32);
  KeZeroPages(*(_QWORD *)(a1 + 40), 4096LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
    {
      v6 = (unsigned int)(v9 + 1);
      v9 = v6;
      if ( ((unsigned int)v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (*(_QWORD *)(v2 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) );
  }
  *v3 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v3, v4) )
    MiWritePteShadow(v7, 0LL);
  if ( !*(_BYTE *)(a1 + 68) )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)(v2 + 34) &= ~8u;
    if ( (unsigned int)MiUnlinkFreeOrZeroedPage((v2 + 0x58000000000LL) / 48, 0LL, 0LL) == 1 )
    {
      *(_QWORD *)(v2 + 16) = 0LL;
      MiInsertPageInFreeOrZeroedList((v2 + 0x58000000000LL) / 48);
    }
    else
    {
      MiReleaseFreshPageLocked(v2);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
