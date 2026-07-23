/*
 * XREFs of EtwpStopLoggerInstance @ 0x18005C910
 * Callers:
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x18005C7A8 (EtwpStopUmLogger.c)
 * Callees:
 *     EtwpSendSessionNotification @ 0x180044FB8 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x1800514A4 (EtwpDisableTraceProviders.c)
 *     RtlWakeAllConditionVariable @ 0x18005C070 (RtlWakeAllConditionVariable.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(_DWORD *)(a1 + 20));
  *(_QWORD *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)) = 3LL;
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  EtwpSendSessionNotification(a1, 2, *(_DWORD *)(a1 + 40));
  return 0LL;
}
