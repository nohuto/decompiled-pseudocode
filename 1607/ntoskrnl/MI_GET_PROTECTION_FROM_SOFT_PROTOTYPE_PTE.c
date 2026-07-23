/*
 * XREFs of MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MiInitializeTransitionPfn @ 0x140022CA4 (MiInitializeTransitionPfn.c)
 *     MiReferenceInPageFile @ 0x1400249D0 (MiReferenceInPageFile.c)
 *     MiValidateInPage @ 0x140026330 (MiValidateInPage.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MiReadyStandbyPageForActive @ 0x140034430 (MiReadyStandbyPageForActive.c)
 *     MiUnlinkStandbyBatch @ 0x140035470 (MiUnlinkStandbyBatch.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1400357F0 (MiDecrementAndInsertStandbyPages.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiGetPfnProtection @ 0x1400B6940 (MiGetPfnProtection.c)
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400BBA68 (MiCaptureProtectionFromLockedProto.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E39D0 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiCaptureProtectionFromProto @ 0x1401F000C (MiCaptureProtectionFromProto.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(__int64 a1)
{
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 5) & 0x1F;
}
