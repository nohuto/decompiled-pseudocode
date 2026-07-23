/*
 * XREFs of MiGetPfnPriority @ 0x1400E4644
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiTrimThisWsle @ 0x1400164E0 (MiTrimThisWsle.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1400B69B8 (MiQueryPfn.c)
 *     MiUpdatePfnPriority @ 0x1400BBB70 (MiUpdatePfnPriority.c)
 *     MmSetPfnListPriorities @ 0x1400BC000 (MmSetPfnListPriorities.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiUpdatePrefetchPriority @ 0x1400E4510 (MiUpdatePrefetchPriority.c)
 *     MiUpdatePageAttributeStamp @ 0x1400FAC90 (MiUpdatePageAttributeStamp.c)
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1401059EC (MiReplaceNumaStandbyPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110898 (MiDeprioritizeVirtualAddresses.c)
 *     MiStoreCheckCandidatePage @ 0x140119734 (MiStoreCheckCandidatePage.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401213C4 (MiUnlinkNumaStandbyPage.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14012A1C0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA350 (MmUpdateOldWorkingSetPages.c)
 *     MiInsertNumaStandbyPage @ 0x1401F3084 (MiInsertNumaStandbyPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
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
