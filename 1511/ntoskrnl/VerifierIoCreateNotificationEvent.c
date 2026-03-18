/*
 * XREFs of VerifierIoCreateNotificationEvent @ 0x1406C0704
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PKEVENT __stdcall VerifierIoCreateNotificationEvent(PUNICODE_STRING EventName, PHANDLE EventHandle)
{
  return pXdvIoCreateNotificationEvent(EventName, EventHandle);
}
