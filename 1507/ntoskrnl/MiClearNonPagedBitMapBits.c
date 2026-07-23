/*
 * XREFs of MiClearNonPagedBitMapBits @ 0x1401539D0
 * Callers:
 *     MiFreeInitializationCode @ 0x140573D08 (MiFreeInitializationCode.c)
 * Callees:
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiClearNonPagedBitMapBits(__int64 a1, volatile signed __int32 *a2, ULONG a3, ULONG a4)
{
  _RTL_BITMAP *v4; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v9; // edi
  signed __int32 v10; // eax

  v4 = *(_RTL_BITMAP **)(a1 + 80);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(a2, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(a2);
    while ( 1 )
    {
      v10 = *a2;
      if ( (*a2 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(a2, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  RtlClearBits(v4, a3, a4);
  return MiUnlockWorkingSetExclusive((__int64)a2, CurrentIrql);
}
