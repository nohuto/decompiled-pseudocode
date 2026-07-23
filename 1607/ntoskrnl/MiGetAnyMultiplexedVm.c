/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x14001CBDC
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiPfCompleteInPageSupport @ 0x140023538 (MiPfCompleteInPageSupport.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiOutPageSingleKernelStack @ 0x1400757B4 (MiOutPageSingleKernelStack.c)
 *     MiSetPagingOfDriver @ 0x140081F24 (MiSetPagingOfDriver.c)
 *     MiDbgCopyMemory @ 0x140084338 (MiDbgCopyMemory.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiEncodeProtoFill @ 0x14008FA2C (MiEncodeProtoFill.c)
 *     MiInitializeProbePacketVm @ 0x14009A124 (MiInitializeProbePacketVm.c)
 *     MiMarkPteDirty @ 0x14009CF08 (MiMarkPteDirty.c)
 *     MiDeleteKernelStackPages @ 0x14009FFF0 (MiDeleteKernelStackPages.c)
 *     MiProtoFault @ 0x1400A2790 (MiProtoFault.c)
 *     MiAcquireProperVm @ 0x1400A2B28 (MiAcquireProperVm.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AB9B4 (MmAdjustWorkingSetSizeEx.c)
 *     MiOutSwapKernelStackPage @ 0x1400B5674 (MiOutSwapKernelStackPage.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400BE230 (MmQuerySystemWorkingSetInformation.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiLockPagedAddress @ 0x14010973C (MiLockPagedAddress.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     MiCountSystemImageCommitment @ 0x14012CFC0 (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     MiAssignSharedUserRanges @ 0x14013D710 (MiAssignSharedUserRanges.c)
 *     MiFreeUnusedPfnPages @ 0x14013E7A4 (MiFreeUnusedPfnPages.c)
 *     MiExceptionForMappedVa @ 0x1401E11D0 (MiExceptionForMappedVa.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 *     MmReplaceImportEntry @ 0x1401E5DD4 (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x1401E6214 (MiJumpStackTarget.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 *     MmRemoveSystemCacheFromDump @ 0x1401E7CFC (MmRemoveSystemCacheFromDump.c)
 *     MiMakeSpecialPoolPaged @ 0x1401EB5FC (MiMakeSpecialPoolPaged.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MiConvertPartitionWs @ 0x1401F116C (MiConvertPartitionWs.c)
 *     MiCapturePfnVm @ 0x1401F7B64 (MiCapturePfnVm.c)
 *     MiRecheckCombineVm @ 0x1401FA06C (MiRecheckCombineVm.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiGetCcAccessLog @ 0x14049A430 (MiGetCcAccessLog.c)
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 *     MmFreeBootRegistry @ 0x14054E4B0 (MmFreeBootRegistry.c)
 *     MmReturnChargesToLockPagedPool @ 0x14065A2D0 (MmReturnChargesToLockPagedPool.c)
 *     MmTrimPagedPool @ 0x14065A34C (MmTrimPagedPool.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E164 (MmLogSystemShareablePfnInfo.c)
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
    v2 = (char *)&unk_140327980;
  }
  else
  {
    v1 = 192LL * a1;
    v2 = (char *)&unk_140324F40;
  }
  return &v2[v1];
}
