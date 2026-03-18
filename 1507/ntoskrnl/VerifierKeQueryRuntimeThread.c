/*
 * XREFs of VerifierKeQueryRuntimeThread @ 0x1407421BC
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
