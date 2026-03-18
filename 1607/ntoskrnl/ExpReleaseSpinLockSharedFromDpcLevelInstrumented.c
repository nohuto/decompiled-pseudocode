/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DEBC
 * Callers:
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     ExpAddTagForBigPages @ 0x1400124D0 (ExpAddTagForBigPages.c)
 *     MiEndingOffsetWithLock @ 0x140023560 (MiEndingOffsetWithLock.c)
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     MiOffsetToProtos @ 0x140033070 (MiOffsetToProtos.c)
 *     MiQueryAddressState @ 0x140043000 (MiQueryAddressState.c)
 *     RtlpWalkFrameChain @ 0x14004F520 (RtlpWalkFrameChain.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
