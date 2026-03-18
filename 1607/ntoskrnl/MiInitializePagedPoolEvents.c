/*
 * XREFs of MiInitializePagedPoolEvents @ 0x1407A51FC
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407A4498 (MiInitializeMemoryEvents.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x140028190 (MiFreePoolPagesLeft.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v1; // rax
  signed __int8 v2; // cf
  _BYTE *v3; // rdi
  unsigned __int64 v4; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140327828, 0LL, 0);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140327828, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140327828, v1, (ULONG_PTR)&qword_140327828);
  if ( v3 )
    v3[26] |= 1u;
  v4 = MiFreePoolPagesLeft(6);
  if ( v4 < qword_1403264C8 )
    KeResetEvent(qword_140323660);
  else
    KeSetEvent(qword_140323660, 0, 0);
  if ( v4 <= qword_1403264C0 )
    KeSetEvent(qword_140323658, 0, 0);
  else
    KeResetEvent(qword_140323658);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140327828, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140327828);
  KeAbPostRelease((ULONG_PTR)&qword_140327828);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
