/*
 * XREFs of MiInitializePagedPoolEvents @ 0x14074D8B0
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14074D074 (MiInitializeMemoryEvents.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x140014424 (MiFreePoolPagesLeft.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 */

__int64 MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&qword_1402FF768, 0LL, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FF768, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FF768, v1, (ULONG_PTR)&qword_1402FF768);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = MiFreePoolPagesLeft(6);
  if ( v4 < qword_1402FE208 )
    KeResetEvent(qword_1402FFE58);
  else
    KeSetEvent(qword_1402FFE58, 0, 0);
  if ( v4 <= qword_1402FE200 )
    KeSetEvent(qword_1402FFE50, 0, 0);
  else
    KeResetEvent(qword_1402FFE50);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FF768, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FF768);
  KeAbPostRelease((ULONG_PTR)&qword_1402FF768);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
