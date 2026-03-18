/*
 * XREFs of MiUnlockProtoPoolPage @ 0x14006AD80
 * Callers:
 *     MiReplaceLockedPage @ 0x140007BB8 (MiReplaceLockedPage.c)
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiCopyHeaderIfResident @ 0x14000E7B8 (MiCopyHeaderIfResident.c)
 *     MiDeleteMergedPte @ 0x14000E9A8 (MiDeleteMergedPte.c)
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     MiSectionCreated @ 0x140038BD8 (MiSectionCreated.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1400AAD60 (MiAllocateInPageSupport.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiMakeImageReadOnly @ 0x1400E7680 (MiMakeImageReadOnly.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiWaitForPageWriteCompletion @ 0x1401074A4 (MiWaitForPageWriteCompletion.c)
 *     MiReleasePageFileSectionInfo @ 0x1401088B0 (MiReleasePageFileSectionInfo.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MiIsSubsectionClean @ 0x1401D12F4 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1401D1590 (MiPurgeSubsection.c)
 *     MiTranslatePageForCopy @ 0x1401D4068 (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x1401D45A8 (MmCopyMemory.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x1401E3058 (MiInitializeProtoPfn.c)
 *     MiBuildFileOnlyProtos @ 0x1401E325C (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x1401E3504 (MiEliminateStaleExtents.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x14006A630 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(a1) )
    MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 != 17 )
  {
    result = a2;
    __writecr8(a2);
  }
  return result;
}
