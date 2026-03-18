/*
 * XREFs of KeSynchronizeExecution_0 @ 0x1C000FE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall KeSynchronizeExecution_0(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  return KeSynchronizeExecution(Interrupt, SynchronizeRoutine, SynchronizeContext);
}
