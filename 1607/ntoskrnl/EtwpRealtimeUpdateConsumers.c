/*
 * XREFs of EtwpRealtimeUpdateConsumers @ 0x140490ECC
 * Callers:
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

LONG __fastcall EtwpRealtimeUpdateConsumers(__int64 a1)
{
  LONG result; // eax
  unsigned __int64 *v3; // rdi
  _BYTE *v4; // rax
  _BYTE *v5; // rsi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rtt
  __int64 v10; // rax
  _QWORD *v11; // rcx
  signed __int64 *v12; // rdi
  int v13; // ebp
  _BYTE *v14; // rax
  _BYTE *v15; // rsi
  __int64 v16; // rsi
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  _QWORD *i; // rcx

  if ( (*(_DWORD *)(a1 + 820) & 0x20) != 0 )
  {
    v3 = (unsigned __int64 *)(a1 + 688);
    v4 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
    if ( v5 )
      v5[26] |= 1u;
    v6 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
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
    *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 432);
    v11 = *(_QWORD **)(a1 + 336);
    if ( *v11 != a1 + 328 )
      __fastfail(3u);
    *(_QWORD *)v6 = a1 + 328;
    *(_QWORD *)(v6 + 8) = v11;
    *v11 = v6;
    *(_QWORD *)(a1 + 336) = v6;
    ++*(_DWORD *)(a1 + 344);
    *(_BYTE *)(v6 + 90) &= ~8u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 820), 0x40u);
    *(_DWORD *)(a1 + 56) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 820), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  result = *(_DWORD *)(a1 + 820);
  if ( (result & 0x10) != 0 )
  {
    v12 = (signed __int64 *)(a1 + 688);
    v13 = -1073741162;
    v14 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v14, a1 + 688);
    if ( v15 )
      v15[26] |= 1u;
    v16 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    _m_prefetchw(v12);
    v17 = *v12;
    if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v18 = v17 - 16;
    else
      v18 = 0LL;
    if ( (v17 & 2) != 0 || (v19 = *v12, v19 != _InterlockedCompareExchange64(v12, v18, v17)) )
      ExfReleasePushLock((_QWORD *)(a1 + 688));
    KeAbPostRelease(a1 + 688);
    for ( i = *(_QWORD **)(a1 + 328); i != (_QWORD *)(a1 + 328); i = (_QWORD *)*i )
    {
      if ( (_QWORD *)v16 == i && (*(_BYTE *)(v16 + 90) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 820), 4u);
        *(_BYTE *)(v16 + 90) |= 1u;
        v13 = 0;
      }
    }
    *(_DWORD *)(a1 + 56) = v13;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 820), 0xFFFFFFEF);
    return KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  return result;
}
