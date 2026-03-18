/*
 * XREFs of MiGetVmPartition @ 0x1400A8E60
 * Callers:
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140015C24 (MmQuerySystemWorkingSetInformation.c)
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiOutSwapWorkingSetCallback @ 0x14001F030 (MiOutSwapWorkingSetCallback.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     MiReturnWsToExpansionList @ 0x14009B428 (MiReturnWsToExpansionList.c)
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     NtResetWriteWatch @ 0x1400A5E20 (NtResetWriteWatch.c)
 *     MiCountSharedPages @ 0x1400A6110 (MiCountSharedPages.c)
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     MmStealTopLevelPage @ 0x1400D95E8 (MmStealTopLevelPage.c)
 *     MiSubsectionRequiresCharge @ 0x1400ED1C4 (MiSubsectionRequiresCharge.c)
 *     MiLogTrimWs @ 0x1400F15D4 (MiLogTrimWs.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiGetThreadPartition @ 0x140127940 (MiGetThreadPartition.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 *     MiWorkingSetVeryLarge @ 0x1401D29F0 (MiWorkingSetVeryLarge.c)
 *     MiComputeTrimAmount @ 0x1401D786C (MiComputeTrimAmount.c)
 *     MiForcedTrim @ 0x1401D7A98 (MiForcedTrim.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401D83E0 (MiTrimAllSystemPagableMemory.c)
 *     MiCommitEnclavePages @ 0x140628FF8 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetVmPartition(__int64 a1)
{
  int *result; // rax
  unsigned __int16 v2; // cx

  result = MiSystemPartition;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    v2 = *(_WORD *)(a1 + 180);
    if ( v2 != 1023 )
      return *(int **)(qword_1402FEC28 + 8LL * v2);
  }
  return result;
}
