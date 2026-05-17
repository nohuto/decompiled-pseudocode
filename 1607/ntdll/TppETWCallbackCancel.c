/*
 * XREFs of TppETWCallbackCancel @ 0x1800FE67C
 * Callers:
 *     TppWorkWait @ 0x18003B878 (TppWorkWait.c)
 *     TppWorkCancelPendingCallbacks @ 0x180064030 (TppWorkCancelPendingCallbacks.c)
 *     TpWaitForIoCompletion @ 0x180087A00 (TpWaitForIoCompletion.c)
 *     TppIopCancelPendingCallbacks @ 0x1800FDF80 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  return NtTraceEvent();
}
