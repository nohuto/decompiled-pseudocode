/*
 * XREFs of VerifierKeResetEvent @ 0x1406C65EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall VerifierKeResetEvent(PRKEVENT Event)
{
  return pXdvKeResetEvent(Event);
}
