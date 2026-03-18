/*
 * XREFs of KeCancelTimer @ 0x140091500
 * Callers:
 *     CmpArmLazyWriter @ 0x140038EB0 (CmpArmLazyWriter.c)
 *     ExpDeleteTimer @ 0x140090C2C (ExpDeleteTimer.c)
 *     ExpCancelTimer @ 0x140091194 (ExpCancelTimer.c)
 *     EtwpResetFlushTimer @ 0x14009BA74 (EtwpResetFlushTimer.c)
 *     PopFxPluginWork @ 0x1400DAA70 (PopFxPluginWork.c)
 *     PopFxProcessWork @ 0x1400DB240 (PopFxProcessWork.c)
 *     PfSnCancelTraceTimer @ 0x1400FAA1C (PfSnCancelTraceTimer.c)
 *     PopIgnoreBatteryStatusChange @ 0x140119F3C (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140120E94 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14013F7D4 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1401B6F04 (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401CA1C8 (KiInvokeInterruptServiceRoutine.c)
 *     SmWdStopMonitoring @ 0x1402096E0 (SmWdStopMonitoring.c)
 *     PopBuildDeviceNotifyList @ 0x1403A32E0 (PopBuildDeviceNotifyList.c)
 *     PiDrvDbLoadNode @ 0x140444A94 (PiDrvDbLoadNode.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1404C178C (PfSnPowerBoost.c)
 *     CmSetLazyFlushState @ 0x1404F5D54 (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x1404F878C (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     CmThawRegistry @ 0x140519210 (CmThawRegistry.c)
 *     KiStartDpcThread @ 0x140521A80 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1405403EC (PpmWmiDispatch.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1405F1F64 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingActivate @ 0x140635B48 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x140635C3C (PopCoalescingNotify.c)
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
 *     ViPendingDelayCompletion @ 0x1406C1348 (ViPendingDelayCompletion.c)
 *     VerifierKeCancelTimer @ 0x1406C5EA0 (VerifierKeCancelTimer.c)
 *     VfWdCheckForSettingsChange @ 0x1406C8350 (VfWdCheckForSettingsChange.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1406D9834 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1406D984C (AnFwpDisableProgressTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x1406DAF40 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1406DCA98 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x1400916F0 (KiCancelTimer.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  unsigned __int8 CurrentIrql; // bl
  char v2; // dl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = 1;
  result = KiCancelTimer(a1, v2);
  __writecr8(CurrentIrql);
  return result;
}
