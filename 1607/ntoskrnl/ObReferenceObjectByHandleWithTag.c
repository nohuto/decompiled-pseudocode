/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140425420
 * Callers:
 *     NtResetWriteWatch @ 0x1400136F0 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x140014EF0 (NtGetWriteWatch.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401B7A80 (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401FEA5C (NtSignalAndWaitForSingleObject.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140433DC0 (NtFreeVirtualMemory.c)
 *     PspCreateThread @ 0x140458D18 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140462DF0 (ExpWnfCaptureScopeInstanceId.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x140470E94 (NtCreateWorkerFactory.c)
 *     PspQueryQuotaLimits @ 0x1404C9AA4 (PspQueryQuotaLimits.c)
 *     NtResumeThread @ 0x1404CCD9C (NtResumeThread.c)
 *     NtFlushVirtualMemory @ 0x1404D1844 (NtFlushVirtualMemory.c)
 *     NtGetNextThread @ 0x1404D4F50 (NtGetNextThread.c)
 *     PspSetQuotaLimits @ 0x1404DF2C4 (PspSetQuotaLimits.c)
 *     PspCreateProcess @ 0x1404EB990 (PspCreateProcess.c)
 *     NtIsProcessInJob @ 0x1404F279C (NtIsProcessInJob.c)
 *     NtAssignProcessToJobObject @ 0x1404F2914 (NtAssignProcessToJobObject.c)
 *     MiLockUnlockCommon @ 0x1404F3B48 (MiLockUnlockCommon.c)
 *     NtSetInformationVirtualMemory @ 0x1404F3D10 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1404F4680 (MmPrefetchVirtualMemory.c)
 *     NtSuspendThread @ 0x140507BE0 (NtSuspendThread.c)
 *     NtTerminateProcess @ 0x140507D84 (NtTerminateProcess.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 *     PfpSourceGetPrefetchSupport @ 0x140533638 (PfpSourceGetPrefetchSupport.c)
 *     ObWaitForSingleObject @ 0x140534394 (ObWaitForSingleObject.c)
 *     NtGetNextProcess @ 0x14053F498 (NtGetNextProcess.c)
 *     MmProcessWorkingSetControl @ 0x14054BAF8 (MmProcessWorkingSetControl.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406130D8 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14061338C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetComRootKey @ 0x140613584 (VrpHandleIoctlGetComRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613754 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406139F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x140613E80 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14061418C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtDebugActiveProcess @ 0x1406197C4 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140619B78 (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14061C2CC (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CA98 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14065D220 (NtFreeUserPhysicalPages.c)
 *     NtCreateEnclave @ 0x14065F8F8 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14065FCC8 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14065FF84 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140668B60 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x140669BC8 (PfSnAppLaunchScenarioControl.c)
 *     PspQueryPooledQuotaLimits @ 0x14067D868 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x14067D9E0 (PspQueryWorkingSetWatch.c)
 *     PspConvertSiloToServerSilo @ 0x14067E520 (PspConvertSiloToServerSilo.c)
 *     PspAssignPrimaryToken @ 0x14067EFDC (PspAssignPrimaryToken.c)
 *     PspCreatePicoProcess @ 0x1406815A4 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x1406817B0 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x140681DE8 (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x140681EF4 (NtAlertThread.c)
 *     NtResumeProcess @ 0x140681F5C (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x140681FC4 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1406820E8 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140682170 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x1406B7C0C (ExpProfileCreate.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
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
