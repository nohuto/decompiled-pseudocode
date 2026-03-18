/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x140089C20
 * Callers:
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     ExpAddTagForBigPages @ 0x1400124D0 (ExpAddTagForBigPages.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiEndingOffsetWithLock @ 0x140023560 (MiEndingOffsetWithLock.c)
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     MiOffsetToProtos @ 0x140033070 (MiOffsetToProtos.c)
 *     MiQueryAddressState @ 0x140043000 (MiQueryAddressState.c)
 *     RtlpWalkFrameChain @ 0x14004F520 (RtlpWalkFrameChain.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400ECA30 (KiAbEntryGetLockedHeadEntry.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DDDC (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAE68 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(volatile signed __int32 *a1, unsigned __int8 CurrentIrql)
{
  unsigned int v2; // edi
  signed __int32 v5; // eax
  signed __int32 v7; // ett

  v2 = 0;
  do
  {
    v5 = *a1;
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v7 = v5;
        v5 = _InterlockedCompareExchange(a1, v5 | 0x40000000, v5);
        if ( v7 != v5 )
          continue;
      }
      if ( CurrentIrql != 0xFF )
        __writecr8(CurrentIrql);
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
      if ( CurrentIrql != 0xFF )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v5 = *a1;
    }
  }
  while ( v5 != _InterlockedCompareExchange(a1, (v5 + 1) & 0xBFFFFFFF, v5) );
  return v2;
}
