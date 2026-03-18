/*
 * XREFs of ExWakeTimersPause @ 0x14011A2B0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     ExpTimerPause @ 0x1400EE464 (ExpTimerPause.c)
 */

__int64 ExWakeTimersPause()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  __int64 *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx

  v0 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v0, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = (__int64 *)ExpWakeTimerList;
  while ( v6 != &ExpWakeTimerList )
  {
    v8 = (__int64)(v6 - 32);
    v6 = (__int64 *)*v6;
    KxAcquireSpinLock((PKSPIN_LOCK)(v8 + 64));
    v9 = *(_QWORD *)(v8 + 248);
    KxReleaseSpinLock((PKSPIN_LOCK)(v8 + 64));
    if ( v9 )
      ExpTimerPause(v8, v5, v4);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
