/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x14054D698
 * Callers:
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x14054D1D8 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpCloseRealTimeConnectionObject @ 0x14054D234 (EtwpCloseRealTimeConnectionObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x14054D790 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  signed __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rsi
  signed __int64 v11; // rax
  unsigned __int64 v12; // rtt
  unsigned int v13; // ebx

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    v2 = EtwpAcquireLoggerContextByLoggerId(*(unsigned __int16 *)(a1 + 88), 1);
    v4 = 0LL;
    v5 = v2;
    if ( v2 )
    {
      v6 = (unsigned __int64 *)(v2 + 704);
      v7 = KeAbPreAcquire(v2 + 704, 0LL, 0LL, v3);
      v10 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v9);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      *(_QWORD *)(v5 + 368) = a1;
      _m_prefetchw(v6);
      v11 = *v6;
      if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v4 = v11 - 16;
      if ( (v11 & 2) != 0 || (v12 = *v6, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v4, v11)) )
        ExfReleasePushLock(v6, v8);
      KeAbPostRelease((ULONG_PTR)v6);
      v13 = EtwpSynchronizeWithLogger(v5, 16LL);
      EtwpSynchronizeWithLogger(v5, 4LL);
      EtwpReleaseLoggerContext((unsigned int *)v5, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v13;
}
