/*
 * XREFs of EtwpStopLoggerInstance @ 0x18000A740
 * Callers:
 *     EtwpLogger @ 0x1800096B0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x18000A520 (EtwpStopUmLogger.c)
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x180009A40 (RtlWakeAllConditionVariable.c)
 *     EtwpSendSessionNotification @ 0x18000A7A8 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x18000BE90 (EtwpDisableTraceProviders.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(unsigned int *)(a1 + 20));
  *(_QWORD *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)) = 3LL;
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  EtwpSendSessionNotification(a1, 2LL, *(unsigned int *)(a1 + 40));
  return 0LL;
}
