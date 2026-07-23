/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x140493440
 * Callers:
 *     EtwpCloseRealTimeConnectionObject @ 0x140493608 (EtwpCloseRealTimeConnectionObject.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140493660 (EtwpRealtimeDisconnectConsumerByHandle.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x140493540 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1)
{
  __int64 v2; // rax
  signed __int64 v3; // rbx
  __int64 v4; // r14
  unsigned __int64 *v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // rbp
  signed __int64 v8; // rax
  unsigned __int64 v9; // rtt
  unsigned int v10; // ebx

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    v2 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 152), *(unsigned __int16 *)(a1 + 88), 1);
    v3 = 0LL;
    v4 = v2;
    if ( v2 )
    {
      v5 = (unsigned __int64 *)(v2 + 688);
      v6 = (_BYTE *)KeAbPreAcquire(v2 + 688, 0LL, 0);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
      if ( v7 )
        v7[26] |= 1u;
      *(_QWORD *)(v4 + 352) = a1;
      _m_prefetchw(v5);
      v8 = *v5;
      if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v3 = v8 - 16;
      if ( (v8 & 2) != 0 || (v9 = *v5, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v3, v8)) )
        ExfReleasePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      v10 = EtwpSynchronizeWithLogger(v4, 16LL);
      EtwpSynchronizeWithLogger(v4, 4LL);
      EtwpReleaseLoggerContext((unsigned int *)v4, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v10;
}
