/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x140148CDC
 * Callers:
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x1406AFD40 (ExpDeleteCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
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
