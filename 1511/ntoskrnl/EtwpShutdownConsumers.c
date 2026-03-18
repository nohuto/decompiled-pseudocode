/*
 * XREFs of EtwpShutdownConsumers @ 0x14049D918
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14049D9D4 (EtwpRealtimeDisconnectAllConsumers.c)
 */

void __fastcall EtwpShutdownConsumers(__int64 a1)
{
  signed __int64 *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  signed __int64 v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  PRKEVENT *v8; // rdi

  EtwpRealtimeDisconnectAllConsumers(a1);
  v2 = (signed __int64 *)(a1 + 704);
  v3 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v3, a1 + 704);
  v5 = 0LL;
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  *(_DWORD *)(a1 + 832) |= 0x200u;
  if ( (*(_DWORD *)(a1 + 836) & 0x20) != 0 )
  {
    v8 = *(PRKEVENT **)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    KeSetEvent(v8[6], 0, 0);
    ObfDereferenceObject(v8);
  }
  _m_prefetchw(v2);
  v6 = *v2;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = v6 - 16;
  if ( (v6 & 2) != 0 || (v7 = *v2, v7 != _InterlockedCompareExchange64(v2, v5, v6)) )
    ExfReleasePushLock((_QWORD *)(a1 + 704));
  KeAbPostRelease(a1 + 704);
}
