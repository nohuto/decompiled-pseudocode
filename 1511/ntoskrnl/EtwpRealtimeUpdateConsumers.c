/*
 * XREFs of EtwpRealtimeUpdateConsumers @ 0x14046A9CC
 * Callers:
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

LONG __fastcall EtwpRealtimeUpdateConsumers(__int64 a1)
{
  LONG result; // eax
  unsigned __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rtt
  __int64 v10; // rax
  _QWORD *v11; // rcx
  signed __int64 *v12; // rdi
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  _QWORD *i; // rcx

  if ( (*(_DWORD *)(a1 + 836) & 0x20) != 0 )
  {
    v3 = (unsigned __int64 *)(a1 + 704);
    v4 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v6 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    _m_prefetchw(v3);
    v7 = *v3;
    if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v8 = v7 - 16;
    else
      v8 = 0LL;
    if ( (v7 & 2) != 0 || (v9 = *v3, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8, v7)) )
      ExfReleasePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    v10 = *(_QWORD *)(v6 + 40);
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 448);
    v11 = *(_QWORD **)(a1 + 352);
    *(_QWORD *)v6 = a1 + 344;
    *(_QWORD *)(v6 + 8) = v11;
    if ( *v11 != a1 + 344 )
      __fastfail(3u);
    *v11 = v6;
    *(_QWORD *)(a1 + 352) = v6;
    ++*(_DWORD *)(a1 + 360);
    *(_BYTE *)(v6 + 90) &= ~8u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x40u);
    *(_DWORD *)(a1 + 56) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
  }
  result = *(_DWORD *)(a1 + 836);
  if ( (result & 0x10) != 0 )
  {
    v12 = (signed __int64 *)(a1 + 704);
    v13 = -1073741162;
    v14 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v14, a1 + 704);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    _m_prefetchw(v12);
    v17 = *v12;
    if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v18 = v17 - 16;
    else
      v18 = 0LL;
    if ( (v17 & 2) != 0 || (v19 = *v12, v19 != _InterlockedCompareExchange64(v12, v18, v17)) )
      ExfReleasePushLock((_QWORD *)(a1 + 704));
    KeAbPostRelease(a1 + 704);
    for ( i = *(_QWORD **)(a1 + 344); i != (_QWORD *)(a1 + 344); i = (_QWORD *)*i )
    {
      if ( (_QWORD *)v16 == i && (*(_BYTE *)(v16 + 90) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 836), 4u);
        *(_BYTE *)(v16 + 90) |= 1u;
        v13 = 0;
      }
    }
    *(_DWORD *)(a1 + 56) = v13;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFEF);
    return KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
  }
  return result;
}
