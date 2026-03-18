/*
 * XREFs of MiInvalidPteConforms @ 0x1401F26C4
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14001E990 (MiReservePageFileSpaceForPage.c)
 *     MiTryLockLeafPage @ 0x140022EEC (MiTryLockLeafPage.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiUpdatePfnPriorityByPte @ 0x14002E6B0 (MiUpdatePfnPriorityByPte.c)
 *     MiLockLeafPage @ 0x14002EA50 (MiLockLeafPage.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyBatch @ 0x1400358F0 (MiUnlinkStandbyBatch.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x14004E9B0 (MiCheckProtoPtePageState.c)
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiLockTransitionLeafPage @ 0x1400B8FB8 (MiLockTransitionLeafPage.c)
 *     MiCheckReservePageFileSpace @ 0x1400E4C50 (MiCheckReservePageFileSpace.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiValidFault @ 0x1400E6250 (MiValidFault.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiCaptureProtectionFromProto @ 0x1401F01E0 (MiCaptureProtectionFromProto.c)
 *     MiCombineCandidate @ 0x1401F7E78 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0;
  if ( a1 && qword_140326A00 )
    return (qword_140326A00 & a1) != 0;
  return 1;
}
