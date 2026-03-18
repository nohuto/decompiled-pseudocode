/*
 * XREFs of AlpcpInsertCompletionListEntry @ 0x140527C20
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertCompletionListEntry(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rtt
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  signed __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  int v24; // [rsp+50h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 360);
  v24 = 0;
  v7 = *(_QWORD *)(v4 + 80);
  v8 = *(_QWORD *)(v4 + 96) >> 2;
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    v9 = (unsigned __int64 *)(*(_QWORD *)(a1 + 360) + 24LL);
    v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = *(_QWORD *)(v7 + 64);
    if ( ((unsigned int)v13 & (unsigned int)(v13 >> 24) & 0xFFFFFF) == 0xFFFFFFLL )
    {
      v14 = v13 & 0xFFFF000000000000uLL;
      **(_DWORD **)(v4 + 88) = a2;
      if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v13 & 0xFFFF000000000000uLL, v13) )
      {
        v15 = *(_QWORD *)(a1 + 360);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 24));
        KeAbPostRelease(v15 + 24);
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 128));
        if ( (v14 & 0xFFFF000000000000uLL) == 0 )
          return 3LL;
        return 1LL;
      }
      v22 = *(_QWORD *)(a1 + 360);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        goto LABEL_24;
      goto LABEL_21;
    }
    if ( (v13 & 0xFFFFFF) >= v8 )
      break;
    v17 = (v13 >> 24) & 0xFFFFFF;
    if ( v17 >= v8 )
      break;
    v18 = v17 + 1;
    v19 = v13 ^ (v13 ^ (((v17 + 1) % v8) << 24)) & 0xFFFFFF000000LL;
    v20 = ((v13 ^ (v13 ^ ((v18 % v8) << 24)) & 0xFFFFFF000000LL) >> 24) & 0xFFFFFF;
    if ( v20 == (((unsigned int)v13 ^ ((unsigned int)v13 ^ ((unsigned int)(v18 % v8) << 24)) & 0xFF000000) & 0xFFFFFF) )
    {
      v23 = *(_QWORD *)(a1 + 360);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        goto LABEL_28;
      goto LABEL_29;
    }
    *(_DWORD *)(*(_QWORD *)(v4 + 88) + 4 * v20) = a2;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v19, v13);
    v22 = *(_QWORD *)(a1 + 360);
    if ( v13 == v21 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 24));
      KeAbPostRelease(v22 + 24);
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 128));
      return 1LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_24:
      ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 24));
LABEL_21:
    KeAbPostRelease(v22 + 24);
    if ( (unsigned int)++v24 >= v8 )
      return 0LL;
  }
  v23 = *(_QWORD *)(a1 + 360);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_28:
    ExfTryToWakePushLock((volatile signed __int64 *)(v23 + 24));
LABEL_29:
  KeAbPostRelease(v23 + 24);
  return 0LL;
}
