/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x140014408
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x1400143B0 (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140113FA0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14012BF88 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14015B770 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14015B838 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x14015B9A8 (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14015BCDC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaInitialize @ 0x14016CC14 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1402003A8 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x140204D70 (KeStartProfile.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1402635D0 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140266300 (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x1404B0048 (EtwpInitLoggerContext.c)
 *     EtwpAllocatePmcData @ 0x1406E6804 (EtwpAllocatePmcData.c)
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax

  if ( KeDynamicPartitioningSupported )
  {
    if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
      return KeMaximumProcessors;
    else
      return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
  }
  else
  {
    if ( GroupNumber == 0xFFFF )
    {
      LODWORD(v2) = KeNumberProcessors_0;
    }
    else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
    {
      LODWORD(v2) = 0;
    }
    else
    {
      v3 = qword_1403D15E8[GroupNumber] - (((unsigned __int64)qword_1403D15E8[GroupNumber] >> 1) & 0x5555555555555555LL);
      return (0x101010101010101LL
            * (((v3 & 0x3333333333333333LL)
              + ((v3 >> 2) & 0x3333333333333333LL)
              + (((v3 & 0x3333333333333333LL) + ((v3 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
    return v2;
  }
}
