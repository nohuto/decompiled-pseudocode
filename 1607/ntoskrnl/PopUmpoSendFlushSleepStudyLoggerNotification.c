/*
 * XREFs of PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140126888
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400FB738 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x1403D24DC (PopDiagTraceFlushSleepStudyLogger.c)
 */

__int64 PopUmpoSendFlushSleepStudyLoggerNotification()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_140303858 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceFlushSleepStudyLogger();
  memset(Src, 0, 0x48uLL);
  Src[0] = 16;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
  qword_140303860 = KeQueryPerformanceCounter(0LL).QuadPart;
  return PopDiagTraceFlushSleepStudyLoggerEnd();
}
