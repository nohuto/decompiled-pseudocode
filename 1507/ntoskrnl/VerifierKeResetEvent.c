/*
 * XREFs of VerifierKeResetEvent @ 0x140748D18
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
