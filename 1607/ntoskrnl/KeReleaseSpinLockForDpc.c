/*
 * XREFs of KeReleaseSpinLockForDpc @ 0x1401D3AC8
 * Callers:
 *     <none>
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
