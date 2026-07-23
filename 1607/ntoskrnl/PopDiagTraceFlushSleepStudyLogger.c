/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x1403D24DC
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140126DF8 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
