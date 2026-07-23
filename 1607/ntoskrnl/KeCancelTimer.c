/*
 * XREFs of KeCancelTimer @ 0x1400C1310
 * Callers:
 *     PfSnCancelTraceTimer @ 0x140006AE4 (PfSnCancelTraceTimer.c)
 *     EtwpResetFlushTimer @ 0x140086F10 (EtwpResetFlushTimer.c)
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PopFxPluginWork @ 0x1400C11C0 (PopFxPluginWork.c)
 *     ExpDeleteTimer @ 0x1400C1298 (ExpDeleteTimer.c)
 *     ExpCancelTimer @ 0x1400EC064 (ExpCancelTimer.c)
 *     CmpArmLazyWriter @ 0x1400EDFB0 (CmpArmLazyWriter.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401271AC (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x14012BD3C (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140149238 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1401C4934 (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D87C0 (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x1401DECE4 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetActiveState @ 0x140205380 (PopCoalescingSetActiveState.c)
 *     PopSetWatchdog @ 0x14020B2F8 (PopSetWatchdog.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1404CCFEC (PfSnPowerBoost.c)
 *     PiDrvDbLoadNode @ 0x1404DD294 (PiDrvDbLoadNode.c)
 *     CmSetLazyFlushState @ 0x14052F358 (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x1405319C8 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x14054E428 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x140575CA8 (PpmWmiDispatch.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x140602E94 (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14061C270 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x14066E158 (PopCoalescingNotify.c)
 *     PopThermalZoneRemove @ 0x140670634 (PopThermalZoneRemove.c)
 *     TtmpResetEvaluationTimer @ 0x1406781A0 (TtmpResetEvaluationTimer.c)
 *     ViPendingDelayCompletion @ 0x14070D3E0 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140716CF8 (VfWdCheckForSettingsChange.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140725854 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x14072586C (AnFwpDisableProgressTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x140726E84 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140728B84 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x140057BD0 (KiCancelTimer.c)
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
