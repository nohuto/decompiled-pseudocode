/*
 * XREFs of ExWaitForRundownProtectionRelease @ 0x140074DB4
 * Callers:
 *     PfSnDeactivateTrace @ 0x1400069E4 (PfSnDeactivateTrace.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4 (HvSynchronizeAndDropTemporaryBins.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400B4FE0 (IoStopDiskIoAttributionForContext.c)
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     NtShutdownWorkerFactory @ 0x1400F7D20 (NtShutdownWorkerFactory.c)
 *     CmpTryToRundownHive @ 0x14010B8A0 (CmpTryToRundownHive.c)
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 *     BgkpDisableConsole @ 0x14014CDF0 (BgkpDisableConsole.c)
 *     PfFbBufferListShutdown @ 0x1401FEDF0 (PfFbBufferListShutdown.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402112DC (DbgpRemoveDebugPrintCallback.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     SmKmStoreAdd @ 0x1403E54A4 (SmKmStoreAdd.c)
 *     SmKmStoreDelete @ 0x1403E57A0 (SmKmStoreDelete.c)
 *     PfSnPrefetchScenario @ 0x1403E66C0 (PfSnPrefetchScenario.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     ExpWnfDeleteSubscription @ 0x1404ADB5C (ExpWnfDeleteSubscription.c)
 *     ExpWnfFreeScopeInstance @ 0x1404ADED0 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfDeleteNameInstance @ 0x1404AE36C (ExpWnfDeleteNameInstance.c)
 *     ObDestroyHandleRevocationBlock @ 0x1404C7F44 (ObDestroyHandleRevocationBlock.c)
 *     PfSnPowerBoost @ 0x1404CCFEC (PfSnPowerBoost.c)
 *     PspIoRateEntryDeactivate @ 0x1404D3B2C (PspIoRateEntryDeactivate.c)
 *     IoDiskIoAttributionAllocate @ 0x1404D4AC4 (IoDiskIoAttributionAllocate.c)
 *     PfSnPrefetchSections @ 0x1404E9EA4 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404EA1F0 (PfSnPrefetchSectionsCleanup.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PspIoRateEntryInitialize @ 0x14051A7D0 (PspIoRateEntryInitialize.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     ExRegisterHost @ 0x140553960 (ExRegisterHost.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575E94 (PspSetCreateProcessNotifyRoutine.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     DbgkLkmdUnregisterCallback @ 0x14061B2A4 (DbgkLkmdUnregisterCallback.c)
 *     ObUnRegisterCallbacks @ 0x140666EB0 (ObUnRegisterCallbacks.c)
 *     PfpRpShutdown @ 0x140669A8C (PfpRpShutdown.c)
 *     PoUnregisterCoalescingCallback @ 0x14066DFF0 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681CB0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140681DA8 (PsRemoveLoadImageNotifyRoutine.c)
 *     SmcCacheInitialize @ 0x14069A000 (SmcCacheInitialize.c)
 *     SmcCacheRemove @ 0x14069A258 (SmcCacheRemove.c)
 *     SmcStoreDelete @ 0x14069A8B0 (SmcStoreDelete.c)
 *     ExWaitForCallBacks @ 0x1406AFD38 (ExWaitForCallBacks.c)
 *     ExUnregisterExtension @ 0x1406B6A08 (ExUnregisterExtension.c)
 *     PfInitializeSuperfetch @ 0x1407B3B44 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x1407B3FFC (PfpRpInitialize.c)
 *     SmGlobalsInitialize @ 0x1407B6398 (SmGlobalsInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExWaitForRundownProtectionRelease(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 v1; // rax

  v1 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
  if ( v1 >= 2 )
    ExfWaitForRundownProtectionRelease(RunRef, v1);
}
