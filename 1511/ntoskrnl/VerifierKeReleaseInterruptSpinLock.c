/*
 * XREFs of VerifierKeReleaseInterruptSpinLock @ 0x1406C09E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierKeReleaseInterruptSpinLock(PKINTERRUPT Interrupt, KIRQL OldIrql)
{
  pXdvKeReleaseInterruptSpinLock(Interrupt, OldIrql);
}
