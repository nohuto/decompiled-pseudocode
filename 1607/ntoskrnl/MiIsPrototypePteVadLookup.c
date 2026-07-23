/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x1401F2534
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiIsFaultPteIntact @ 0x1400257E0 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1400259F0 (MiFindActualFaultingPte.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiCountSharedPages @ 0x140092450 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x140095B00 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiIsPteEvaluated @ 0x1400B75C8 (MiIsPteEvaluated.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E39D0 (MiInitializeReadInProgressPfn.c)
 *     MiIsCfgBitMapPageShared @ 0x1400E7C60 (MiIsCfgBitMapPageShared.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF30C (MiCheckCommitReleaseFromVad.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (a1 & 0x400) != 0 && (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32 == 0xFFFFFFFF;
}
