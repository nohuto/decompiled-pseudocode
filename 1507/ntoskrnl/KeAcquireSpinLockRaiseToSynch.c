/*
 * XREFs of KeAcquireSpinLockRaiseToSynch @ 0x140200EBC
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

KIRQL __stdcall KeAcquireSpinLockRaiseToSynch(PKSPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
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
