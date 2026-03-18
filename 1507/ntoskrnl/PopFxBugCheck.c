/*
 * XREFs of PopFxBugCheck @ 0x1402373B8
 * Callers:
 *     PopFxActivateDevice @ 0x140026F98 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x1400271E8 (PoFxPrepareDevice.c)
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     PoFxActivateComponent @ 0x140027650 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400277F0 (PopFxAddRefDevice.c)
 *     PopPluginDevicePower @ 0x140027AFC (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x140027B7C (PopPluginComponentActive.c)
 *     PopPepCompleteActivity @ 0x1400283EC (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x14002844C (PopPepTriggerActivity.c)
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 *     PopFxPluginWork @ 0x140029DC8 (PopFxPluginWork.c)
 *     PopFxCompleteDevicePowerRequired @ 0x14013027C (PopFxCompleteDevicePowerRequired.c)
 *     PoFxCompleteIdleCondition @ 0x140130710 (PoFxCompleteIdleCondition.c)
 *     PoFxReportDevicePoweredOn @ 0x140136498 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1401386E8 (PopPepUpdateIdleStateRefCount.c)
 *     PopPluginComponentIdleState @ 0x14013939C (PopPluginComponentIdleState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140139F50 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14013A274 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x140236FD4 (PoFxIssueComponentPerfStateChangeMultiple.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140238164 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxTransitionCriticalResource @ 0x14023991C (PopFxTransitionCriticalResource.c)
 *     PopFxWorkOrderWatchdog @ 0x140239D5C (PopFxWorkOrderWatchdog.c)
 *     PopPluginAbandonDevice @ 0x140239D74 (PopPluginAbandonDevice.c)
 *     PopPluginNotifyActive @ 0x140239DB4 (PopPluginNotifyActive.c)
 *     PopPluginQueryComponentPerfSet @ 0x140239E94 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x140239F30 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x140239FA0 (PopPluginQueryComponentPerfStates.c)
 *     PopPluginQueryCurrentComponentPerfState @ 0x140239FEC (PopPluginQueryCurrentComponentPerfState.c)
 *     PopPluginRegisterDevice @ 0x14023A0DC (PopPluginRegisterDevice.c)
 *     PopPluginRequestComponentPerfState @ 0x14023A16C (PopPluginRequestComponentPerfState.c)
 *     PopPluginUnregisterDevice @ 0x14023A304 (PopPluginUnregisterDevice.c)
 *     PopTranslateDependencyArray @ 0x14023A614 (PopTranslateDependencyArray.c)
 *     PopPepInitializeDebuggerMasks @ 0x14023B93C (PopPepInitializeDebuggerMasks.c)
 *     PopPepInitializeVetoMasks @ 0x14023BA2C (PopPepInitializeVetoMasks.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x140240798 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140242D14 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140242DA8 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopPluginAcpiNotificationStrict @ 0x140243428 (PopPluginAcpiNotificationStrict.c)
 *     PopFxRegisterDevice @ 0x1405AC800 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 *     PoFxRegisterComponentPerfStates @ 0x1406B363C (PoFxRegisterComponentPerfStates.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406B3808 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406B3D58 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x1406B41D8 (PopFxPepPerfInfoQuery.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1406B4818 (PopFxResetSocSubsystemAccounting.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1406B4C20 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1406B4D44 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemCount @ 0x1406B4E10 (PopPluginQuerySocSubsystemCount.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406B4E78 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDripsWatchdogTakeAction @ 0x1406BD01C (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
