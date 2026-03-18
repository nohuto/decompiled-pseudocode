/*
 * XREFs of PopReleaseAwaymodeLock @ 0x1403A592C
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1406323F0 (PopAwayModePowerRequest.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 PopReleaseAwaymodeLock()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt

  v0 = 0LL;
  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  _m_prefetchw(&PopAwaymodeLock);
  if ( (PopAwaymodeLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v0 = PopAwaymodeLock - 16;
  if ( (PopAwaymodeLock & 2) != 0
    || (v1 = PopAwaymodeLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopAwaymodeLock, v0, PopAwaymodeLock)) )
  {
    ExfReleasePushLock(&PopAwaymodeLock);
  }
  KeAbPostRelease((ULONG_PTR)&PopAwaymodeLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
