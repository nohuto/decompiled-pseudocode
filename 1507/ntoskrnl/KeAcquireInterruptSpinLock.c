/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x140123208
 * Callers:
 *     VerifierKeAcquireInterruptSpinLock @ 0x1407420E0 (VerifierKeAcquireInterruptSpinLock.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

KIRQL __stdcall KeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  unsigned __int8 SynchronizeIrql; // al
  KIRQL CurrentIrql; // bl
  unsigned __int64 *ActualLock; // rcx

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  ActualLock = Interrupt->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(ActualLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)ActualLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)ActualLock);
  }
  return CurrentIrql;
}
