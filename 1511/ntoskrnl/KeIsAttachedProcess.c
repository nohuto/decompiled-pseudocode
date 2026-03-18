/*
 * XREFs of KeIsAttachedProcess @ 0x1400701C0
 * Callers:
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 *     MiComputeFaultNode @ 0x1400707F0 (MiComputeFaultNode.c)
 *     PoGetRequester @ 0x140097AA8 (PoGetRequester.c)
 *     EtwActivityIdControl @ 0x1400E48B0 (EtwActivityIdControl.c)
 *     MiAllowGuardFault @ 0x1400E5F90 (MiAllowGuardFault.c)
 *     PsGetCurrentThreadTeb @ 0x1400EB578 (PsGetCurrentThreadTeb.c)
 *     RtlGetThreadLangIdByIndex @ 0x1400F0028 (RtlGetThreadLangIdByIndex.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400FF608 (PnpIsSafeToExamineUserModeTeb.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     KiOpComputeLinearAddress @ 0x1401CB62C (KiOpComputeLinearAddress.c)
 *     MiCommitRequestFailed @ 0x1401DBED8 (MiCommitRequestFailed.c)
 *     SepGetLearningModeObjectInformation @ 0x140201350 (SepGetLearningModeObjectInformation.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14020D474 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpStackTraceDispatcher @ 0x140210E18 (EtwpStackTraceDispatcher.c)
 *     ExHandleLogBadReference @ 0x140213858 (ExHandleLogBadReference.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1403E5E08 (ExpWnfGetCurrentScopeInstance.c)
 *     RtlGuardIsValidStackPointer @ 0x1403EFDC8 (RtlGuardIsValidStackPointer.c)
 *     ObpCloseHandle @ 0x1403F6F6C (ObpCloseHandle.c)
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     IopRetrieveTransactionParameters @ 0x140491000 (IopRetrieveTransactionParameters.c)
 *     DbgkMapViewOfSection @ 0x140493500 (DbgkMapViewOfSection.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1404A5AC8 (RtlGuardIsValidWow64StackPointer.c)
 *     MiCheckForUserStackOverflow @ 0x1404A7F9C (MiCheckForUserStackOverflow.c)
 *     DbgkUnMapViewOfSection @ 0x1404AC188 (DbgkUnMapViewOfSection.c)
 *     PoTraceSystemTimerResolution @ 0x1404B5070 (PoTraceSystemTimerResolution.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     DbgkSendSystemDllMessages @ 0x1405EE270 (DbgkSendSystemDllMessages.c)
 *     ExpRaiseHardError @ 0x1406735D8 (ExpRaiseHardError.c)
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}
