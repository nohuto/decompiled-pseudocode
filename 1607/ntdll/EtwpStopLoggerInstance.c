/*
 * XREFs of EtwpStopLoggerInstance @ 0x180051DA0
 * Callers:
 *     EtwpLogger @ 0x180052AF0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180053400 (EtwpStopUmLogger.c)
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x180052E50 (RtlWakeAllConditionVariable.c)
 *     EtwpSendSessionNotification @ 0x180053C98 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x180053E90 (EtwpDisableTraceProviders.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(unsigned int *)(a1 + 20));
  *(_QWORD *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)) = 3LL;
  RtlWakeAllConditionVariable(a1 + 80);
  EtwpSendSessionNotification(a1, 2LL, *(unsigned int *)(a1 + 40));
  return 0LL;
}
