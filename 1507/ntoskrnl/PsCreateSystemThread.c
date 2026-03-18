/*
 * XREFs of PsCreateSystemThread @ 0x1404F923C
 * Callers:
 *     MiZeroInParallel @ 0x140075AD4 (MiZeroInParallel.c)
 *     SmKmStoreHelperStart @ 0x1400D940C (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z @ 0x1400D9494 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z.c)
 *     PopCreatePowerThread @ 0x140159900 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x14015EE80 (DisplayBootBitmap.c)
 *     CcInitializeAsyncRead @ 0x140169C8C (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x140262824 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x1403ECAA4 (PopFlushVolumes.c)
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     NtGetMUIRegistryInfo @ 0x14053A748 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     PopInitSystemSleeperThread @ 0x140565D38 (PopInitSystemSleeperThread.c)
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 *     CmpInitializeLazyWriters @ 0x1405A74EC (CmpInitializeLazyWriters.c)
 *     IoCreateSystemThread @ 0x1405B2B7C (IoCreateSystemThread.c)
 *     PfTStart @ 0x1405B6200 (PfTStart.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405B9910 (CmpInitializeSystemHivesLoad.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1405BC428 (PopFxCreateEmergencyWorkerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1405BCBA4 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 *     IopStartApcHardError @ 0x1406734AC (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x1406A3F98 (MiInitializePartitionThreads.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     VerifierPsCreateSystemThread @ 0x14074242C (VerifierPsCreateSystemThread.c)
 *     VfPendingInitPhase1 @ 0x1407426FC (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140746278 (VfPoolInitPhase1.c)
 *     SeRmInitPhase1 @ 0x1407BC118 (SeRmInitPhase1.c)
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 *     MiSectionInitialization @ 0x1407C41D0 (MiSectionInitialization.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     FsRtlInitializeWorkerThread @ 0x1407E14A8 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x1407E66C8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1404F927C (PsCreateSystemThreadEx.c)
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
