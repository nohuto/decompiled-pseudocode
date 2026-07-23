/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1404242E0
 * Callers:
 *     NtResetWriteWatch @ 0x140013270 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401B7964 (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401FE888 (NtSignalAndWaitForSingleObject.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140432C90 (NtFreeVirtualMemory.c)
 *     PspCreateThread @ 0x140457BE8 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140461CC0 (ExpWnfCaptureScopeInstanceId.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x14046FD64 (NtCreateWorkerFactory.c)
 *     PspQueryQuotaLimits @ 0x1404AF824 (PspQueryQuotaLimits.c)
 *     NtResumeThread @ 0x1404B27C8 (NtResumeThread.c)
 *     NtFlushVirtualMemory @ 0x1404B52E4 (NtFlushVirtualMemory.c)
 *     NtGetNextThread @ 0x1404B8554 (NtGetNextThread.c)
 *     PspSetQuotaLimits @ 0x1404C28C8 (PspSetQuotaLimits.c)
 *     PspCreateProcess @ 0x1404CDA18 (PspCreateProcess.c)
 *     NtIsProcessInJob @ 0x1404D5728 (NtIsProcessInJob.c)
 *     NtAssignProcessToJobObject @ 0x1404D58A0 (NtAssignProcessToJobObject.c)
 *     MiLockUnlockCommon @ 0x1404D6AD4 (MiLockUnlockCommon.c)
 *     NtSetInformationVirtualMemory @ 0x1404D6C9C (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
 *     NtSuspendThread @ 0x1404EAB70 (NtSuspendThread.c)
 *     NtTerminateProcess @ 0x1404EAD14 (NtTerminateProcess.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 *     PfpSourceGetPrefetchSupport @ 0x140533B78 (PfpSourceGetPrefetchSupport.c)
 *     ObWaitForSingleObject @ 0x1405348D4 (ObWaitForSingleObject.c)
 *     NtGetNextProcess @ 0x14053F9D8 (NtGetNextProcess.c)
 *     MmProcessWorkingSetControl @ 0x14054C038 (MmProcessWorkingSetControl.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14061318C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140613440 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetComRootKey @ 0x140613638 (VrpHandleIoctlGetComRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613808 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140613AAC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x140613F34 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140614240 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtDebugActiveProcess @ 0x140619878 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140619C2C (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14061C380 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     NtCreateEnclave @ 0x14065F9DC (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14065FDAC (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x140660068 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140668C44 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x140669CAC (PfSnAppLaunchScenarioControl.c)
 *     PspQueryPooledQuotaLimits @ 0x14067D94C (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x14067DAC4 (PspQueryWorkingSetWatch.c)
 *     PspConvertSiloToServerSilo @ 0x14067E604 (PspConvertSiloToServerSilo.c)
 *     PspAssignPrimaryToken @ 0x14067F0C0 (PspAssignPrimaryToken.c)
 *     PspCreatePicoProcess @ 0x140681688 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x140681894 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x140681ECC (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x140681FD8 (NtAlertThread.c)
 *     NtResumeProcess @ 0x140682040 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x1406820A8 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1406821CC (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140682254 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
