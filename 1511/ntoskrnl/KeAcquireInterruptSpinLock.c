/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x1400E8770
 * Callers:
 *     VerifierKeAcquireInterruptSpinLock @ 0x1406C08EC (VerifierKeAcquireInterruptSpinLock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

KIRQL __stdcall KeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  unsigned __int8 SynchronizeIrql; // cl
  KIRQL CurrentIrql; // bl

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  KxAcquireSpinLock(Interrupt->ActualLock);
  return CurrentIrql;
}
