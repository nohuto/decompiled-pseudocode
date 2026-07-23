/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPort @ 0x140655CF0
 * Callers:
 *     AlpcpReferenceMessageByWaitingThread @ 0x140655B6C (AlpcpReferenceMessageByWaitingThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140655F10 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThreadPort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbp
  __int64 v5; // rbx
  volatile signed __int64 *v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  __int64 v9; // rsi
  _BYTE *v10; // rax
  _BYTE *v11; // rsi
  _BYTE *v12; // rax
  _BYTE *v13; // rsi

  v2 = (unsigned __int64 *)(a2 + 352);
  v5 = KeAbPreAcquire(a2 + 352, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, v5, (ULONG_PTR)v2);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v9 = 0LL;
    goto LABEL_30;
  }
  v6 = (volatile signed __int64 *)(a2 + 136);
  v7 = (_BYTE *)KeAbPreAcquire(a2 + 136, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 136), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 136), v7, a2 + 136);
  if ( v8 )
    v8[26] |= 1u;
  v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 144);
  if ( v9 )
    goto LABEL_11;
  v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 136));
  KeAbPostRelease(a2 + 136);
  if ( !v9 )
  {
    v10 = (_BYTE *)KeAbPreAcquire(a2 + 176, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 176), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 176), v10, a2 + 176);
    if ( v11 )
      v11[26] |= 1u;
    v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 176));
    KeAbPostRelease(a2 + 176);
    if ( !v9 )
    {
      v6 = (volatile signed __int64 *)(a2 + 200);
      v12 = (_BYTE *)KeAbPreAcquire(a2 + 200, 0LL, 0);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v12, a2 + 200);
      if ( v13 )
        v13[26] |= 1u;
      v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 208);
LABEL_11:
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
    }
  }
LABEL_30:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v9;
}
