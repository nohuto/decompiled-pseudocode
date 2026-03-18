/*
 * XREFs of ExWaitForRundownProtectionRelease @ 0x140074D34
 * Callers:
 *     PfSnDeactivateTrace @ 0x140006874 (PfSnDeactivateTrace.c)
 *     CmpTryToRundownHive @ 0x1400876A8 (CmpTryToRundownHive.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B4C7C (HvSynchronizeAndDropTemporaryBins.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400B71B8 (IoStopDiskIoAttributionForContext.c)
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     NtShutdownWorkerFactory @ 0x1400F9F94 (NtShutdownWorkerFactory.c)
 *     MiModifiedPageWriter @ 0x140142508 (MiModifiedPageWriter.c)
 *     BgkpDisableConsole @ 0x14014C880 (BgkpDisableConsole.c)
 *     PfFbBufferListShutdown @ 0x1401FEFC4 (PfFbBufferListShutdown.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402114B0 (DbgpRemoveDebugPrintCallback.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     SmKmStoreAdd @ 0x1403E3E78 (SmKmStoreAdd.c)
 *     SmKmStoreDelete @ 0x1403E4174 (SmKmStoreDelete.c)
 *     PfSnPrefetchScenario @ 0x1403E5094 (PfSnPrefetchScenario.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     PspIoRateEntryInitialize @ 0x1404A23C4 (PspIoRateEntryInitialize.c)
 *     ExpWnfDeleteSubscription @ 0x1404C1E2C (ExpWnfDeleteSubscription.c)
 *     ExpWnfFreeScopeInstance @ 0x1404C21A0 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfDeleteNameInstance @ 0x1404C263C (ExpWnfDeleteNameInstance.c)
 *     ObDestroyHandleRevocationBlock @ 0x1404E5328 (ObDestroyHandleRevocationBlock.c)
 *     PfSnPowerBoost @ 0x1404EAFC8 (PfSnPowerBoost.c)
 *     PspIoRateEntryDeactivate @ 0x1404F1A38 (PspIoRateEntryDeactivate.c)
 *     IoDiskIoAttributionAllocate @ 0x1404F2330 (IoDiskIoAttributionAllocate.c)
 *     PfSnPrefetchSections @ 0x140506F14 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140507260 (PfSnPrefetchSectionsCleanup.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     ExRegisterHost @ 0x140553420 (ExRegisterHost.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575954 (PspSetCreateProcessNotifyRoutine.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     DbgkLkmdUnregisterCallback @ 0x14061B1F0 (DbgkLkmdUnregisterCallback.c)
 *     ObUnRegisterCallbacks @ 0x140666DCC (ObUnRegisterCallbacks.c)
 *     PfpRpShutdown @ 0x1406699A8 (PfpRpShutdown.c)
 *     PoUnregisterCoalescingCallback @ 0x14066DF0C (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681BCC (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140681CC4 (PsRemoveLoadImageNotifyRoutine.c)
 *     SmcCacheInitialize @ 0x140699F1C (SmcCacheInitialize.c)
 *     SmcCacheRemove @ 0x14069A174 (SmcCacheRemove.c)
 *     SmcStoreDelete @ 0x14069A7CC (SmcStoreDelete.c)
 *     ExWaitForCallBacks @ 0x1406AFC00 (ExWaitForCallBacks.c)
 *     ExUnregisterExtension @ 0x1406B68D0 (ExUnregisterExtension.c)
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
