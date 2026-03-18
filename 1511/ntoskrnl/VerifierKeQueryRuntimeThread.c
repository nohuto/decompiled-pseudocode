/*
 * XREFs of VerifierKeQueryRuntimeThread @ 0x1406C09C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall VerifierKeQueryRuntimeThread(PKTHREAD Thread, PULONG UserTime)
{
  return pXdvKeQueryRuntimeThread(Thread, UserTime);
}
