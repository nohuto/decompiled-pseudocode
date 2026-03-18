/*
 * XREFs of ExWakeTimersResume @ 0x140148924
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpTimerResume @ 0x14012D1AC (ExpTimerResume.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void ExWakeTimersResume()
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v1; // r15
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rbp
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v1 = MEMORY[0xFFFFF78000000008];
  v2 = (__int64 *)ExpWakeTimerList;
  while ( v2 != &ExpWakeTimerList )
  {
    v3 = v2 - 32;
    v2 = (__int64 *)*v2;
    v4 = (volatile signed __int32 *)(v3 + 8);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v3 + 8);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v3 + 16);
    }
    v5 = v3[31];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3 + 8, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    if ( v5 )
      ExpTimerResume((PKTIMER)v3, v1);
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
}
