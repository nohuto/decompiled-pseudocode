/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14002E7B0
 * Callers:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     MiInsertVadEvent @ 0x140014090 (MiInsertVadEvent.c)
 *     MiComputeContiguousSubsectionPte @ 0x14002C580 (MiComputeContiguousSubsectionPte.c)
 *     MiGetWsAndInsertVad @ 0x140030660 (MiGetWsAndInsertVad.c)
 *     KiAbEntryRemoveFromTree @ 0x140030BB0 (KiAbEntryRemoveFromTree.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031410 (MiMakeSystemCacheRangeValid.c)
 *     MiCountSharedPages @ 0x140092450 (MiCountSharedPages.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1400964F0 (MmDoesFileHaveUserWritableReferences.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
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
