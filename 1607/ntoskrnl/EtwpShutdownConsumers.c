/*
 * XREFs of EtwpShutdownConsumers @ 0x1404944FC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1404945AC (EtwpRealtimeDisconnectAllConsumers.c)
 */

unsigned __int64 __fastcall EtwpShutdownConsumers(__int64 a1)
{
  signed __int64 *v2; // rsi
  _BYTE *v3; // rax
  _BYTE *v4; // rdi
  signed __int64 v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  PRKEVENT *v9; // rdi

  EtwpRealtimeDisconnectAllConsumers(a1);
  v2 = (signed __int64 *)(a1 + 688);
  v3 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v3, a1 + 688);
  v5 = 0LL;
  if ( v4 )
    v4[26] |= 1u;
  *(_DWORD *)(a1 + 816) |= 0x200u;
  if ( (*(_DWORD *)(a1 + 820) & 0x20) != 0 )
  {
    v9 = *(PRKEVENT **)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 820), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
    KeSetEvent(v9[6], 0, 0);
    ObfDereferenceObject(v9);
  }
  _m_prefetchw(v2);
  v6 = *v2;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = v6 - 16;
  if ( (v6 & 2) != 0 || (v7 = *v2, v7 != _InterlockedCompareExchange64(v2, v5, v6)) )
    ExfReleasePushLock((_QWORD *)(a1 + 688));
  return KeAbPostRelease(a1 + 688);
}
