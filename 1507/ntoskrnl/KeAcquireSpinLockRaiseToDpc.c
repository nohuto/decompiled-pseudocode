/*
 * XREFs of KeAcquireSpinLockRaiseToDpc @ 0x1401011D0
 * Callers:
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140747FB0 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x140748058 (VerifierKeAcquireSpinLockRaiseToDpcNoReboot.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140749790 (VerifierPortKeAcquireSpinLock.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

KIRQL __stdcall KeAcquireSpinLockRaiseToDpc(PKSPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
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
