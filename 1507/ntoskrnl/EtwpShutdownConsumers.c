/*
 * XREFs of EtwpShutdownConsumers @ 0x1405247B8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140524868 (EtwpRealtimeDisconnectAllConsumers.c)
 */

void __fastcall EtwpShutdownConsumers(__int64 a1)
{
  signed __int64 *v2; // rsi
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdi
  signed __int64 v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  PRKEVENT *v11; // rdi

  EtwpRealtimeDisconnectAllConsumers(a1);
  v2 = (signed __int64 *)(a1 + 704);
  v4 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, v3);
  v7 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v4, a1 + 704, v6);
  v8 = 0LL;
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  *(_DWORD *)(a1 + 832) |= 0x200u;
  if ( (*(_DWORD *)(a1 + 836) & 0x20) != 0 )
  {
    v11 = *(PRKEVENT **)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    KeSetEvent(v11[6], 0, 0);
    ObfDereferenceObject(v11);
  }
  _m_prefetchw(v2);
  v9 = *v2;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v8 = v9 - 16;
  if ( (v9 & 2) != 0 || (v10 = *v2, v10 != _InterlockedCompareExchange64(v2, v8, v9)) )
    ExfReleasePushLock((_QWORD *)(a1 + 704), v5);
  KeAbPostRelease(a1 + 704);
}
