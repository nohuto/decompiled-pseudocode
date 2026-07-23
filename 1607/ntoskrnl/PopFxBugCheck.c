/*
 * XREFs of PopFxBugCheck @ 0x140202120
 * Callers:
 *     PopFxActivateDevice @ 0x140007BFC (PopFxActivateDevice.c)
 *     PoFxCompleteIdleCondition @ 0x1400AB20C (PoFxCompleteIdleCondition.c)
 *     PoFxPrepareDevice @ 0x1400AD28C (PoFxPrepareDevice.c)
 *     PoFxActivateComponent @ 0x1400BEF70 (PoFxActivateComponent.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400BF094 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PopFxAddRefDevice @ 0x1400BF584 (PopFxAddRefDevice.c)
 *     PopFxIdleComponent @ 0x1400BF9A0 (PopFxIdleComponent.c)
 *     PopPluginDevicePower @ 0x1400BFF6C (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x1400BFFEC (PopPluginComponentActive.c)
 *     PopPepCompleteActivity @ 0x1400C0828 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x1400C0888 (PopPepTriggerActivity.c)
 *     PopFxPluginWork @ 0x1400C11C0 (PopFxPluginWork.c)
 *     PoFxReportDevicePoweredOn @ 0x140124C40 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140130DD8 (PopPepUpdateIdleStateRefCount.c)
 *     PopPluginComponentIdleState @ 0x140131500 (PopPluginComponentIdleState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140131F58 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140132424 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x140201F98 (PoFxIssueComponentPerfStateChangeMultiple.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140202BE8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxTransitionCriticalResource @ 0x140203F64 (PopFxTransitionCriticalResource.c)
 *     PopFxWorkOrderWatchdog @ 0x140204344 (PopFxWorkOrderWatchdog.c)
 *     PopPluginAbandonDevice @ 0x14020435C (PopPluginAbandonDevice.c)
 *     PopPluginNotifyActive @ 0x14020439C (PopPluginNotifyActive.c)
 *     PopPluginQueryComponentPerfSet @ 0x14020447C (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x140204518 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x140204588 (PopPluginQueryComponentPerfStates.c)
 *     PopPluginQueryCurrentComponentPerfState @ 0x1402045D4 (PopPluginQueryCurrentComponentPerfState.c)
 *     PopPluginRegisterDevice @ 0x1402046C4 (PopPluginRegisterDevice.c)
 *     PopPluginRequestComponentPerfState @ 0x140204754 (PopPluginRequestComponentPerfState.c)
 *     PopPluginUnregisterDevice @ 0x1402048EC (PopPluginUnregisterDevice.c)
 *     PopTranslateDependencyArray @ 0x140204BFC (PopTranslateDependencyArray.c)
 *     PopPepInitializeDebuggerMasks @ 0x1402062E4 (PopPepInitializeDebuggerMasks.c)
 *     PopPepInitializeVetoMasks @ 0x1402063D4 (PopPepInitializeVetoMasks.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x14020B7A0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14020E2B4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14020E33C (PopFxAcpiForwardPepWorkRequest.c)
 *     PopPluginAcpiNotificationStrict @ 0x14020E984 (PopPluginAcpiNotificationStrict.c)
 *     PopFxRegisterDevice @ 0x14056711C (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140567268 (PopFxRegisterDeviceWorker.c)
 *     PoFxRegisterComponentPerfStates @ 0x14066C4D0 (PoFxRegisterComponentPerfStates.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C680 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14066CB58 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x14066CFD8 (PopFxPepPerfInfoQuery.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14066D618 (PopFxResetSocSubsystemAccounting.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14066DA20 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x14066DB44 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemCount @ 0x14066DC10 (PopPluginQuerySocSubsystemCount.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14066DC78 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDripsWatchdogTakeAction @ 0x1406752EC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
