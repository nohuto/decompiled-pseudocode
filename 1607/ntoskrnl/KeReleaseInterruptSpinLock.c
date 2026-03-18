/*
 * XREFs of KeReleaseInterruptSpinLock @ 0x1400B0480
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __stdcall KeReleaseInterruptSpinLock(PKINTERRUPT Interrupt, KIRQL OldIrql)
{
  if ( !Interrupt->SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  KxReleaseSpinLock(Interrupt->ActualLock);
  __writecr8(OldIrql);
}
