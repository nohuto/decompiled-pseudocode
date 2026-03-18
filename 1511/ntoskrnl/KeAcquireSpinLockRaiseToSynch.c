/*
 * XREFs of KeAcquireSpinLockRaiseToSynch @ 0x1401C4B04
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 */

KIRQL __stdcall KeAcquireSpinLockRaiseToSynch(PKSPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock(SpinLock);
  return CurrentIrql;
}
