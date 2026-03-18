/*
 * XREFs of KeGetEffectiveIrql @ 0x1400516A4
 * Callers:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     EtwpRequestFlushTimer @ 0x140085ADC (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x1400ED3E0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400ED78C (EtwpPrepareDirtyBuffer.c)
 *     KiDispatchException @ 0x1400F3D60 (KiDispatchException.c)
 *     KdPowerTransition @ 0x1401D1768 (KdPowerTransition.c)
 *     KeResumeClockTimerSafe @ 0x1401D24B8 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401D24F0 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x1401D678C (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224F60 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x140225124 (EtwSendTraceBuffer.c)
 *     EtwpSendTraceEvent @ 0x140227E34 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x1402293E4 (EtwpStackTraceDispatcher.c)
 *     EtwpDisableCompression @ 0x14022A834 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x14022AD60 (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x140492AB0 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140493B50 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400516C0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
