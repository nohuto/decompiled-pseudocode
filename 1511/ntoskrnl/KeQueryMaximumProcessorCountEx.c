/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x14009CFE0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14009393C (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemProcessorInformation @ 0x1400E6D6C (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1400EEEB8 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x14012CC3C (ExpAllocateFannedOutPushLock.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14012CCF4 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14012CD78 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14012D1DC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14012EAF4 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaInitialize @ 0x14013F47C (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1401C412C (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x1401C7CFC (KeStartProfile.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1402139BC (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     EtwpInitLoggerContext @ 0x1404CA828 (EtwpInitLoggerContext.c)
 *     EtwpAllocatePmcData @ 0x140663724 (EtwpAllocatePmcData.c)
 *     ExpInitSystemPhase1 @ 0x140759698 (ExpInitSystemPhase1.c)
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
