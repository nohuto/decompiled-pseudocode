/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C
 * Callers:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     MiMarkSharedImageCfgBits @ 0x140036380 (MiMarkSharedImageCfgBits.c)
 *     ExpAddTagForBigPages @ 0x140041A10 (ExpAddTagForBigPages.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiEndingOffsetWithLock @ 0x14007C7F0 (MiEndingOffsetWithLock.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
