/*
 * XREFs of EtwpRealtimeUpdateConsumers @ 0x1404A15F8
 * Callers:
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

LONG __fastcall EtwpRealtimeUpdateConsumers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LONG result; // eax
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rsi
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rtt
  __int64 v15; // rax
  _QWORD *v16; // rcx
  signed __int64 *v17; // rdi
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rsi
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  signed __int64 v26; // rtt
  _QWORD *i; // rcx

  if ( (*(_DWORD *)(a1 + 836) & 0x20) != 0 )
  {
    v6 = (unsigned __int64 *)(a1 + 704);
    v7 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, a4);
    v10 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    _m_prefetchw(v6);
    v12 = *v6;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v13 = v12 - 16;
    else
      v13 = 0LL;
    if ( (v12 & 2) != 0 || (v14 = *v6, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v13, v12)) )
      ExfReleasePushLock(v6, v8);
    KeAbPostRelease((ULONG_PTR)v6);
    v15 = *(_QWORD *)(v11 + 40);
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_OWORD *)(v15 + 80) = *(_OWORD *)(a1 + 448);
    v16 = *(_QWORD **)(a1 + 352);
    *(_QWORD *)v11 = a1 + 344;
    *(_QWORD *)(v11 + 8) = v16;
    if ( *v16 != a1 + 344 )
      __fastfail(3u);
    *v16 = v11;
    *(_QWORD *)(a1 + 352) = v11;
    ++*(_DWORD *)(a1 + 360);
    *(_BYTE *)(v11 + 90) &= ~8u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x40u);
    *(_DWORD *)(a1 + 56) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
  }
  result = *(_DWORD *)(a1 + 836);
  if ( (result & 0x10) != 0 )
  {
    v17 = (signed __int64 *)(a1 + 704);
    v18 = -1073741162;
    v19 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, a4);
    v22 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v19, a1 + 704, v21);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    v23 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    _m_prefetchw(v17);
    v24 = *v17;
    if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v25 = v24 - 16;
    else
      v25 = 0LL;
    if ( (v24 & 2) != 0 || (v26 = *v17, v26 != _InterlockedCompareExchange64(v17, v25, v24)) )
      ExfReleasePushLock((_QWORD *)(a1 + 704), v20);
    KeAbPostRelease(a1 + 704);
    for ( i = *(_QWORD **)(a1 + 344); i != (_QWORD *)(a1 + 344); i = (_QWORD *)*i )
    {
      if ( (_QWORD *)v23 == i && (*(_BYTE *)(v23 + 90) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 836), 4u);
        *(_BYTE *)(v23 + 90) |= 1u;
        v18 = 0;
      }
    }
    *(_DWORD *)(a1 + 56) = v18;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFEF);
    return KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
  }
  return result;
}
