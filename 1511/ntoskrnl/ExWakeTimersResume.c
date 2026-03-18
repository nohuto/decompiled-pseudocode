/*
 * XREFs of ExWakeTimersResume @ 0x14011AA08
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x1400EEB44 (ExpTimerResume.c)
 */

void ExWakeTimersResume()
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v1; // r14
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 v4; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v1 = MEMORY[0xFFFFF78000000008];
  v2 = (__int64 *)ExpWakeTimerList;
  while ( v2 != &ExpWakeTimerList )
  {
    v3 = v2 - 32;
    v2 = (__int64 *)*v2;
    KxAcquireSpinLock((PKSPIN_LOCK)v3 + 8);
    v4 = v3[31];
    KxReleaseSpinLock((PKSPIN_LOCK)v3 + 8);
    if ( v4 )
      ExpTimerResume((PKTIMER)v3, v1);
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
}
