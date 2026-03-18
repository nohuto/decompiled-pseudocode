/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x140225BE8
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiInitializeReadInProgressPfn @ 0x1400363F0 (MiInitializeReadInProgressPfn.c)
 *     MiIsCfgBitMapPageShared @ 0x14003A868 (MiIsCfgBitMapPageShared.c)
 *     MiCountSharedPages @ 0x14003A9D0 (MiCountSharedPages.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiIsFaultPteIntact @ 0x14007BFC0 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14007C0E0 (MiFindActualFaultingPte.c)
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiComputePageCommitment @ 0x14010E9C0 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x14010ECB0 (MiIsPteDecommittedPage.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiCountSystemImageCommitment @ 0x140155F9C (MiCountSystemImageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020EB90 (MiCheckCommitReleaseFromVad.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (a1 & 0x400) != 0 && (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32 == 0xFFFFFFFF;
}
