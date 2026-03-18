/*
 * XREFs of PopFxBugCheck @ 0x1401E991C
 * Callers:
 *     PopFxActivateDevice @ 0x14001AA18 (PopFxActivateDevice.c)
 *     PopFxPluginWork @ 0x1400DAA70 (PopFxPluginWork.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400DADB4 (PopFxCompleteDevicePowerRequired.c)
 *     PoFxActivateComponent @ 0x1400DADFC (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400DAFA4 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400DB240 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x1400DB738 (PopPluginComponentActive.c)
 *     PopPluginDevicePower @ 0x1400DB7D4 (PopPluginDevicePower.c)
 *     PopPepCompleteActivity @ 0x1400DBFD8 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x1400DC038 (PopPepTriggerActivity.c)
 *     PopFxIdleComponent @ 0x1400DC4DC (PopFxIdleComponent.c)
 *     PoFxCompleteIdleCondition @ 0x1400F32D4 (PoFxCompleteIdleCondition.c)
 *     PoFxPrepareDevice @ 0x14010786C (PoFxPrepareDevice.c)
 *     PoFxReportDevicePoweredOn @ 0x140120B48 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14012605C (PopPepUpdateIdleStateRefCount.c)
 *     PopPluginComponentIdleState @ 0x1401264E8 (PopPluginComponentIdleState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x14012F6E8 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14012FB48 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x1401E95B8 (PoFxIssueComponentPerfStateChangeMultiple.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1401EA3E4 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxTransitionCriticalResource @ 0x1401EB774 (PopFxTransitionCriticalResource.c)
 *     PopFxWorkOrderWatchdog @ 0x1401EBB54 (PopFxWorkOrderWatchdog.c)
 *     PopPluginAbandonDevice @ 0x1401EBB6C (PopPluginAbandonDevice.c)
 *     PopPluginNotifyActive @ 0x1401EBBAC (PopPluginNotifyActive.c)
 *     PopPluginQueryComponentPerfSet @ 0x1401EBC8C (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x1401EBD28 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x1401EBD98 (PopPluginQueryComponentPerfStates.c)
 *     PopPluginQueryCurrentComponentPerfState @ 0x1401EBDE4 (PopPluginQueryCurrentComponentPerfState.c)
 *     PopPluginRegisterDevice @ 0x1401EBED4 (PopPluginRegisterDevice.c)
 *     PopPluginRequestComponentPerfState @ 0x1401EBF64 (PopPluginRequestComponentPerfState.c)
 *     PopPluginUnregisterDevice @ 0x1401EC0FC (PopPluginUnregisterDevice.c)
 *     PopTranslateDependencyArray @ 0x1401EC40C (PopTranslateDependencyArray.c)
 *     PopPepInitializeDebuggerMasks @ 0x1401ED938 (PopPepInitializeDebuggerMasks.c)
 *     PopPepInitializeVetoMasks @ 0x1401EDA28 (PopPepInitializeVetoMasks.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1401F38D4 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1401F49C4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1401F4A4C (PopFxAcpiForwardPepWorkRequest.c)
 *     PopPluginAcpiNotificationStrict @ 0x1401F5098 (PopPluginAcpiNotificationStrict.c)
 *     PopFxRegisterDevice @ 0x14051B960 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14051BB30 (PopFxRegisterDeviceWorker.c)
 *     PoFxRegisterComponentPerfStates @ 0x140633FB8 (PoFxRegisterComponentPerfStates.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140634184 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140634664 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x140634AE4 (PopFxPepPerfInfoQuery.c)
 *     PopFxResetSocSubsystemAccounting @ 0x140635124 (PopFxResetSocSubsystemAccounting.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14063552C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x140635650 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemCount @ 0x14063571C (PopPluginQuerySocSubsystemCount.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x140635784 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDripsWatchdogTakeAction @ 0x14063CAA4 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
