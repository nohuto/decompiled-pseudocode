/*
 * XREFs of MiWorkingSetIsContended @ 0x1400BA9E0
 * Callers:
 *     MiEmptyWorkingSet @ 0x140015ED4 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140016210 (MiTrimWorkingSet.c)
 *     MiGetPageChain @ 0x14003D480 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140042CC0 (MiQueryAddressSpan.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B9DD0 (MiOutSwapWorkingSetCallback.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140133238 (MiEmptyWsPrivatePagesCallback.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E0860 (MiReleaseCommitForResetPageCallback.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA524 (MmUpdateOldWorkingSetPages.c)
 *     MiCombineWorkingSet @ 0x1401F80D0 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiScrubLargeMappedPage @ 0x1401FE334 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_140327C80;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
