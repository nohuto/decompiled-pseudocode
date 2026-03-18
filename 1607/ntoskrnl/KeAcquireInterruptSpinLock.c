/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x1400AF8FC
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
