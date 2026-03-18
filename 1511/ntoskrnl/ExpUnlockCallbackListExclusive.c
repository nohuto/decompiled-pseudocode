/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x14013F70C
 * Callers:
 *     ExCreateCallback @ 0x1404BF200 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x14066C134 (ExpDeleteCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  signed __int64 v2; // rdx
  ULONG_PTR v3; // rtt

  _m_prefetchw(&ExpCallbackListLock);
  if ( (ExpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = ExpCallbackListLock - 16;
  else
    v2 = 0LL;
  if ( (ExpCallbackListLock & 2) != 0
    || (v3 = ExpCallbackListLock,
        v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpCallbackListLock, v2, ExpCallbackListLock)) )
  {
    ExfReleasePushLock(&ExpCallbackListLock);
  }
  KeAbPostRelease((ULONG_PTR)&ExpCallbackListLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
