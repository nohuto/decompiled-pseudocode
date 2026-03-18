/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x14042C0B0
 * Callers:
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x14047E334 (AlpcpDispatchMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x140480024 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r12
  __int64 v4; // r14
  int v5; // eax
  __int64 *v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rbp
  _DWORD *v10; // rbx
  _DWORD *v11; // r13
  struct _KTHREAD *CurrentThread; // rdx
  int v13; // r14d
  __int16 v14; // cx
  __int16 v15; // cx
  void *v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 *v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rbx
  ULONG_PTR v27; // rcx
  void *v28; // rcx
  signed __int32 v29[22]; // [rsp+0h] [rbp-58h] BYREF
  int v30; // [rsp+60h] [rbp+8h]
  __int64 *v31; // [rsp+68h] [rbp+10h]
  struct _KTHREAD *v32; // [rsp+70h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)a1;
  v30 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(v1 + 24);
  v5 = (*(_DWORD *)(v4 + 416) >> 1) & 3;
  if ( v5 == 2 )
  {
    v6 = *(__int64 **)(v4 + 16);
    v31 = v6;
    v7 = KeAbPreAcquire((ULONG_PTR)(v6 - 2), 0LL, 0LL);
    if ( _InterlockedCompareExchange64(v6 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v6 - 2, v7, (ULONG_PTR)(v6 - 2));
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    v8 = v6[2];
LABEL_7:
    v9 = v8;
    goto LABEL_8;
  }
  if ( v5 == 1 )
  {
    v6 = *(__int64 **)(v2 + 16);
    v31 = v6;
    v26 = KeAbPreAcquire((ULONG_PTR)(v6 - 2), 0LL, 0LL);
    if ( _InterlockedCompareExchange64(v6 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v6 - 2, v26, (ULONG_PTR)(v6 - 2));
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    v8 = *v6;
    if ( v2 == v4 )
      goto LABEL_7;
    v9 = v6[1];
  }
  else
  {
    v6 = *(__int64 **)(v4 + 16);
    v31 = v6;
    v22 = KeAbPreAcquire((ULONG_PTR)(v6 - 2), 0LL, 0LL);
    if ( _InterlockedCompareExchange64(v6 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v6 - 2, v22, (ULONG_PTR)(v6 - 2));
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    v8 = *v6;
    v9 = v6[1];
  }
LABEL_8:
  if ( (*(_DWORD *)(v2 + 416) & 0x20) != 0 && (*(_DWORD *)(v2 + 256) & 0x1000) == 0
    || (*(_DWORD *)(v4 + 416) & 0x20) != 0 && (*(_DWORD *)(v4 + 256) & 0x1000) == 0 )
  {
    if ( _InterlockedCompareExchange64(v6 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6 - 2);
    v27 = (ULONG_PTR)(v6 - 2);
LABEL_85:
    KeAbPostRelease(v27);
    AlpcpCancelMessage(v2, v1, 0x10000LL);
    return 3221225527LL;
  }
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) <= *(_QWORD *)(v8 + 272) )
  {
    v10 = (_DWORD *)v9;
    v11 = (_DWORD *)v8;
    if ( !ObReferenceObjectSafe(v8) )
      v11 = 0LL;
    if ( v9 && !ObReferenceObjectSafe(v9) )
      v10 = 0LL;
    if ( v11 )
    {
      if ( !v10 )
      {
        v28 = v11;
LABEL_81:
        ObfDereferenceObject(v28);
        goto LABEL_82;
      }
      if ( (v11[104] & 0x20) == 0 && (v10[104] & 0x20) == 0 )
      {
        *(_QWORD *)(v1 + 192) = 0LL;
        if ( *(_WORD *)(a1 + 54) == 11 )
        {
          v23 = KeAbPreAcquire(v4 + 352, 0LL, 0LL);
          v24 = (unsigned __int64 *)(v4 + 352);
          v25 = v23;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 352), 0LL) )
          {
            ExfAcquirePushLockExclusiveEx(v24, v23, v4 + 352);
            v24 = (unsigned __int64 *)(v4 + 352);
          }
          if ( v25 )
            *(_BYTE *)(v25 + 26) |= 1u;
          *(_DWORD *)(v4 + 416) &= ~8u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock((volatile signed __int64 *)v24);
            v24 = (unsigned __int64 *)(v4 + 352);
          }
          KeAbPostRelease((ULONG_PTR)v24);
        }
        CurrentThread = KeGetCurrentThread();
        v13 = v30;
        *(_WORD *)(v1 + 226) = *(_WORD *)(a1 + 52);
        v32 = CurrentThread;
        *(_WORD *)(v1 + 224) = *(_WORD *)(a1 + 52) - 40;
        v14 = *(_WORD *)(a1 + 54);
        *(_WORD *)(v1 + 228) = v14;
        *(_WORD *)(v1 + 230) = *(_WORD *)(a1 + 56);
        *(_OWORD *)(v1 + 232) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
        if ( (v30 & 0x10000) != 0 )
        {
          *(_DWORD *)(v1 + 40) |= 0x200u;
          v15 = v14 & 0xDFFF;
        }
        else
        {
          *(_DWORD *)(v1 + 40) &= ~0x200u;
          v15 = v14 | 0x2000;
        }
        *(_WORD *)(v1 + 228) = v15;
        *(_DWORD *)(v1 + 40) |= 0x10000u;
        _InterlockedOr(v29, 0);
        v16 = *(void **)(v1 + 24);
        if ( v16 )
        {
          if ( (*(_DWORD *)(v1 + 40) & 0x1000) != 0 )
            ObfDereferenceObject(v16);
          *(_QWORD *)(v1 + 24) = 0LL;
        }
        if ( (_bittest((const signed __int32 *)(v2 + 416), 0xDu) & _bittest((const signed __int32 *)(v1 + 40), 9u)) != 0 )
        {
          AlpcpSetOwnerPortMessage(v1, v2, 0LL);
        }
        else
        {
          ObfReferenceObject((PVOID)v2);
          *(_DWORD *)(v1 + 40) |= 0x1000u;
          *(_QWORD *)(v1 + 24) = v2;
        }
        *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v9 + 400));
        *(_QWORD *)(v1 + 120) = *(_QWORD *)(v9 + 56);
        ObfDereferenceObject((PVOID)v9);
        v17 = *(_QWORD *)(v1 + 16);
        if ( v17 )
        {
          v18 = KeAbPreAcquire(v17 + 176, 0LL, 0LL);
          v19 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 176), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v17 + 176), v18, v17 + 176);
          if ( v19 )
            *(_BYTE *)(v19 + 26) |= 1u;
          --*(_DWORD *)(v17 + 456);
          *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(v1 + 16) = 0LL;
          **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
          *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 176));
          KeAbPostRelease(v17 + 176);
          --*(_WORD *)(v1 - 30);
          v13 = v30;
        }
        v20 = KeAbPreAcquire(v8 + 352, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)(v8 + 352), v20, v8 + 352);
        if ( v20 )
          *(_BYTE *)(v20 + 26) |= 1u;
        if ( (v13 & 0x20000) != 0 )
        {
          *(_DWORD *)(v1 + 40) &= ~0x100u;
          *(_QWORD *)(v1 + 32) = v32;
          *(_WORD *)(v1 - 30) += 2;
          _InterlockedExchange64((volatile __int64 *)&v32[1].RelativeTimerBias, v1);
        }
        *(_QWORD *)(a1 + 16) = v31;
        *(_QWORD *)(a1 + 32) = v8;
        if ( *(_QWORD *)(v1 + 160) )
          *(_DWORD *)(a1 + 48) |= 8u;
        AlpcpCompleteDispatchMessage(a1);
        return 0LL;
      }
      ObfDereferenceObject(v11);
    }
    else if ( !v10 )
    {
LABEL_82:
      if ( _InterlockedCompareExchange64(v31 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v31 - 2);
      v27 = (ULONG_PTR)(v31 - 2);
      goto LABEL_85;
    }
    v28 = v10;
    goto LABEL_81;
  }
  if ( _InterlockedCompareExchange64(v6 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6 - 2);
  KeAbPostRelease((ULONG_PTR)(v6 - 2));
  AlpcpUnlockMessage(v1);
  return 3221225507LL;
}
