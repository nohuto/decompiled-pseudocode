/*
 * XREFs of VerifierKeAcquireInterruptSpinLock @ 0x1407420E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
KIRQL __stdcall VerifierKeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  return pXdvKeAcquireInterruptSpinLock(Interrupt);
}
