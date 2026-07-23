/*
 * XREFs of KeGetEffectiveIrql @ 0x140051224
 * Callers:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpRequestFlushTimer @ 0x1400873CC (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x1400EB250 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400EB628 (EtwpPrepareDirtyBuffer.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     KdPowerTransition @ 0x1401D1594 (KdPowerTransition.c)
 *     KeResumeClockTimerSafe @ 0x1401D22E4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401D231C (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x1401D65B8 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224D8C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x140224F50 (EtwSendTraceBuffer.c)
 *     EtwpSendTraceEvent @ 0x140227C60 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140229210 (EtwpStackTraceDispatcher.c)
 *     EtwpDisableCompression @ 0x14022A660 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x14022AB8C (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x140493540 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1404945E0 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
