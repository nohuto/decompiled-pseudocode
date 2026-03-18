/*
 * XREFs of VerifierIoCreateSynchronizationEvent @ 0x140741F08
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
