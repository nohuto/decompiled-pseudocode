/*
 * XREFs of VerifierKePulseEvent @ 0x1407484F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall VerifierKePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  return pXdvKePulseEvent(Event, Increment, Wait);
}
