/*
 * XREFs of PopReleaseAwaymodeLock @ 0x1403D0614
 * Callers:
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x14066A928 (PopAwayModePowerRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 PopReleaseAwaymodeLock()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
