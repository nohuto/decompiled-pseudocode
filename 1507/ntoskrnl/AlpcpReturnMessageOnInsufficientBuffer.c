/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x14054F010
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  __int64 v7; // rbx
  __int64 v8; // r9
  volatile signed __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r15
  int v21; // eax

  v4 = (unsigned __int64 *)(a1 + 352);
  v7 = KeAbPreAcquire(a1 + 352, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v7, (ULONG_PTR)v4, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( *(_QWORD *)(a2 + 64) == a1 )
  {
    if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      *(_QWORD *)(a2 + 64) = 0LL;
      *(_QWORD *)(a2 + 56) = 0LL;
LABEL_33:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v4);
      KeAbPostRelease((ULONG_PTR)v4);
      return 3221225507LL;
    }
    ++*(_WORD *)(a2 - 30);
    v9 = (volatile signed __int64 *)(a1 + 136);
    v10 = KeAbPreAcquire(a1 + 136, 0LL, 0LL, v8);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 136), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 136), v10, a1 + 136, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 392);
    *(_QWORD *)(a2 + 80) = a1 + 384;
    **(_QWORD **)(a1 + 392) = a2 + 80;
    *(_QWORD *)(a1 + 392) = a2 + 80;
    ++*(_DWORD *)(a1 + 464);
LABEL_30:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    goto LABEL_33;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
  {
    v14 = *(_QWORD *)(a2 + 16);
    if ( v14 )
    {
      v15 = KeAbPreAcquire(v14 + 176, 0LL, 0LL, v8);
      v17 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 176), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 176), v15, v14 + 176, v16);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      --*(_DWORD *)(v14 + 456);
      *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(a2 + 16) = 0LL;
      **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 176));
      KeAbPostRelease(v14 + 176);
      --*(_WORD *)(a2 - 30);
    }
    ++*(_WORD *)(a2 - 30);
    v9 = (volatile signed __int64 *)(a1 + 136);
    v18 = KeAbPreAcquire(a1 + 136, 0LL, 0LL, v8);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 136), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 136), v18, a1 + 136, v19);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    v21 = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 16) = a1;
    *(_DWORD *)(a2 + 40) = v21 & 0xFFFFFF82 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 2;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 168);
    *(_QWORD *)a2 = a1 + 160;
    **(_QWORD **)(a1 + 168) = a2;
    *(_QWORD *)(a1 + 168) = a2;
    ++*(_DWORD *)(a1 + 452);
    goto LABEL_30;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return 3221227264LL;
}
