/*
 * XREFs of KeAcquireSpinLockAtDpcLevel @ 0x1401076B0
 * Callers:
 *     sub_14017D0A4 @ 0x14017D0A4 (sub_14017D0A4.c)
 *     KeSynchronizeExecution @ 0x140183760 (KeSynchronizeExecution.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140747E2C (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x140747F00 (VerifierKeAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

void __stdcall KeAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(SpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)SpinLock);
  }
}
