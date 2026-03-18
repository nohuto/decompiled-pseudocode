/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14002EC30
 * Callers:
 *     ExInitializeResourceLite @ 0x14000ECC0 (ExInitializeResourceLite.c)
 *     MiInsertVadEvent @ 0x140014510 (MiInsertVadEvent.c)
 *     MiComputeContiguousSubsectionPte @ 0x14002CA00 (MiComputeContiguousSubsectionPte.c)
 *     MiGetWsAndInsertVad @ 0x140030AE0 (MiGetWsAndInsertVad.c)
 *     KiAbEntryRemoveFromTree @ 0x140031030 (KiAbEntryRemoveFromTree.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     MiCountSharedPages @ 0x140092C50 (MiCountSharedPages.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140096CF0 (MmDoesFileHaveUserWritableReferences.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DD30 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EF00 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAE68 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  signed __int32 v4; // edx
  bool v6; // zf
  signed __int32 v7; // eax

  v2 = 0;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v2 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  v4 = *a1;
  while ( (v4 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (v4 & 0x40000000) == 0 )
    {
      v7 = _InterlockedCompareExchange(a1, v4 | 0x40000000, v4);
      v6 = v4 == v7;
      v4 = v7;
      if ( !v6 )
        continue;
    }
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
    v4 = *a1;
  }
  return v2;
}
