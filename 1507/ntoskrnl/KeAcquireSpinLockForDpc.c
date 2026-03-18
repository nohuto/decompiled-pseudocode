/*
 * XREFs of KeAcquireSpinLockForDpc @ 0x140200D88
 * Callers:
 *     VerifierKeAcquireSpinLockForDpc @ 0x14074214C (VerifierKeAcquireSpinLockForDpc.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

KIRQL __stdcall KeAcquireSpinLockForDpc(PKSPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  else
  {
    CurrentIrql = 2;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(SpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)SpinLock);
  }
  return CurrentIrql;
}
