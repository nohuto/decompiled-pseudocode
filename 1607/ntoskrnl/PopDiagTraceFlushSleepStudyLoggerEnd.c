/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x1403D24D0
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140126DF8 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
