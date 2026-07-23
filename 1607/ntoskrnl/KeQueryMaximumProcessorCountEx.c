/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x140087824
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14007D310 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14008777C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x1400877CC (ExpGetSystemProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x140133948 (ExpAllocateFannedOutPushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140133A2C (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x140133AD0 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140133E38 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140135454 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaInitialize @ 0x1401493D8 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1401D2F2C (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x1401D6B70 (KeStartProfile.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14022D2CC (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     EtwpInitLoggerContext @ 0x140493C40 (EtwpInitLoggerContext.c)
 *     EtwpAllocatePmcData @ 0x1406A41C0 (EtwpAllocatePmcData.c)
 *     ExpInitSystemPhase1 @ 0x14079EB74 (ExpInitSystemPhase1.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( !KeDynamicPartitioningSupported )
    return KeQueryActiveProcessorCountEx(GroupNumber);
  if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    return KeMaximumProcessors;
  return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
}
