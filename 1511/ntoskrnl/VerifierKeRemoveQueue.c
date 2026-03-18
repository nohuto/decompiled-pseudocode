/*
 * XREFs of VerifierKeRemoveQueue @ 0x1406C0A88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PLIST_ENTRY __stdcall VerifierKeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  return pXdvKeRemoveQueue(Queue, WaitMode, Timeout);
}
