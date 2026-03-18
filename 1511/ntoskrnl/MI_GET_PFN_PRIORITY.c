/*
 * XREFs of MI_GET_PFN_PRIORITY @ 0x1400B8498
 * Callers:
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiUpdatePrefetchPriority @ 0x140070C90 (MiUpdatePrefetchPriority.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiTrimThisWsle @ 0x1400B6290 (MiTrimThisWsle.c)
 *     MiUpdatePfnPriority @ 0x1400B9884 (MiUpdatePfnPriority.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfnUnsafe @ 0x1400EA268 (MiQueryPfnUnsafe.c)
 *     MiUpdatePageAttributeStamp @ 0x1400EC64C (MiUpdatePageAttributeStamp.c)
 *     MiDuplicateCloneLeaf @ 0x1400F3798 (MiDuplicateCloneLeaf.c)
 *     MiStoreCheckCandidatePage @ 0x14010AD28 (MiStoreCheckCandidatePage.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401126E0 (MiUnlinkNumaStandbyPage.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVARange @ 0x1401D257C (MiDeprioritizeVARange.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401D8810 (MmUpdateOldWorkingSetPages.c)
 *     MiInsertNumaStandbyPage @ 0x1401E3C90 (MiInsertNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_GET_PFN_PRIORITY(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 5LL;
  else
    return *(_BYTE *)(a1 + 35) & 7;
}
