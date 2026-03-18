/*
 * XREFs of KeCancelTimer @ 0x1400C3480
 * Callers:
 *     PfSnCancelTraceTimer @ 0x140006974 (PfSnCancelTraceTimer.c)
 *     EtwpResetFlushTimer @ 0x140085624 (EtwpResetFlushTimer.c)
 *     PopFxProcessWork @ 0x1400C124C (PopFxProcessWork.c)
 *     PopFxPluginWork @ 0x1400C3330 (PopFxPluginWork.c)
 *     ExpDeleteTimer @ 0x1400C3408 (ExpDeleteTimer.c)
 *     ExpCancelTimer @ 0x1400EE1E4 (ExpCancelTimer.c)
 *     CmpArmLazyWriter @ 0x1400F0130 (CmpArmLazyWriter.c)
 *     PopIgnoreBatteryStatusChange @ 0x140126C3C (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x14012B7CC (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140148CC8 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1401C4A50 (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D8994 (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x1401DEEB8 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetActiveState @ 0x140205554 (PopCoalescingSetActiveState.c)
 *     PopSetWatchdog @ 0x14020B4CC (PopSetWatchdog.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     PfSnPowerBoost @ 0x1404EAFC8 (PfSnPowerBoost.c)
 *     PiDrvDbLoadNode @ 0x1404FA308 (PiDrvDbLoadNode.c)
 *     CmSetLazyFlushState @ 0x14052EE18 (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x140531488 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x14054E088 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055EB0C (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x140575768 (PpmWmiDispatch.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x140602DE0 (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14061C1BC (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x14066E074 (PopCoalescingNotify.c)
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 *     TtmpResetEvaluationTimer @ 0x1406780BC (TtmpResetEvaluationTimer.c)
 *     ViPendingDelayCompletion @ 0x14070D3B0 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140716CF8 (VfWdCheckForSettingsChange.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140725854 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x14072586C (AnFwpDisableProgressTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x140726E84 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140728B84 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x140058050 (KiCancelTimer.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  result = KiCancelTimer((__int64)a1, 1);
  __writecr8(CurrentIrql);
  return result;
}
