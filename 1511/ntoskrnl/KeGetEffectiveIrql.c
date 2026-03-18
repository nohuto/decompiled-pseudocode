/*
 * XREFs of KeGetEffectiveIrql @ 0x14009FE70
 * Callers:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     EtwpRequestFlushTimer @ 0x140090BA4 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     KdPowerTransition @ 0x1401C2138 (KdPowerTransition.c)
 *     KeResumeClockTimerSafe @ 0x1401C2D28 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401C2D60 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x1401C77E0 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14020D474 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x14020D638 (EtwSendTraceBuffer.c)
 *     EtwpSendTraceEvent @ 0x140210028 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140210E18 (EtwpStackTraceDispatcher.c)
 *     EtwpSynchronizeWithLogger @ 0x1404B666C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
