/*
 * XREFs of KeReleaseInterruptSpinLock @ 0x1400E9544
 * Callers:
 *     VerifierKeReleaseInterruptSpinLock @ 0x1406C09E4 (VerifierKeReleaseInterruptSpinLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __stdcall KeReleaseInterruptSpinLock(PKINTERRUPT Interrupt, KIRQL OldIrql)
{
  if ( !Interrupt->SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  KxReleaseSpinLock(Interrupt->ActualLock);
  __writecr8(OldIrql);
}
