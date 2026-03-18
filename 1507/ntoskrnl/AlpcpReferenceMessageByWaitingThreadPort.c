/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPort @ 0x140406E24
 * Callers:
 *     AlpcpReferenceMessageByWaitingThread @ 0x140406CC8 (AlpcpReferenceMessageByWaitingThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140407004 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThreadPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbp
  __int64 v7; // rbx
  __int64 v8; // r9
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rsi

  v4 = (unsigned __int64 *)(a2 + 352);
  v7 = KeAbPreAcquire(a2 + 352, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v7, (ULONG_PTR)v4, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v13 = 0LL;
    goto LABEL_29;
  }
  v9 = (volatile signed __int64 *)(a2 + 136);
  v10 = KeAbPreAcquire(a2 + 136, 0LL, 0LL, v8);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 136), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 136), v10, a2 + 136, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 144);
  if ( v13 )
    goto LABEL_26;
  v13 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 136));
  KeAbPostRelease(a2 + 136);
  if ( !v13 )
  {
    v15 = KeAbPreAcquire(a2 + 176, 0LL, 0LL, v14);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 176), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 176), v15, a2 + 176, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    v13 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 176));
    KeAbPostRelease(a2 + 176);
    if ( !v13 )
    {
      v9 = (volatile signed __int64 *)(a2 + 200);
      v19 = KeAbPreAcquire(a2 + 200, 0LL, 0LL, v18);
      v21 = v19;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v19, a2 + 200, v20);
      if ( v21 )
        *(_BYTE *)(v21 + 26) |= 1u;
      v13 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 208);
LABEL_26:
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
    }
  }
LABEL_29:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v13;
}
