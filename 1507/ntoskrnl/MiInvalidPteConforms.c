/*
 * XREFs of MiInvalidPteConforms @ 0x140225BA4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyBatch @ 0x140053B30 (MiUnlinkStandbyBatch.c)
 *     MiUpdatePfnPriorityByPte @ 0x140054C90 (MiUpdatePfnPriorityByPte.c)
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiCheckProtoPtePageState @ 0x140081F50 (MiCheckProtoPtePageState.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiCaptureProtectionFromProto @ 0x1400E0DD8 (MiCaptureProtectionFromProto.c)
 *     MiTryLockLeafPage @ 0x1400E2750 (MiTryLockLeafPage.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0;
  if ( a1 && qword_14034EBC0 )
    return (qword_14034EBC0 & a1) != 0;
  return 1;
}
