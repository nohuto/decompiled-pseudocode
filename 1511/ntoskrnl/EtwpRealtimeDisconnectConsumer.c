/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x1404B6570
 * Callers:
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1404B60F8 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpCloseRealTimeConnectionObject @ 0x1404B6154 (EtwpCloseRealTimeConnectionObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSynchronizeWithLogger @ 0x1404B666C (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1)
{
  unsigned int *v2; // rax
  signed __int64 v3; // rbx
  unsigned int *v4; // r14
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  signed __int64 v8; // rax
  unsigned __int64 v9; // rtt
  unsigned int v10; // ebx

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    v2 = EtwpAcquireLoggerContextByLoggerId(0LL, *(unsigned __int16 *)(a1 + 88), 1);
    v3 = 0LL;
    v4 = v2;
    if ( v2 )
    {
      v5 = (unsigned __int64 *)(v2 + 176);
      v6 = KeAbPreAcquire((ULONG_PTR)(v2 + 176), 0LL, 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
      *((_QWORD *)v4 + 46) = a1;
      _m_prefetchw(v5);
      v8 = *v5;
      if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v3 = v8 - 16;
      if ( (v8 & 2) != 0 || (v9 = *v5, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v3, v8)) )
        ExfReleasePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      v10 = EtwpSynchronizeWithLogger(v4, 16LL);
      EtwpSynchronizeWithLogger(v4, 4LL);
      EtwpReleaseLoggerContext(0LL, v4, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v10;
}
