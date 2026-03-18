/*
 * XREFs of PsCreateSystemThread @ 0x1403E4710
 * Callers:
 *     SmKmStoreHelperStart @ 0x140004D88 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140004E10 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x14010C2DC (MiZeroInParallel.c)
 *     PopCreatePowerThread @ 0x140130AE0 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x14013C65C (DisplayBootBitmap.c)
 *     CcInitializeAsyncRead @ 0x140146138 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x14022D1C4 (ExRegisterBootDevice.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     PopFlushVolumes @ 0x1403D0D4C (PopFlushVolumes.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     NtGetMUIRegistryInfo @ 0x1404CFDC8 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404D014C (NtMapCMFModule.c)
 *     ExpWatchProductTypeWork @ 0x1404E84F4 (ExpWatchProductTypeWork.c)
 *     MiEnablePartitionMappedWrites @ 0x14052255C (MiEnablePartitionMappedWrites.c)
 *     PopInitSystemSleeperThread @ 0x1405319A0 (PopInitSystemSleeperThread.c)
 *     NtInitializeRegistry @ 0x140547164 (NtInitializeRegistry.c)
 *     IoCreateSystemThread @ 0x14054CB60 (IoCreateSystemThread.c)
 *     MmStoreRegister @ 0x140567FC0 (MmStoreRegister.c)
 *     CmpInitializeLazyWriters @ 0x14056F44C (CmpInitializeLazyWriters.c)
 *     PfTStart @ 0x1405724A0 (PfTStart.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405770F4 (CmpInitializeSystemHivesLoad.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x14057A718 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x14057AF44 (PopFxCreateEmergencyWorkerThread.c)
 *     IopStartApcHardError @ 0x1406231F8 (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x140659B40 (MiInitializePartitionThreads.c)
 *     ExpWatchLicenseInfoWork @ 0x1406AC9EC (ExpWatchLicenseInfoWork.c)
 *     VfPendingInitPhase1 @ 0x14070CF24 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140710A3C (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 *     MiSectionInitialization @ 0x1407A1524 (MiSectionInitialization.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x1407B2DB0 (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x1407B6AE0 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x1407BB3A4 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1403E4750 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __stdcall PsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThreadEx(
           (_DWORD)ThreadHandle,
           DesiredAccess,
           (_DWORD)ObjectAttributes,
           (_DWORD)ProcessHandle,
           (__int64)ClientId,
           (__int64)StartRoutine,
           (__int64)StartContext,
           0LL,
           0LL);
}
