/*
 * XREFs of VerifierIoCreateSynchronizationEvent @ 0x1406C0714
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PKEVENT __stdcall VerifierIoCreateSynchronizationEvent(PUNICODE_STRING EventName, PHANDLE EventHandle)
{
  return pXdvIoCreateSynchronizationEvent(EventName, EventHandle);
}
