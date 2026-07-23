/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x140447320
 * Callers:
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x14049F988 (AlpcpDispatchMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x14044A830 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 *v5; // r14
  ULONG_PTR v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rbx
  _DWORD *v13; // rbx
  _DWORD *v14; // rbp
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  struct _KTHREAD *CurrentThread; // r12
  __int16 v18; // cx
  __int16 v19; // cx
  void *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 *v22; // rbp
  _BYTE *v23; // rax
  _BYTE *v24; // r13
  __int64 v25; // rbx
  void *v26; // rcx
  signed __int32 v27[22]; // [rsp+0h] [rbp-58h] BYREF
  int v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+68h] [rbp+10h]
  __int64 v30; // [rsp+68h] [rbp+10h]
  _BYTE *v31; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v28 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(v2 + 24);
  v29 = v3;
  if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) == 1 )
  {
    v5 = *(__int64 **)(v3 + 16);
    v11 = KeAbPreAcquire((ULONG_PTR)(v5 - 2), 0LL, 0);
    if ( _InterlockedCompareExchange64(v5 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v5 - 2, v11, (ULONG_PTR)(v5 - 2));
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    if ( v3 != v4 )
      goto LABEL_7;
    v9 = *v5;
    v8 = *v5;
  }
  else
  {
    v5 = *(__int64 **)(v4 + 16);
    v6 = (ULONG_PTR)(v5 - 2);
    if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) != 2 )
    {
      v7 = KeAbPreAcquire(v6, 0LL, 0);
      if ( _InterlockedCompareExchange64(v5 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v5 - 2, v7, (ULONG_PTR)(v5 - 2));
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
LABEL_7:
      v8 = v5[1];
      v9 = *v5;
      goto LABEL_8;
    }
    v10 = KeAbPreAcquire(v6, 0LL, 0);
    if ( _InterlockedCompareExchange64(v5 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v5 - 2, v10, (ULONG_PTR)(v5 - 2));
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v9 = v5[2];
    v8 = v9;
  }
LABEL_8:
  if ( (*(_DWORD *)(v29 + 416) & 0x20) != 0 && (*(_DWORD *)(v29 + 256) & 0x1000) == 0
    || (*(_DWORD *)(v4 + 416) & 0x20) != 0 && (*(_DWORD *)(v4 + 256) & 0x1000) == 0 )
  {
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
LABEL_78:
    KeAbPostRelease((ULONG_PTR)(v5 - 2));
    AlpcpCancelMessage(v29, v2, 0x10000);
    return 3221225527LL;
  }
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *(_QWORD *)(v9 + 272) )
  {
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
    KeAbPostRelease((ULONG_PTR)(v5 - 2));
    AlpcpUnlockMessage(v2);
    return 3221225507LL;
  }
  v13 = (_DWORD *)v8;
  v14 = (_DWORD *)v9;
  if ( !ObReferenceObjectSafe(v9) )
    v14 = 0LL;
  if ( v8 && !ObReferenceObjectSafe(v8) )
    v13 = 0LL;
  if ( !v14 )
  {
    if ( !v13 )
      goto LABEL_76;
    goto LABEL_74;
  }
  if ( !v13 )
  {
    v26 = v14;
LABEL_75:
    ObfDereferenceObject(v26);
LABEL_76:
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
    goto LABEL_78;
  }
  if ( (v14[104] & 0x20) != 0 || (v13[104] & 0x20) != 0 )
  {
    ObfDereferenceObject(v14);
LABEL_74:
    v26 = v13;
    goto LABEL_75;
  }
  *(_QWORD *)(v2 + 200) = 0LL;
  if ( *(_WORD *)(a1 + 54) == 11 )
  {
    v15 = (_BYTE *)KeAbPreAcquire(v4 + 352, 0LL, 0);
    v16 = v15;
    v31 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 352), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 352), v15, v4 + 352);
      v16 = v31;
    }
    if ( v16 )
      v16[26] |= 1u;
    *(_DWORD *)(v4 + 416) &= ~8u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 352));
    KeAbPostRelease(v4 + 352);
  }
  CurrentThread = KeGetCurrentThread();
  *(_WORD *)(v2 + 234) = *(_WORD *)(a1 + 52);
  *(_WORD *)(v2 + 232) = *(_WORD *)(a1 + 52) - 40;
  v18 = *(_WORD *)(a1 + 54);
  *(_WORD *)(v2 + 236) = v18;
  *(_WORD *)(v2 + 238) = *(_WORD *)(a1 + 56);
  *(_OWORD *)(v2 + 240) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
  if ( (v28 & 0x10000) != 0 )
  {
    *(_DWORD *)(v2 + 40) |= 0x200u;
    v19 = v18 & 0xDFFF;
  }
  else
  {
    *(_DWORD *)(v2 + 40) &= ~0x200u;
    v19 = v18 | 0x2000;
  }
  *(_WORD *)(v2 + 236) = v19;
  *(_DWORD *)(v2 + 40) |= 0x10000u;
  _InterlockedOr(v27, 0);
  v20 = *(void **)(v2 + 24);
  if ( v20 )
  {
    if ( (*(_DWORD *)(v2 + 40) & 0x1000) != 0 )
      ObfDereferenceObject(v20);
    *(_QWORD *)(v2 + 24) = 0LL;
  }
  AlpcpSetOwnerPortMessage(v2, v29);
  *(_DWORD *)(v2 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v8 + 400));
  *(_QWORD *)(v2 + 120) = *(_QWORD *)(v8 + 56);
  ObfDereferenceObject((PVOID)v8);
  v21 = *(_QWORD *)(v2 + 16);
  v30 = v21;
  if ( v21 )
  {
    v22 = (unsigned __int64 *)(v21 + 176);
    v23 = (_BYTE *)KeAbPreAcquire(v21 + 176, 0LL, 0);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      ExfAcquirePushLockExclusiveEx(v22, v23, (ULONG_PTR)v22);
    if ( v24 )
      v24[26] |= 1u;
    --*(_DWORD *)(v30 + 456);
    *(_DWORD *)(v2 + 40) &= 0xFFFFFFF8;
    *(_QWORD *)(v2 + 16) = 0LL;
    **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v22);
    KeAbPostRelease((ULONG_PTR)v22);
    --*(_WORD *)(v2 - 30);
  }
  v25 = KeAbPreAcquire(v9 + 352, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v9 + 352), v25, v9 + 352);
  if ( v25 )
    *(_BYTE *)(v25 + 26) |= 1u;
  if ( (v28 & 0x20000) != 0 )
  {
    *(_DWORD *)(v2 + 40) &= ~0x100u;
    *(_QWORD *)(v2 + 32) = CurrentThread;
    *(_WORD *)(v2 - 30) += 2;
    _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v2);
  }
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 16) = v5;
  if ( *(_QWORD *)(v2 + 160) )
    *(_DWORD *)(a1 + 48) |= 8u;
  AlpcpCompleteDispatchMessage(a1);
  return 0LL;
}
