/*
 * XREFs of VerifierIofCompleteRequest @ 0x140739D88
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
