/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x1401F2708
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     MiIsFaultPteIntact @ 0x140025C60 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140025E70 (MiFindActualFaultingPte.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiQueryAddressState @ 0x140043000 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiCountSharedPages @ 0x140092C50 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x140096300 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiIsPteEvaluated @ 0x1400B9738 (MiIsPteEvaluated.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiGetPageProtection @ 0x1400BD710 (MiGetPageProtection.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BDB30 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E5B30 (MiInitializeReadInProgressPfn.c)
 *     MiIsCfgBitMapPageShared @ 0x1400E9DF0 (MiIsCfgBitMapPageShared.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF4E0 (MiCheckCommitReleaseFromVad.c)
 *     MiTranslatePageForCopy @ 0x1401E4C54 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2934 (MiReverseSwizzleInvalidPte.c)
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (a1 & 0x400) != 0 && (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32 == 0xFFFFFFFF;
}
