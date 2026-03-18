/*
 * XREFs of KeReleaseSpinLockForDpc @ 0x1401C4AE4
 * Callers:
 *     VerifierKeReleaseSpinLockForDpc @ 0x1406C0A68 (VerifierKeReleaseSpinLockForDpc.c)
 * Callees:
 *     <none>
 */

void __stdcall KeReleaseSpinLockForDpc(PKSPIN_LOCK SpinLock, KIRQL OldIrql)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseSpinLock(SpinLock, OldIrql);
  else
    KxReleaseSpinLock(SpinLock);
}
