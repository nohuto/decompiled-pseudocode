/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x1406BCE88
 * Callers:
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char PopIdleArmAoAcDozeS4Timer()
{
  char v0; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&PopIdleAoAcDozeS4Lock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopIdleAoAcDozeS4Lock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopIdleAoAcDozeS4Lock);
  }
  if ( !byte_14032E1DC )
  {
    KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, -10000000LL * *((unsigned int *)PopPolicy + 22), 0LL, 0LL);
    byte_14032E1DC = 1;
    v0 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopIdleAoAcDozeS4Lock, retaddr);
  else
    _InterlockedAnd64(&PopIdleAoAcDozeS4Lock, 0LL);
  __writecr8(CurrentIrql);
  return v0;
}
