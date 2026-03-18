/*
 * XREFs of VerifierKeAcquireSpinLockForDpc @ 0x1406C0954
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
KIRQL __stdcall VerifierKeAcquireSpinLockForDpc(PKSPIN_LOCK SpinLock)
{
  return pXdvKeAcquireSpinLockForDpc(SpinLock);
}
