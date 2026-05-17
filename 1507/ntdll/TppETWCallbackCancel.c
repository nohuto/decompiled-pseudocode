/*
 * XREFs of TppETWCallbackCancel @ 0x1800F5D10
 * Callers:
 *     TpWaitForIoCompletion @ 0x1800773F0 (TpWaitForIoCompletion.c)
 *     TppWorkWait @ 0x18007D640 (TppWorkWait.c)
 *     TppWorkCancelPendingCallbacks @ 0x18007DF30 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x1800F5590 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  return NtTraceEvent();
}
