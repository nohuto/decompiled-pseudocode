/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x14070C318
 * Callers:
 *     VfFailDeviceNode @ 0x140131F10 (VfFailDeviceNode.c)
 *     VerifierFreeTrackedPool @ 0x1401EEC54 (VerifierFreeTrackedPool.c)
 *     VfFailDriver @ 0x1402224F8 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x140222520 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x140222DAC (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140222FA8 (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     MmCheckMdlPages @ 0x140701BC4 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140701CD4 (MmCheckMapIoSpace.c)
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1407021B0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1407022A0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x140702470 (ViFreeTrackedPool.c)
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x1407054B8 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x140705654 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x14070569C (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x140705800 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x1407059F4 (VfIoCompletionCheckState.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x14070C27C (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x14070CA84 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x14070D680 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x14070DAC0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x14070DC0C (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x14070DE8C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x14070DEB4 (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x14070EBF4 (ViErrorFinishReport.c)
 *     VfTargetEtwUnregister @ 0x140710144 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1407105F8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140710660 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x140710A0C (VfPoolCheckForLeaks.c)
 *     VfCheckUserHandle @ 0x1407117A8 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1407119FC (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140711B48 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x140711F48 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1407120E0 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140712258 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1407122F0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x14071236C (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x14071255C (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1407125E0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x140712644 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140712DC4 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140712FC8 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x140713194 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407131F4 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x1407133FC (ViKeWaitSanityChecks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140716988 (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x140717060 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x140717250 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x140717390 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14071749C (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x140717598 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140717D6C (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x140718304 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1407183AC (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x14071A4B0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x14071A614 (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x14071A64C (ViExCheckAPCsDisabled.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x14071BC54 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x14071BEBC (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x14071BFC0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x14071C09C (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x14071C228 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x14071C310 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x14071C438 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x14071C56C (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x14071C5E4 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x14071C834 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x14071C928 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x14071CCF0 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x14071CDC8 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x14071CEE8 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x14071E9D8 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x140720CBC (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x140721210 (ExAllocatePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall VerifierBugCheckIfAppropriate(
        ULONG a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        __int64 BugCheckParameter4)
{
  unsigned int v6; // r11d
  __int64 *v7; // r10
  __int64 v8; // rcx
  __int64 result; // rax

  if ( (VfFlightOptions & 0x10000) == 0 )
  {
    v6 = 0;
    v7 = ViVerifierBugcheckAttributes;
    while ( *(_DWORD *)v7 != a1 || *((_DWORD *)v7 + 1) != a2 )
    {
      ++v6;
      v7 = (__int64 *)((char *)v7 + 12);
      if ( v6 >= 0xD )
        goto LABEL_6;
    }
    if ( VfVerifyMode >= *((_DWORD *)v7 + 2) )
LABEL_6:
      KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
    v8 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
    result = BugCheckParameter4;
    *((_QWORD *)&ViBugcheckLog + v8 + 4) = BugCheckParameter4;
    *((_DWORD *)&ViBugcheckLog + 2 * v8) = a1;
    *((_QWORD *)&ViBugcheckLog + v8 + 1) = a2;
    *((_QWORD *)&ViBugcheckLog + v8 + 2) = a3;
    *((_QWORD *)&ViBugcheckLog + v8 + 3) = a4;
  }
  return result;
}
