/*
 * XREFs of PsCreateSystemThread @ 0x1404D20DC
 * Callers:
 *     MiZeroInParallel @ 0x1400BC21C (MiZeroInParallel.c)
 *     SmKmStoreHelperStart @ 0x1400F93C8 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z @ 0x1400F9450 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z.c)
 *     PopCreatePowerThread @ 0x140125DF8 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x1401344C8 (DisplayBootBitmap.c)
 *     CcInitializeAsyncRead @ 0x14013CC90 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x1402130EC (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x1403A39C4 (PopFlushVolumes.c)
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     MiEnablePartitionMappedWrites @ 0x1403C85B0 (MiEnablePartitionMappedWrites.c)
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 *     NtGetMUIRegistryInfo @ 0x1404AAE1C (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     PopInitSystemSleeperThread @ 0x1404F7478 (PopInitSystemSleeperThread.c)
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 *     CmpInitializeLazyWriters @ 0x1405308E4 (CmpInitializeLazyWriters.c)
 *     IoCreateSystemThread @ 0x14053FAE8 (IoCreateSystemThread.c)
 *     CmpInitializeSystemHivesLoad @ 0x14054307C (CmpInitializeSystemHivesLoad.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140545E4C (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1405464C4 (PopFxCreateEmergencyWorkerThread.c)
 *     PfTStart @ 0x14054CD4C (PfTStart.c)
 *     MmStoreRegister @ 0x14054E108 (MmStoreRegister.c)
 *     IopStartApcHardError @ 0x1405F9350 (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x14062473C (MiInitializePartitionThreads.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 *     VerifierPsCreateSystemThread @ 0x1406C0BEC (VerifierPsCreateSystemThread.c)
 *     VfPendingInitPhase1 @ 0x1406C0EBC (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1406C49B4 (VfPoolInitPhase1.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     CcInitializeCacheManager @ 0x140758600 (CcInitializeCacheManager.c)
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 *     MiSectionInitialization @ 0x14075A850 (MiSectionInitialization.c)
 *     SeRmInitPhase1 @ 0x140762928 (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x14076C294 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x140770774 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1404D211C (PsCreateSystemThreadEx.c)
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
