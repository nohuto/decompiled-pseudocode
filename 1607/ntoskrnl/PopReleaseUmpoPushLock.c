/*
 * XREFs of PopReleaseUmpoPushLock @ 0x140520494
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400FB738 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x1403F7B28 (PopUmpoProcessMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
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
