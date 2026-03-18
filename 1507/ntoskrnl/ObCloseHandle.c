/*
 * XREFs of ObCloseHandle @ 0x1404A4D60
 * Callers:
 *     ExpDeleteWorkerFactory @ 0x14006BD68 (ExpDeleteWorkerFactory.c)
 *     ExpWorkerFactoryCreateThread @ 0x14006CAF0 (ExpWorkerFactoryCreateThread.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     MiZeroInParallel @ 0x140075AD4 (MiZeroInParallel.c)
 *     SmKmStoreHelperStart @ 0x1400D940C (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z @ 0x1400D9494 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z.c)
 *     IopInitializeOfflineCrashDump @ 0x140163F28 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x14016C0B4 (IopReadDumpRegistry.c)
 *     IopIsBitlockerOn @ 0x140170058 (IopIsBitlockerOn.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 *     ExShutdownSystem @ 0x1404040B8 (ExShutdownSystem.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14040E4B0 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PiCMOpenClassKey @ 0x1404428B0 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1404451DC (PiCMOpenDeviceKey.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x140450BA4 (PspDeleteCreateProcessContext.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404A6950 (IopOpenLinkOrRenameTarget.c)
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     CmCreateKey @ 0x1404F4850 (CmCreateKey.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 *     PspUpdateCreateInfo @ 0x14050AE10 (PspUpdateCreateInfo.c)
 *     ExGetNextProcess @ 0x14050D53C (ExGetNextProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     NtQueryFullAttributesFile @ 0x140524CA0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140526CC0 (NtQueryAttributesFile.c)
 *     DbgkMapViewOfSection @ 0x140531A48 (DbgkMapViewOfSection.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     PiCMOpenObjectKey @ 0x14054BB34 (PiCMOpenObjectKey.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     MiCreateSectionForDriver @ 0x140575F0C (MiCreateSectionForDriver.c)
 *     PsBootPhaseComplete @ 0x1405A4884 (PsBootPhaseComplete.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     PspLocateSystemDll @ 0x1405B57F8 (PspLocateSystemDll.c)
 *     PfTStart @ 0x1405B6200 (PfTStart.c)
 *     SmRegistrationInfoFill @ 0x1405BD184 (SmRegistrationInfoFill.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 *     IoCreateController @ 0x1405C6C28 (IoCreateController.c)
 *     DbgkSendSystemDllMessages @ 0x1406667F0 (DbgkSendSystemDllMessages.c)
 *     DbgkpFreeDebugEvent @ 0x140666E48 (DbgkpFreeDebugEvent.c)
 *     DbgkpOpenHandles @ 0x140667048 (DbgkpOpenHandles.c)
 *     DbgkpPostFakeThreadMessages @ 0x140667284 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x140667690 (DbgkpPostModuleMessages.c)
 *     DbgkpDeleteErrorPort @ 0x1406691C4 (DbgkpDeleteErrorPort.c)
 *     IopSafebootDriverLoad @ 0x14067249C (IopSafebootDriverLoad.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140673E58 (IoConvertFileHandleToKernelHandle.c)
 *     IopFastQueryNetworkAttributes @ 0x1406748BC (IopFastQueryNetworkAttributes.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406932CC (PiCMOpenDeviceInterfaceKey.c)
 *     MmZeroPageFileAtShutdown @ 0x1406A0668 (MmZeroPageFileAtShutdown.c)
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 *     IopStoreSystemPartitionInformation @ 0x1407B634C (IopStoreSystemPartitionInformation.c)
 *     IopMarkBootPartition @ 0x1407B65F4 (IopMarkBootPartition.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 *     MiSectionInitialization @ 0x1407C41D0 (MiSectionInitialization.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     MiStartZeroPageWorkers @ 0x1407C97DC (MiStartZeroPageWorkers.c)
 *     MiCreateMemoryEvent @ 0x1407CAF9C (MiCreateMemoryEvent.c)
 *     CmpCreateRegistryRoot @ 0x1407D7838 (CmpCreateRegistryRoot.c)
 *     IopReassignSystemRoot @ 0x1407E4D04 (IopReassignSystemRoot.c)
 *     IopCreateRootDirectories @ 0x1407E7698 (IopCreateRootDirectories.c)
 * Callees:
 *     VfCheckUserHandle @ 0x1407473CC (VfCheckUserHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ObCloseHandle(HANDLE Handle, KPROCESSOR_MODE PreviousMode)
{
  __int64 v4; // rdx

  if ( (MmVerifierData & 0x100) != 0
    && !PreviousMode
    && (((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
     || (unsigned __int64)Handle >= 0xFFFFFFFFFFFFFFFEuLL) )
  {
    VfCheckUserHandle((int)Handle);
  }
  LOBYTE(v4) = PreviousMode;
  return ObpCloseHandle(Handle, v4);
}
