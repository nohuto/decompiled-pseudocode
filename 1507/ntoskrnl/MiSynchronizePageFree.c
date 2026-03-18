/*
 * XREFs of MiSynchronizePageFree @ 0x140224B8C
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSynchronizePageFree(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // edi
  signed __int32 v5; // eax

  v1 = (volatile signed __int32 *)(a1 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset(v1, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 1272));
    while ( 1 )
    {
      v5 = *v1;
      if ( (*v1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v5 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v1, v5 | 0x40000000, v5);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  return MiUnlockWorkingSetExclusive((__int64)v1, CurrentIrql);
}
