/*
 * XREFs of KeCancelTimer @ 0x140066860
 * Callers:
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 *     PopFxPluginWork @ 0x140029DC8 (PopFxPluginWork.c)
 *     CmpArmLazyWriter @ 0x140062190 (CmpArmLazyWriter.c)
 *     ExpDeleteTimer @ 0x140065C20 (ExpDeleteTimer.c)
 *     ExpCancelTimer @ 0x140066750 (ExpCancelTimer.c)
 *     PfSnCancelTraceTimer @ 0x1400D7844 (PfSnCancelTraceTimer.c)
 *     PopDequeueQuerySetIrp @ 0x14013682C (PopDequeueQuerySetIrp.c)
 *     PopIgnoreBatteryStatusChange @ 0x140147FB0 (PopIgnoreBatteryStatusChange.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14016C8E8 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1401F2028 (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140207B64 (KiInvokeInterruptServiceRoutine.c)
 *     SmWdStopMonitoring @ 0x140258870 (SmWdStopMonitoring.c)
 *     PopBuildDeviceNotifyList @ 0x1403EC3B4 (PopBuildDeviceNotifyList.c)
 *     PfSnPowerBoost @ 0x140458E08 (PfSnPowerBoost.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     PiDrvDbLoadNode @ 0x1404DE2D8 (PiDrvDbLoadNode.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     EtwpDisableKernelTrace @ 0x14054AC78 (EtwpDisableKernelTrace.c)
 *     CmSetLazyFlushState @ 0x140564EB0 (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x140566C24 (PopUserShutdownCancelled.c)
 *     KiStartDpcThread @ 0x14059A1D4 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1405B7578 (PpmWmiDispatch.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x14065A074 (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14066AC5C (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingActivate @ 0x1406B5318 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x1406B540C (PopCoalescingNotify.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 *     ViPendingDelayCompletion @ 0x140742AC8 (ViPendingDelayCompletion.c)
 *     VerifierKeCancelTimer @ 0x1407480D4 (VerifierKeCancelTimer.c)
 *     VfWdCheckForSettingsChange @ 0x14074AE14 (VfWdCheckForSettingsChange.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14075C87C (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x14075C894 (AnFwpDisableProgressTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x14075DF88 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14075FAE0 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x140066B50 (KiCancelTimer.c)
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
