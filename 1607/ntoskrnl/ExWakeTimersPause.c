/*
 * XREFs of ExWakeTimersPause @ 0x140114E9C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ExpTimerPause @ 0x1400ACE44 (ExpTimerPause.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 ExWakeTimersPause()
{
  _BYTE *v0; // rax
  signed __int8 v1; // cf
  _BYTE *v2; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  __int64 *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx

  v0 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v0, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v2 )
    v2[26] |= 1u;
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
