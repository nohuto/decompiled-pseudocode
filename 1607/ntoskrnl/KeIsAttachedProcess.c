/*
 * XREFs of KeIsAttachedProcess @ 0x1400E5D20
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     RtlpWalkFrameChain @ 0x14004F0A0 (RtlpWalkFrameChain.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140086AA0 (PnpIsSafeToExamineUserModeTeb.c)
 *     IopCheckInitiatorHint @ 0x14009C74C (IopCheckInitiatorHint.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     MiAllowGuardFault @ 0x1400A3950 (MiAllowGuardFault.c)
 *     PsGetCurrentThreadTeb @ 0x1400A9E54 (PsGetCurrentThreadTeb.c)
 *     RtlGetThreadLangIdByIndex @ 0x1400AF3E0 (RtlGetThreadLangIdByIndex.c)
 *     MiComputeFaultNode @ 0x1400E3FD0 (MiComputeFaultNode.c)
 *     ExpWorkerThread @ 0x1400E55A0 (ExpWorkerThread.c)
 *     PoGetRequester @ 0x1400F9F54 (PoGetRequester.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     KiOpComputeLinearAddress @ 0x1401DAF9C (KiOpComputeLinearAddress.c)
 *     MiCommitRequestFailed @ 0x1401ECC18 (MiCommitRequestFailed.c)
 *     SepGetLearningModeObjectInformation @ 0x14021ACB0 (SepGetLearningModeObjectInformation.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224D8C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpStackTraceDispatcher @ 0x140229210 (EtwpStackTraceDispatcher.c)
 *     ExHandleLogBadReference @ 0x14022C880 (ExHandleLogBadReference.c)
 *     PoTraceSystemTimerResolution @ 0x1403EB4E0 (PoTraceSystemTimerResolution.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140463930 (ExpWnfGetCurrentScopeInstance.c)
 *     IopRetrieveTransactionParameters @ 0x1404A5D00 (IopRetrieveTransactionParameters.c)
 *     DbgkMapViewOfSection @ 0x1404B07BC (DbgkMapViewOfSection.c)
 *     MiCheckForUserStackOverflow @ 0x1404B0850 (MiCheckForUserStackOverflow.c)
 *     DbgkUnMapViewOfSection @ 0x1404B4E2C (DbgkUnMapViewOfSection.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     ObpCloseHandle @ 0x1404EF704 (ObpCloseHandle.c)
 *     RtlGuardIsValidStackPointer @ 0x1404FA9FC (RtlGuardIsValidStackPointer.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1404FED2C (RtlGuardIsValidWow64StackPointer.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405493B0 (ExpSetCurrentUserUILanguage.c)
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140655800 (NtAlpcImpersonateClientContainerOfPort.c)
 *     ExpRaiseHardError @ 0x1406B6484 (ExpRaiseHardError.c)
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}
