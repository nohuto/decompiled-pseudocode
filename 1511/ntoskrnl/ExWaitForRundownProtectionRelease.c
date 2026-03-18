/*
 * XREFs of ExWaitForRundownProtectionRelease @ 0x14002D988
 * Callers:
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48 (HvSynchronizeAndDropTemporaryBins.c)
 *     PfSnDeactivateTrace @ 0x1400FA91C (PfSnDeactivateTrace.c)
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 *     BgkpDisableConsole @ 0x1401429A4 (BgkpDisableConsole.c)
 *     PfFbBufferListShutdown @ 0x1401E6624 (PfFbBufferListShutdown.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1401F790C (DbgpRemoveDebugPrintCallback.c)
 *     ?SmEmptyQueueToStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14020272C (-SmEmptyQueueToStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     ExpWnfDeleteSubscription @ 0x1403E2034 (ExpWnfDeleteSubscription.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     ObDestroyHandleRevocationBlock @ 0x14049B8E4 (ObDestroyHandleRevocationBlock.c)
 *     ExpWnfFreeScopeInstance @ 0x1404B203C (ExpWnfFreeScopeInstance.c)
 *     ExpWnfDeleteNameInstance @ 0x1404B2110 (ExpWnfDeleteNameInstance.c)
 *     PfSnPowerBoost @ 0x1404C178C (PfSnPowerBoost.c)
 *     SmKmStoreDelete @ 0x1404D1364 (SmKmStoreDelete.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404DF5E4 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchSections @ 0x1404DF6C8 (PfSnPrefetchSections.c)
 *     PfSnPrefetchScenario @ 0x1404DFA78 (PfSnPrefetchScenario.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     ExRegisterHost @ 0x140527A90 (ExRegisterHost.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405306E4 (PspSetCreateProcessNotifyRoutine.c)
 *     SmKmInitialize @ 0x140541808 (SmKmInitialize.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     DbgkLkmdUnregisterCallback @ 0x1405F0F98 (DbgkLkmdUnregisterCallback.c)
 *     ObUnRegisterCallbacks @ 0x14062ED84 (ObUnRegisterCallbacks.c)
 *     PfpRpShutdown @ 0x140631828 (PfpRpShutdown.c)
 *     PoUnregisterCoalescingCallback @ 0x140635A78 (PoUnregisterCoalescingCallback.c)
 *     PsUnregisterMonitorServerSilo @ 0x14063FD40 (PsUnregisterMonitorServerSilo.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406433EC (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406434E4 (PsRemoveLoadImageNotifyRoutine.c)
 *     SmcCacheInitialize @ 0x140658B28 (SmcCacheInitialize.c)
 *     SmcCacheRemove @ 0x140658D90 (SmcCacheRemove.c)
 *     SmcStoreDelete @ 0x1406594B0 (SmcStoreDelete.c)
 *     ExWaitForCallBacks @ 0x14066C12C (ExWaitForCallBacks.c)
 *     ExUnregisterExtension @ 0x140673B50 (ExUnregisterExtension.c)
 *     VerifierExWaitForRundownProtectionRelease @ 0x1406C0448 (VerifierExWaitForRundownProtectionRelease.c)
 *     PfInitializeSuperfetch @ 0x14076A3E8 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x14076A894 (PfpRpInitialize.c)
 *     SmGlobalsInitialize @ 0x14076AA64 (SmGlobalsInitialize.c)
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
