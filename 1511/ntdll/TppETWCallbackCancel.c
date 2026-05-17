/*
 * XREFs of TppETWCallbackCancel @ 0x1800F5710
 * Callers:
 *     TppWorkCancelPendingCallbacks @ 0x180004460 (TppWorkCancelPendingCallbacks.c)
 *     TppWorkWait @ 0x18000A800 (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x180083590 (TpWaitForIoCompletion.c)
 *     TppIopCancelPendingCallbacks @ 0x1800F4F90 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  return NtTraceEvent();
}
