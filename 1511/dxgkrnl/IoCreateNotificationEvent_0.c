/*
 * XREFs of IoCreateNotificationEvent_0 @ 0x1C0011520
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
