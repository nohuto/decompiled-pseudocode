/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x140741A80
 * Callers:
 *     VfFailDeviceNode @ 0x14015A35C (VfFailDeviceNode.c)
 *     VerifierFreeTrackedPool @ 0x1402227B0 (VerifierFreeTrackedPool.c)
 *     VfFailDriver @ 0x14025A184 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x14025A1AC (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x14025AA6C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14025AC9C (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     MmCheckMdlPages @ 0x140736034 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x14073613C (MmCheckMapIoSpace.c)
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140736610 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140736700 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x1407368D0 (ViFreeTrackedPool.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x140739918 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x140739B88 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x140739BF4 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x140739D90 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x140739F84 (VfIoCompletionCheckState.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1407419E8 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1407421E4 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140742E14 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140743254 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1407433B8 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140743654 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x14074367C (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfTargetEtwUnregister @ 0x140745928 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140745DD4 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140745E48 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x14074620C (VfPoolCheckForLeaks.c)
 *     VfCheckUserHandle @ 0x1407473CC (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140747628 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x1407476F4 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1407477EC (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x1407478DC (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1407479AC (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140747A78 (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 *     VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x140747B24 (VerifierKeAcquireInStackQueuedSpinLockNoReboot.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140747BFC (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x140747CF4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140747E2C (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x140747F00 (VerifierKeAcquireSpinLockAtDpcLevelNoReboot.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140747FB0 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x140748058 (VerifierKeAcquireSpinLockRaiseToDpcNoReboot.c)
 *     VerifierKeEnterCriticalRegion @ 0x14074812C (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x14074839C (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140748584 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x14074864C (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot @ 0x1407486A8 (VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1407486E4 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot @ 0x140748740 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeReleaseInStackQueuedSpinLockNoReboot @ 0x14074877C (VerifierKeReleaseInStackQueuedSpinLockNoReboot.c)
 *     VerifierKeReleaseMutant @ 0x140748824 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutantNoReboot @ 0x1407488B8 (VerifierKeReleaseMutantNoReboot.c)
 *     VerifierKeReleaseMutex @ 0x14074892C (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseMutexNoReboot @ 0x14074899C (VerifierKeReleaseMutexNoReboot.c)
 *     VerifierKeReleaseSpinLock @ 0x1407489FC (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x140748B00 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140748BAC (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140748C30 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierKeSetEvent @ 0x140748D20 (VerifierKeSetEvent.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140748F20 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x140748FFC (VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot.c)
 *     VerifierKeWaitForMultipleObjects @ 0x1407490A0 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForMultipleObjectsNoReboot @ 0x1407492AC (VerifierKeWaitForMultipleObjectsNoReboot.c)
 *     VerifierKeWaitForSingleObject @ 0x140749448 (VerifierKeWaitForSingleObject.c)
 *     VerifierKeWaitForSingleObjectNoReboot @ 0x1407495C4 (VerifierKeWaitForSingleObjectNoReboot.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140749790 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x14074982C (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140749904 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VfKeInsertQueueDpc @ 0x140749B2C (VfKeInsertQueueDpc.c)
 *     VfKeRemoveQueueDpc @ 0x140749BFC (VfKeRemoveQueueDpc.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140749CA0 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14074A9FC (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x14074B1FC (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x14074B434 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14074B574 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14074B680 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x14074B77C (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14074B81C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14074B940 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14074BFA0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14074C420 (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x14074C588 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x14074C630 (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140751DD0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x140751F8C (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x140751FC4 (ViExCheckAPCsDisabled.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140753668 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1407538C4 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1407539B0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140753A78 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140753BF0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140753CC4 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140753DD8 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140753EE0 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x140753F50 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140754170 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x140754258 (ViMmValidateIrql.c)
 *     VerifierObGetObjectSecurity @ 0x1407545D0 (VerifierObGetObjectSecurity.c)
 *     VerifierObReferenceObjectByHandle @ 0x140754638 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x140754710 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObReferenceObjectByPointerWithTag @ 0x1407547A8 (VerifierObReferenceObjectByPointerWithTag.c)
 *     VerifierObfDereferenceObject @ 0x140754824 (VerifierObfDereferenceObject.c)
 *     VerifierObfDereferenceObjectWithTag @ 0x14075486C (VerifierObfDereferenceObjectWithTag.c)
 *     VerifierObfReferenceObject @ 0x1407548C0 (VerifierObfReferenceObject.c)
 *     VerifierObfReferenceObjectWithTag @ 0x140754938 (VerifierObfReferenceObjectWithTag.c)
 *     VfZwNotifyChangeKey @ 0x1407563D4 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x1407586B8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x140758C04 (ExAllocatePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
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
