/*
 * XREFs of KeReleaseInterruptSpinLock @ 0x140124F70
 * Callers:
 *     VerifierKeReleaseInterruptSpinLock @ 0x1407421DC (VerifierKeReleaseInterruptSpinLock.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseInterruptSpinLock(PKINTERRUPT Interrupt, KIRQL OldIrql)
{
  unsigned __int64 *ActualLock; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Interrupt->SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  ActualLock = Interrupt->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(ActualLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)ActualLock, 0LL);
  __writecr8(OldIrql);
}
