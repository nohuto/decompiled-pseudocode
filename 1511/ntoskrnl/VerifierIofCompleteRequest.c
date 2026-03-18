/*
 * XREFs of VerifierIofCompleteRequest @ 0x1406B9754
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIofCompleteRequest(PIRP Irp, CCHAR PriorityBoost)
{
  pXdvIofCompleteRequest(Irp, PriorityBoost);
}
