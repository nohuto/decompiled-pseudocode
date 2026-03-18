/*
 * XREFs of VerifierKeReleaseSpinLockForDpc @ 0x1406C0A68
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierKeReleaseSpinLockForDpc(PKSPIN_LOCK SpinLock, KIRQL OldIrql)
{
  pXdvKeReleaseSpinLockForDpc(SpinLock, OldIrql);
}
