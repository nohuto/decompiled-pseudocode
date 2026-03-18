/*
 * XREFs of MiUnlockProtoPoolPage @ 0x14004C4E0
 * Callers:
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400232A0 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiResolveDemandZeroFault @ 0x14003AA90 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MiWaitForPageWriteCompletion @ 0x140097BE8 (MiWaitForPageWriteCompletion.c)
 *     MiDeleteMergedPte @ 0x1400B8E10 (MiDeleteMergedPte.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C61A4 (MiWaitForCollidedFaultComplete.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1400E6F94 (MiAllocateInPageSupport.c)
 *     MiMakeImageReadOnly @ 0x1400FC6F4 (MiMakeImageReadOnly.c)
 *     MiSectionCreated @ 0x1400FD2C8 (MiSectionCreated.c)
 *     MiCopyHeaderIfResident @ 0x1400FD5B8 (MiCopyHeaderIfResident.c)
 *     MiInitializeImageProtos @ 0x1400FD83C (MiInitializeImageProtos.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiReleasePageFileSectionInfo @ 0x140115B2C (MiReleasePageFileSectionInfo.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiIsSubsectionClean @ 0x1401DEDA0 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1401DF074 (MiPurgeSubsection.c)
 *     MiTranslatePageForCopy @ 0x1401E4C54 (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x1401E51D4 (MmCopyMemory.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MiReplaceLockedPage @ 0x1401EB18C (MiReplaceLockedPage.c)
 *     MiBuildFileOnlyProtos @ 0x1401ED1AC (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x1401ED5F8 (MiEliminateStaleExtents.c)
 *     MiDeletePerSessionProtos @ 0x1401F4ECC (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x1401F5180 (MiInitializeProtoPfn.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6F38 (MiMakeImagePageOk.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x14002448C (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageCharge @ 0x14004D1E0 (MiRemoveLockedPageCharge.c)
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
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
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
