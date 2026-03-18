/*
 * XREFs of PopFxBugCheck @ 0x1402022F4
 * Callers:
 *     PopFxActivateDevice @ 0x140008088 (PopFxActivateDevice.c)
 *     PoFxCompleteIdleCondition @ 0x1400ACCA4 (PoFxCompleteIdleCondition.c)
 *     PoFxPrepareDevice @ 0x1400AED24 (PoFxPrepareDevice.c)
 *     PoFxActivateComponent @ 0x1400C10E0 (PoFxActivateComponent.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400C1204 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxProcessWork @ 0x1400C124C (PopFxProcessWork.c)
 *     PopFxAddRefDevice @ 0x1400C16F4 (PopFxAddRefDevice.c)
 *     PopFxIdleComponent @ 0x1400C1B10 (PopFxIdleComponent.c)
 *     PopPluginDevicePower @ 0x1400C20DC (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x1400C215C (PopPluginComponentActive.c)
 *     PopPepCompleteActivity @ 0x1400C2998 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x1400C29F8 (PopPepTriggerActivity.c)
 *     PopFxPluginWork @ 0x1400C3330 (PopFxPluginWork.c)
 *     PoFxReportDevicePoweredOn @ 0x1401246D0 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140130868 (PopPepUpdateIdleStateRefCount.c)
 *     PopPluginComponentIdleState @ 0x140130F90 (PopPluginComponentIdleState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1401319E8 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140131EB4 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x14020216C (PoFxIssueComponentPerfStateChangeMultiple.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140202DBC (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxTransitionCriticalResource @ 0x140204138 (PopFxTransitionCriticalResource.c)
 *     PopFxWorkOrderWatchdog @ 0x140204518 (PopFxWorkOrderWatchdog.c)
 *     PopPluginAbandonDevice @ 0x140204530 (PopPluginAbandonDevice.c)
 *     PopPluginNotifyActive @ 0x140204570 (PopPluginNotifyActive.c)
 *     PopPluginQueryComponentPerfSet @ 0x140204650 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x1402046EC (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x14020475C (PopPluginQueryComponentPerfStates.c)
 *     PopPluginQueryCurrentComponentPerfState @ 0x1402047A8 (PopPluginQueryCurrentComponentPerfState.c)
 *     PopPluginRegisterDevice @ 0x140204898 (PopPluginRegisterDevice.c)
 *     PopPluginRequestComponentPerfState @ 0x140204928 (PopPluginRequestComponentPerfState.c)
 *     PopPluginUnregisterDevice @ 0x140204AC0 (PopPluginUnregisterDevice.c)
 *     PopTranslateDependencyArray @ 0x140204DD0 (PopTranslateDependencyArray.c)
 *     PopPepInitializeDebuggerMasks @ 0x1402064B8 (PopPepInitializeDebuggerMasks.c)
 *     PopPepInitializeVetoMasks @ 0x1402065A8 (PopPepInitializeVetoMasks.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x14020B974 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14020E488 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14020E510 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopPluginAcpiNotificationStrict @ 0x14020EB58 (PopPluginAcpiNotificationStrict.c)
 *     PopFxRegisterDevice @ 0x140566BDC (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140566D28 (PopFxRegisterDeviceWorker.c)
 *     PoFxRegisterComponentPerfStates @ 0x14066C3EC (PoFxRegisterComponentPerfStates.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C59C (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14066CA74 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x14066CEF4 (PopFxPepPerfInfoQuery.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14066D534 (PopFxResetSocSubsystemAccounting.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14066D93C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x14066DA60 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemCount @ 0x14066DB2C (PopPluginQuerySocSubsystemCount.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14066DB94 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDripsWatchdogTakeAction @ 0x140675208 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
