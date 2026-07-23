/*
 * XREFs of AlpcpInsertCompletionListEntry @ 0x1404A70A0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertCompletionListEntry(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 *v7; // r14
  _BYTE *v8; // rax
  _BYTE *v9; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rtt
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  signed __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  int v21; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 360);
  v21 = 0;
  v5 = *(_QWORD *)(v2 + 80);
  v6 = *(_QWORD *)(v2 + 96) >> 2;
  if ( !v6 )
    return 0LL;
  while ( 1 )
  {
    v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 360) + 24LL);
    v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
    if ( v9 )
      v9[26] |= 1u;
    v10 = *(_QWORD *)(v5 + 64);
    if ( ((unsigned int)v10 & (unsigned int)(v10 >> 24) & 0xFFFFFF) == 0xFFFFFFLL )
    {
      v11 = v10 & 0xFFFF000000000000uLL;
      **(_DWORD **)(v2 + 88) = a2;
      if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 64), v10 & 0xFFFF000000000000uLL, v10) )
      {
        v12 = *(_QWORD *)(a1 + 360);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 24));
        KeAbPostRelease(v12 + 24);
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 128));
        if ( (v11 & 0xFFFF000000000000uLL) == 0 )
          return 3LL;
        return 1LL;
      }
      v19 = *(_QWORD *)(a1 + 360);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        goto LABEL_24;
      goto LABEL_21;
    }
    if ( (v10 & 0xFFFFFF) >= v6 )
      break;
    v14 = (v10 >> 24) & 0xFFFFFF;
    if ( v14 >= v6 )
      break;
    v15 = v14 + 1;
    v16 = v10 ^ (v10 ^ (((v14 + 1) % v6) << 24)) & 0xFFFFFF000000LL;
    v17 = ((v10 ^ (v10 ^ ((v15 % v6) << 24)) & 0xFFFFFF000000LL) >> 24) & 0xFFFFFF;
    if ( v17 == (((unsigned int)v10 ^ ((unsigned int)v10 ^ ((unsigned int)(v15 % v6) << 24)) & 0xFF000000) & 0xFFFFFF) )
    {
      v20 = *(_QWORD *)(a1 + 360);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        goto LABEL_28;
      goto LABEL_29;
    }
    *(_DWORD *)(*(_QWORD *)(v2 + 88) + 4 * v17) = a2;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 64), v16, v10);
    v19 = *(_QWORD *)(a1 + 360);
    if ( v10 == v18 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v19 + 24));
      KeAbPostRelease(v19 + 24);
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 128));
      return 1LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_24:
      ExfTryToWakePushLock((volatile signed __int64 *)(v19 + 24));
LABEL_21:
    KeAbPostRelease(v19 + 24);
    if ( (unsigned int)++v21 >= v6 )
      return 0LL;
  }
  v20 = *(_QWORD *)(a1 + 360);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_28:
    ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 24));
LABEL_29:
  KeAbPostRelease(v20 + 24);
  return 0LL;
}
