/*
 * XREFs of MiGetPfnPriority @ 0x1400E67A4
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiTrimThisWsle @ 0x140016960 (MiTrimThisWsle.c)
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x1400666E0 (MiPfnShareCountIsZero.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1400B8B28 (MiQueryPfn.c)
 *     MiUpdatePfnPriority @ 0x1400BDCE0 (MiUpdatePfnPriority.c)
 *     MmSetPfnListPriorities @ 0x1400BE170 (MmSetPfnListPriorities.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiUpdatePrefetchPriority @ 0x1400E6670 (MiUpdatePrefetchPriority.c)
 *     MiUpdatePageAttributeStamp @ 0x1400FCF10 (MiUpdatePageAttributeStamp.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x140107C6C (MiReplaceNumaStandbyPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110334 (MiDeprioritizeVirtualAddresses.c)
 *     MiStoreCheckCandidatePage @ 0x1401191C4 (MiStoreCheckCandidatePage.c)
 *     MiUnlinkNumaStandbyPage @ 0x140120E54 (MiUnlinkNumaStandbyPage.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140129C50 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA524 (MmUpdateOldWorkingSetPages.c)
 *     MiInsertNumaStandbyPage @ 0x1401F3258 (MiInsertNumaStandbyPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPriority(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 5LL;
  else
    return *(_BYTE *)(a1 + 35) & 7;
}
