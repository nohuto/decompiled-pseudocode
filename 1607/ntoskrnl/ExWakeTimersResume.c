/*
 * XREFs of ExWakeTimersResume @ 0x140114D10
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x1400AC6F8 (ExpTimerResume.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 ExWakeTimersResume()
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v1; // r14
  __int64 *v2; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v1 = MEMORY[0xFFFFF78000000008];
  v2 = (__int64 *)ExpWakeTimerList;
  while ( v2 != &ExpWakeTimerList )
  {
    v4 = v2 - 32;
    v2 = (__int64 *)*v2;
    KxAcquireSpinLock((PKSPIN_LOCK)v4 + 8);
    v5 = v4[31];
    KxReleaseSpinLock((PKSPIN_LOCK)v4 + 8);
    if ( v5 )
      ExpTimerResume((PKTIMER)v4, v1);
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  return KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
}
