/*
 * XREFs of KeAcquireSpinLockRaiseToSynch @ 0x1401D3CBC
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 */

KIRQL __stdcall KeAcquireSpinLockRaiseToSynch(PKSPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock(SpinLock);
  return CurrentIrql;
}
