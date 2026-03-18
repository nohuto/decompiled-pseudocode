/*
 * XREFs of VerifierKeReleaseInterruptSpinLock @ 0x1407421DC
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
