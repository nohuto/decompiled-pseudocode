/*
 * XREFs of VerifierKeAcquireSpinLockForDpc @ 0x14074214C
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
