/*
 * XREFs of PopReleaseUmpoPushLock @ 0x140455BF4
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140449588 (PopUmpoProcessMessage.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

void PopReleaseUmpoPushLock()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&PopUmpoPushLock);
  if ( (PopUmpoPushLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v0 = PopUmpoPushLock - 16;
  else
    v0 = 0LL;
  if ( (PopUmpoPushLock & 2) != 0
    || (v1 = PopUmpoPushLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopUmpoPushLock, v0, PopUmpoPushLock)) )
  {
    ExfReleasePushLock(&PopUmpoPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&PopUmpoPushLock);
  KeLeaveCriticalRegion();
}
