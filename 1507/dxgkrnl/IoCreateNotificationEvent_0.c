/*
 * XREFs of IoCreateNotificationEvent_0 @ 0x1C000FDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PKEVENT __stdcall IoCreateNotificationEvent_0(PUNICODE_STRING EventName, PHANDLE EventHandle)
{
  return IoCreateNotificationEvent(EventName, EventHandle);
}
