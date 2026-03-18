/*
 * XREFs of KeIsAttachedProcess @ 0x1400E7E80
 * Callers:
 *     PnpIsSafeToExamineUserModeTeb @ 0x140007E58 (PnpIsSafeToExamineUserModeTeb.c)
 *     MiResolveDemandZeroFault @ 0x14003AA90 (MiResolveDemandZeroFault.c)
 *     RtlpWalkFrameChain @ 0x14004F520 (RtlpWalkFrameChain.c)
 *     IopCheckInitiatorHint @ 0x14009CF4C (IopCheckInitiatorHint.c)
 *     EtwActivityIdControl @ 0x1400A0BF4 (EtwActivityIdControl.c)
 *     MiAllowGuardFault @ 0x1400A53D8 (MiAllowGuardFault.c)
 *     PsGetCurrentThreadTeb @ 0x1400AB8EC (PsGetCurrentThreadTeb.c)
 *     RtlGetThreadLangIdByIndex @ 0x1400B14A0 (RtlGetThreadLangIdByIndex.c)
 *     MiComputeFaultNode @ 0x1400E6130 (MiComputeFaultNode.c)
 *     ExpWorkerThread @ 0x1400E7700 (ExpWorkerThread.c)
 *     PoGetRequester @ 0x1400FC1D4 (PoGetRequester.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     KiOpComputeLinearAddress @ 0x1401DB170 (KiOpComputeLinearAddress.c)
 *     MiCommitRequestFailed @ 0x1401ECDEC (MiCommitRequestFailed.c)
 *     SepGetLearningModeObjectInformation @ 0x14021AE84 (SepGetLearningModeObjectInformation.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224F60 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpStackTraceDispatcher @ 0x1402293E4 (EtwpStackTraceDispatcher.c)
 *     ExHandleLogBadReference @ 0x14022CA54 (ExHandleLogBadReference.c)
 *     PoTraceSystemTimerResolution @ 0x1403E9EB0 (PoTraceSystemTimerResolution.c)
 *     MiProtectVirtualMemory @ 0x140433470 (MiProtectVirtualMemory.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140464A60 (ExpWnfGetCurrentScopeInstance.c)
 *     IopRetrieveTransactionParameters @ 0x1404B9FD0 (IopRetrieveTransactionParameters.c)
 *     DbgkMapViewOfSection @ 0x1404CAD90 (DbgkMapViewOfSection.c)
 *     MiCheckForUserStackOverflow @ 0x1404CAE24 (MiCheckForUserStackOverflow.c)
 *     DbgkUnMapViewOfSection @ 0x1404D138C (DbgkUnMapViewOfSection.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 *     ObpCloseHandle @ 0x14050C774 (ObpCloseHandle.c)
 *     RtlGuardIsValidStackPointer @ 0x14051760C (RtlGuardIsValidStackPointer.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x14051B93C (RtlGuardIsValidWow64StackPointer.c)
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     DbgkSendSystemDllMessages @ 0x140617E98 (DbgkSendSystemDllMessages.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14065571C (NtAlpcImpersonateClientContainerOfPort.c)
 *     ExpRaiseHardError @ 0x1406B634C (ExpRaiseHardError.c)
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}
