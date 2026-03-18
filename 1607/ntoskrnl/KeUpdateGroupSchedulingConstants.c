/*
 * XREFs of KeUpdateGroupSchedulingConstants @ 0x14014A6C8
 * Callers:
 *     KiEnableGroupScheduling @ 0x14014A608 (KiEnableGroupScheduling.c)
 *     PspReadDfssConfigurationValues @ 0x14020EBD0 (PspReadDfssConfigurationValues.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A693C (KiAssignSchedulingGroupWeights.c)
 */

void __fastcall KeUpdateGroupSchedulingConstants(char a1)
{
  unsigned __int64 v2; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = 1000000 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[0] + 1524) / 0x3E8;
  KiCycleDivisorShortTerm = v2 * (unsigned int)PsDfssShortTermSharingMS;
  KiCycleDivisorLongTerm = v2 * (unsigned int)PsDfssLongTermSharingMS;
  KiCyclesPerGeneration = v2 * (unsigned int)PsDfssGenerationLengthMS;
  KiGroupSchedulingNumerator = PsDfssLongTermFraction1024;
  KiGenerationTicks = 10000 * (unsigned __int64)(unsigned int)PsDfssGenerationLengthMS / KeMaximumIncrement;
  KiAssignSchedulingGroupWeights(0, 1, 0LL);
  if ( !a1 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
