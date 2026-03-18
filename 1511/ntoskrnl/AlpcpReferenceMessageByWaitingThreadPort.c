/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPort @ 0x1405101A8
 * Callers:
 *     AlpcpReferenceMessageByWaitingThread @ 0x14051004C (AlpcpReferenceMessageByWaitingThread.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1405103DC (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThreadPort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbp
  __int64 v5; // rbx
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi

  v2 = (unsigned __int64 *)(a2 + 352);
  v5 = KeAbPreAcquire(a2 + 352, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, v5, (ULONG_PTR)v2);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v9 = 0LL;
    goto LABEL_29;
  }
  v6 = (volatile signed __int64 *)(a2 + 136);
  v7 = KeAbPreAcquire(a2 + 136, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 136), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 136), v7, a2 + 136);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 144);
  if ( v9 )
    goto LABEL_26;
  v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 136));
  KeAbPostRelease(a2 + 136);
  if ( !v9 )
  {
    v10 = KeAbPreAcquire(a2 + 176, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 176), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 176), v10, a2 + 176);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 176));
    KeAbPostRelease(a2 + 176);
    if ( !v9 )
    {
      v6 = (volatile signed __int64 *)(a2 + 200);
      v12 = KeAbPreAcquire(a2 + 200, 0LL, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v12, a2 + 200);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 208);
LABEL_26:
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
    }
  }
LABEL_29:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v9;
}
