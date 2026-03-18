/*
 * XREFs of MiGetVmPartition @ 0x14003C15C
 * Callers:
 *     MiReturnWsToExpansionList @ 0x14002B690 (MiReturnWsToExpansionList.c)
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiCountSharedPages @ 0x14003A9D0 (MiCountSharedPages.c)
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiSubsectionRequiresCharge @ 0x140077FD8 (MiSubsectionRequiresCharge.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiIncrementSubsectionViewCount @ 0x1400859A4 (MiIncrementSubsectionViewCount.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x14008CFD0 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     MiConvertToLinkedWsles @ 0x1400AD49C (MiConvertToLinkedWsles.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140113204 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 *     MiLogTrimWs @ 0x14012F884 (MiLogTrimWs.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 *     MiWorkingSetVeryLarge @ 0x140213D20 (MiWorkingSetVeryLarge.c)
 *     MiComputeTrimAmount @ 0x14021A5E8 (MiComputeTrimAmount.c)
 *     MiForcedTrim @ 0x14021A838 (MiForcedTrim.c)
 *     MiTrimAllSystemPagableMemory @ 0x14021B230 (MiTrimAllSystemPagableMemory.c)
 *     MiGetThreadPartition @ 0x14021D480 (MiGetThreadPartition.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall MiGetVmPartition(__int64 a1)
{
  __int16 *v1; // rdx
  unsigned __int16 v2; // ax

  v1 = MiSystemPartition;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    v2 = *(_WORD *)(a1 + 180);
    if ( v2 != 1023 )
      return *(__int16 **)(qword_14034F0E8 + 8LL * v2);
  }
  return v1;
}
