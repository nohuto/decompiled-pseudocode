/*
 * XREFs of PsCreateSystemThread @ 0x1403E5D3C
 * Callers:
 *     SmKmStoreHelperStart @ 0x140004EFC (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140004F84 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x14010A05C (MiZeroInParallel.c)
 *     PopCreatePowerThread @ 0x140131050 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x14013CBCC (DisplayBootBitmap.c)
 *     CcInitializeAsyncRead @ 0x1401466A8 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x14022CFF0 (ExRegisterBootDevice.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     PopFlushVolumes @ 0x1403D0D4C (PopFlushVolumes.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     NtGetMUIRegistryInfo @ 0x1404B3868 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     ExpWatchProductTypeWork @ 0x1404CA880 (ExpWatchProductTypeWork.c)
 *     MiEnablePartitionMappedWrites @ 0x1405055BC (MiEnablePartitionMappedWrites.c)
 *     PopInitSystemSleeperThread @ 0x140531EE0 (PopInitSystemSleeperThread.c)
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 *     IoCreateSystemThread @ 0x14054D0A0 (IoCreateSystemThread.c)
 *     MmStoreRegister @ 0x140568500 (MmStoreRegister.c)
 *     CmpInitializeLazyWriters @ 0x14056F98C (CmpInitializeLazyWriters.c)
 *     PfTStart @ 0x1405729E0 (PfTStart.c)
 *     CmpInitializeSystemHivesLoad @ 0x140577634 (CmpInitializeSystemHivesLoad.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x14057AC58 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x14057B3F0 (PopFxCreateEmergencyWorkerThread.c)
 *     IopStartApcHardError @ 0x1406232AC (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x140659C24 (MiInitializePartitionThreads.c)
 *     ExpWatchLicenseInfoWork @ 0x1406ACB24 (ExpWatchLicenseInfoWork.c)
 *     VfPendingInitPhase1 @ 0x14070CF54 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140710A6C (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 *     MiSectionInitialization @ 0x1407A1524 (MiSectionInitialization.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x1407B2DB0 (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x1407B6AE0 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x1407BB3A4 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1403E5D7C (PsCreateSystemThreadEx.c)
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
