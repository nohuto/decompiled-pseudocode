/*
 * XREFs of VerifierKeAcquireInterruptSpinLock @ 0x1406C08EC
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
