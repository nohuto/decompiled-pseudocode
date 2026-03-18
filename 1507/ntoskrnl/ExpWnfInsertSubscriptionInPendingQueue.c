/*
 * XREFs of ExpWnfInsertSubscriptionInPendingQueue @ 0x14050380C
 * Callers:
 *     ExpWnfNotifySubscription @ 0x140500BFC (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpWnfInsertSubscriptionInPendingQueue(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v8; // r15
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  int v13; // r14d
  int v15; // eax
  _QWORD *v16; // rdx
  __int64 v17; // rax

  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  if ( !v4 )
    return 0LL;
  v8 = *(_QWORD *)(v4 + 1696);
  v9 = (volatile signed __int64 *)(v8 + 104);
  v10 = KeAbPreAcquire(v8 + 104, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 104), v10, v8 + 104, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = *(_DWORD *)(a1 + 100) & a2;
  if ( !v13 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 104));
    KeAbPostRelease(v8 + 104);
    return 0LL;
  }
  v15 = *(_DWORD *)(a1 + 120);
  if ( v15 )
  {
    if ( v15 != 3 )
      goto LABEL_15;
  }
  else
  {
    v16 = *(_QWORD **)(v8 + 120);
    v17 = a1 + 104;
    *(_QWORD *)(a1 + 104) = v8 + 112;
    *(_QWORD *)(a1 + 112) = v16;
    if ( *v16 != v8 + 112 )
      __fastfail(3u);
    *v16 = v17;
    *(_QWORD *)(v8 + 120) = v17;
  }
  v5 = 1;
  *(_DWORD *)(a1 + 120) = 1;
LABEL_15:
  if ( ((*(_BYTE *)(a1 + 124) | *(_BYTE *)(a1 + 128)) & 1) == 0 && (v13 & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 164LL), 1u);
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 100) & (v13 | *(_DWORD *)(a1 + 124));
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 104));
  KeAbPostRelease(v8 + 104);
  return v5;
}
