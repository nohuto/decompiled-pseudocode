/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x140085F34
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14007D290 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140085E8C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x140085EDC (ExpGetSystemProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x1401333D8 (ExpAllocateFannedOutPushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1401334BC (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x140133560 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1401338C8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140134EE4 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaInitialize @ 0x140148E68 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1401D3100 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x1401D6D44 (KeStartProfile.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14022D4A0 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     EtwpInitLoggerContext @ 0x1404931B0 (EtwpInitLoggerContext.c)
 *     EtwpAllocatePmcData @ 0x1406A4088 (EtwpAllocatePmcData.c)
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
