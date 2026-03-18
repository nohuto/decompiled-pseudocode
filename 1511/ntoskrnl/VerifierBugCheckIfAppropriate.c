/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x1406C028C
 * Callers:
 *     VfFailDeviceNode @ 0x140126968 (VfFailDeviceNode.c)
 *     VerifierFreeTrackedPool @ 0x1401DD4E8 (VerifierFreeTrackedPool.c)
 *     VfFailDriver @ 0x14020AC10 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x14020AC38 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x14020B4C4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14020B6C0 (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     MmCheckMdlPages @ 0x1406B5D44 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1406B5E4C (MmCheckMapIoSpace.c)
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1406B62C0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1406B63B0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x1406B65E0 (ViFreeTrackedPool.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x1406B93FC (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x1406B9598 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1406B95E0 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x1406B975C (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x1406B9950 (VfIoCompletionCheckState.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1406C01F4 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1406C09EC (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x1406C15E8 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x1406C1A28 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1406C1B60 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1406C1DE0 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x1406C1E08 (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x1406C2B34 (ViErrorFinishReport.c)
 *     VfTargetEtwUnregister @ 0x1406C4074 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1406C4510 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1406C4584 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x1406C4948 (VfPoolCheckForLeaks.c)
 *     VfCheckUserHandle @ 0x1406C5774 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1406C59AC (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1406C5AF8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x1406C5EF8 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1406C6090 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1406C6208 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1406C62A0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1406C631C (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1406C650C (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1406C6590 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1406C65F4 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1406C6D74 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1406C6F78 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x1406C714C (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1406C71AC (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x1406C73B4 (ViKeWaitSanityChecks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1406C7FE4 (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x1406C86B8 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x1406C88A8 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1406C89E8 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1406C8AF4 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x1406C8BF0 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1406C8C74 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1406C8D68 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1406C93A0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1406C9608 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1406C97D4 (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x1406C98F4 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1406C999C (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1406CE3F8 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1406CE55C (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1406CFB9C (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1406CFDF8 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1406CFEE4 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1406CFFAC (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1406D0124 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1406D01F8 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x1406D030C (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1406D0414 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x1406D0484 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1406D06A4 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x1406D078C (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1406D0B48 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x1406D0C20 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x1406D0D40 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x1406D280C (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x1406D4AF0 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x1406D5018 (ExAllocatePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall VerifierBugCheckIfAppropriate(
        ULONG a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        __int64 BugCheckParameter4)
{
  __int64 *v6; // r10
  unsigned int v7; // r11d
  __int64 v8; // rcx
  __int64 result; // rax

  v6 = ViVerifierBugcheckAttributes;
  v7 = 0;
  while ( *(_DWORD *)v6 != a1 || *((_DWORD *)v6 + 1) != a2 )
  {
    ++v7;
    v6 = (__int64 *)((char *)v6 + 12);
    if ( v7 >= 0xD )
      goto LABEL_5;
  }
  if ( VfVerifyMode >= *((_DWORD *)v6 + 2) )
LABEL_5:
    KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
  v8 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
  result = BugCheckParameter4;
  *((_QWORD *)&ViBugcheckLog + v8 + 4) = BugCheckParameter4;
  *((_DWORD *)&ViBugcheckLog + 2 * v8) = a1;
  *((_QWORD *)&ViBugcheckLog + v8 + 1) = a2;
  *((_QWORD *)&ViBugcheckLog + v8 + 2) = a3;
  *((_QWORD *)&ViBugcheckLog + v8 + 3) = a4;
  return result;
}
