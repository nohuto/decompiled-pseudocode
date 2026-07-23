/*
 * XREFs of MiWorkingSetIsContended @ 0x1400B8870
 * Callers:
 *     MiEmptyWorkingSet @ 0x140015A54 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140042840 (MiQueryAddressSpan.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E778 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x1401337A8 (MiEmptyWsPrivatePagesCallback.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E068C (MiReleaseCommitForResetPageCallback.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA350 (MmUpdateOldWorkingSetPages.c)
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiScrubLargeMappedPage @ 0x1401FE160 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_140327CC0;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
