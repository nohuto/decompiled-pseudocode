/*
 * XREFs of MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4
 * Callers:
 *     MiSectionCreated @ 0x14002E3D0 (MiSectionCreated.c)
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiInitializeReadInProgressPfn @ 0x1400363F0 (MiInitializeReadInProgressPfn.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiReadyStandbyPageForActive @ 0x140053F00 (MiReadyStandbyPageForActive.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiImagePageOk @ 0x1400790FC (MiImagePageOk.c)
 *     MiGetPfnProtection @ 0x14007B518 (MiGetPfnProtection.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiReferenceInPageFile @ 0x140088848 (MiReferenceInPageFile.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400E0B6C (MiCaptureProtectionFromLockedProto.c)
 *     MiCaptureProtectionFromProto @ 0x1400E0DD8 (MiCaptureProtectionFromProto.c)
 *     MiInitializeTransitionPfn @ 0x1400E2B5C (MiInitializeTransitionPfn.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102820 (MiDecrementAndInsertStandbyPages.c)
 *     MiMakeProtoTransition @ 0x140132098 (MiMakeProtoTransition.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 *     MiResolveFileOnlyFault @ 0x140230D4C (MiResolveFileOnlyFault.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(__int64 *a1)
{
  unsigned __int64 PteShadow; // rax

  PteShadow = *a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)a1, *a1);
  return (PteShadow >> 5) & 0x1F;
}
