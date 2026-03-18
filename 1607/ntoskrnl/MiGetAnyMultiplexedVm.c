/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x14001D05C
 * Callers:
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MmSetAddressRangeModified @ 0x140016FA0 (MmSetAddressRangeModified.c)
 *     MiReleaseSystemCacheView @ 0x140018374 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x140019B70 (MiObtainSystemCacheView.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     MiPfCompleteInPageSupport @ 0x1400239B8 (MiPfCompleteInPageSupport.c)
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiOutPageSingleKernelStack @ 0x140075734 (MiOutPageSingleKernelStack.c)
 *     MiDbgCopyMemory @ 0x1400836B8 (MiDbgCopyMemory.c)
 *     MiSetPagingOfDriver @ 0x140083DC4 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140086098 (MiMakeDriverPagesPrivate.c)
 *     MiEncodeProtoFill @ 0x1400902CC (MiEncodeProtoFill.c)
 *     MiInitializeProbePacketVm @ 0x14009A924 (MiInitializeProbePacketVm.c)
 *     MiMarkPteDirty @ 0x14009D708 (MiMarkPteDirty.c)
 *     MiDeleteKernelStackPages @ 0x1400A16C8 (MiDeleteKernelStackPages.c)
 *     MiProtoFault @ 0x1400A3E68 (MiProtoFault.c)
 *     MiAcquireProperVm @ 0x1400A4200 (MiAcquireProperVm.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AD44C (MmAdjustWorkingSetSizeEx.c)
 *     MiOutSwapKernelStackPage @ 0x1400B77DC (MiOutSwapKernelStackPage.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400C03A0 (MmQuerySystemWorkingSetInformation.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FE0F4 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140100090 (MiRemoveFromSystemSpace.c)
 *     MiDeletePteRange @ 0x1401007D0 (MiDeletePteRange.c)
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiLockPagedAddress @ 0x14010B9BC (MiLockPagedAddress.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x140116930 (MiMapPageFileHash.c)
 *     MiCountSystemImageCommitment @ 0x14012CA50 (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x140138D04 (MiDeleteBootRange.c)
 *     MiAssignSharedUserRanges @ 0x14013D1A0 (MiAssignSharedUserRanges.c)
 *     MiFreeUnusedPfnPages @ 0x14013E234 (MiFreeUnusedPfnPages.c)
 *     MiExceptionForMappedVa @ 0x1401E13A4 (MiExceptionForMappedVa.c)
 *     MiTranslatePageForCopy @ 0x1401E4C54 (MiTranslatePageForCopy.c)
 *     MmReplaceImportEntry @ 0x1401E5FA8 (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x1401E63E8 (MiJumpStackTarget.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 *     MmRemoveSystemCacheFromDump @ 0x1401E7ED0 (MmRemoveSystemCacheFromDump.c)
 *     MiMakeSpecialPoolPaged @ 0x1401EB7D0 (MiMakeSpecialPoolPaged.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401EC0A4 (MmFreeSpecialPool.c)
 *     MiConvertPartitionWs @ 0x1401F1340 (MiConvertPartitionWs.c)
 *     MiCapturePfnVm @ 0x1401F7D38 (MiCapturePfnVm.c)
 *     MiRecheckCombineVm @ 0x1401FA240 (MiRecheckCombineVm.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042F650 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiFreeInitializationCode @ 0x14047D5E8 (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x140482408 (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiGetCcAccessLog @ 0x1404999A0 (MiGetCcAccessLog.c)
 *     MiUseLargeDriverPage @ 0x1404ED9A4 (MiUseLargeDriverPage.c)
 *     MiMapImageInSystemSpace @ 0x140525CC8 (MiMapImageInSystemSpace.c)
 *     MmFreeBootRegistry @ 0x14054E110 (MmFreeBootRegistry.c)
 *     MmReturnChargesToLockPagedPool @ 0x14065A1EC (MmReturnChargesToLockPagedPool.c)
 *     MmTrimPagedPool @ 0x14065A268 (MmTrimPagedPool.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E080 (MmLogSystemShareablePfnInfo.c)
 *     MiBuildPagedPool @ 0x14078E258 (MiBuildPagedPool.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407A4D44 (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 *     MiInitializeDynamicRegion @ 0x1407A517C (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x1407BB960 (MiInitializePteInfo.c)
 *     MiReturnDriverLoadPages @ 0x1407D106C (MiReturnDriverLoadPages.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 >= 1 )
  {
    v1 = 272LL * a1;
    v2 = (char *)&unk_140327940;
  }
  else
  {
    v1 = 192LL * a1;
    v2 = (char *)&unk_140324F00;
  }
  return &v2[v1];
}
