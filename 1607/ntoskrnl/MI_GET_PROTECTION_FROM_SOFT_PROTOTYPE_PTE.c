/*
 * XREFs of MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F25B8
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MiInitializeTransitionPfn @ 0x140023124 (MiInitializeTransitionPfn.c)
 *     MiReferenceInPageFile @ 0x140024E50 (MiReferenceInPageFile.c)
 *     MiValidateInPage @ 0x1400267B0 (MiValidateInPage.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiReadyStandbyPageForActive @ 0x1400348B0 (MiReadyStandbyPageForActive.c)
 *     MiUnlinkStandbyBatch @ 0x1400358F0 (MiUnlinkStandbyBatch.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140035C70 (MiDecrementAndInsertStandbyPages.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiPfnShareCountIsZero @ 0x1400666E0 (MiPfnShareCountIsZero.c)
 *     MiGetPfnProtection @ 0x1400B8AB0 (MiGetPfnProtection.c)
 *     MiGetPageProtection @ 0x1400BD710 (MiGetPageProtection.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400BDBD8 (MiCaptureProtectionFromLockedProto.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E5B30 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiMarkPfnVerified @ 0x14010A2D4 (MiMarkPfnVerified.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiCaptureProtectionFromProto @ 0x1401F01E0 (MiCaptureProtectionFromProto.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(__int64 a1)
{
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 5) & 0x1F;
}
