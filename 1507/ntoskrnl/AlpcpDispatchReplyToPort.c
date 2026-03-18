/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x1404807F0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // rbp
  __int64 v7; // r12
  __int64 *v8; // r15
  ULONG_PTR v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r9
  char v18; // cl
  int v19; // esi
  signed __int64 BugCheckParameter4; // rcx
  _DWORD *v22; // rbx
  __int64 v23; // r9
  _DWORD *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  struct _KTHREAD *CurrentThread; // r12
  __int16 v29; // cx
  __int16 v30; // cx
  void *v31; // rcx
  __int64 v32; // r9
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r13
  __int64 v38; // rbx
  __int64 v39; // r9
  void *v40; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-68h] BYREF
  int v42; // [rsp+70h] [rbp+8h]
  _DWORD *Object; // [rsp+78h] [rbp+10h]
  unsigned __int64 *Objecta; // [rsp+78h] [rbp+10h]
  __int64 v45; // [rsp+80h] [rbp+18h]

  v4 = a1[1];
  v5 = *a1;
  v42 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v7 = *(_QWORD *)(v4 + 24);
  Object = (_DWORD *)v5;
  if ( ((*(_DWORD *)(v7 + 416) >> 1) & 3) == 1 )
  {
    v8 = *(__int64 **)(v5 + 16);
    v16 = KeAbPreAcquire((ULONG_PTR)(v8 - 2), 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v8 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v8 - 2, v16, (ULONG_PTR)(v8 - 2), v17);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    if ( v5 != v7 )
      goto LABEL_7;
    v13 = *v8;
    v12 = *v8;
  }
  else
  {
    v8 = *(__int64 **)(v7 + 16);
    v9 = (ULONG_PTR)(v8 - 2);
    if ( ((*(_DWORD *)(v7 + 416) >> 1) & 3) != 2 )
    {
      v10 = KeAbPreAcquire(v9, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64(v8 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v8 - 2, v10, (ULONG_PTR)(v8 - 2), v11);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
LABEL_7:
      v12 = v8[1];
      v13 = *v8;
      goto LABEL_8;
    }
    v14 = KeAbPreAcquire(v9, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v8 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v8 - 2, v14, (ULONG_PTR)(v8 - 2), v15);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v13 = v8[2];
    v12 = v13;
  }
LABEL_8:
  if ( (Object[104] & 0x20) != 0 && (Object[64] & 0x1000) == 0
    || (*(_DWORD *)(v7 + 416) & 0x20) != 0 && (*(_DWORD *)(v7 + 256) & 0x1000) == 0 )
  {
    if ( _InterlockedCompareExchange64(v8 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 - 2);
LABEL_88:
    KeAbPostRelease((ULONG_PTR)(v8 - 2));
    AlpcpCancelMessage(Object, v4, 0x10000LL);
    return 3221225527LL;
  }
  if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) > *(_QWORD *)(v13 + 272) )
  {
    if ( _InterlockedCompareExchange64(v8 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 - 2);
    KeAbPostRelease((ULONG_PTR)(v8 - 2));
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v4);
    v18 = *(_BYTE *)(v4 - 32);
    v19 = 0;
    if ( (v18 & 1) != 0 )
    {
      v19 = 0x10000 - *(__int16 *)(v4 - 30);
      *(_WORD *)(v4 - 30) = 0;
      *(_BYTE *)(v4 - 32) = v18 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 - 16));
    KeAbPostRelease(v4 - 16);
    if ( v19 > 0 )
    {
      BugCheckParameter4 = -v19 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), -v19);
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v4, 0x28uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v4);
      }
    }
    return 3221225507LL;
  }
  v22 = (_DWORD *)v12;
  v24 = (_DWORD *)v13;
  if ( !ObReferenceObjectSafe(v13) )
    v24 = 0LL;
  if ( v12 && !ObReferenceObjectSafe(v12) )
    v22 = 0LL;
  if ( !v24 )
  {
    if ( !v22 )
      goto LABEL_86;
    goto LABEL_84;
  }
  if ( !v22 )
  {
    v40 = v24;
LABEL_85:
    ObfDereferenceObject(v40);
LABEL_86:
    if ( _InterlockedCompareExchange64(v8 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 - 2);
    goto LABEL_88;
  }
  if ( (v24[104] & 0x20) != 0 || (v22[104] & 0x20) != 0 )
  {
    ObfDereferenceObject(v24);
LABEL_84:
    v40 = v22;
    goto LABEL_85;
  }
  *(_QWORD *)(v4 + 192) = 0LL;
  if ( *((_WORD *)a1 + 27) == 11 )
  {
    v25 = KeAbPreAcquire(v7 + 352, 0LL, 0LL, v23);
    v27 = v25;
    v45 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 352), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 352), v25, v7 + 352, v26);
      v27 = v45;
    }
    if ( v27 )
      *(_BYTE *)(v27 + 26) |= 1u;
    *(_DWORD *)(v7 + 416) &= ~8u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 352));
    KeAbPostRelease(v7 + 352);
  }
  CurrentThread = KeGetCurrentThread();
  *(_WORD *)(v4 + 226) = *((_WORD *)a1 + 26);
  *(_WORD *)(v4 + 224) = *((_WORD *)a1 + 26) - 40;
  v29 = *((_WORD *)a1 + 27);
  *(_WORD *)(v4 + 228) = v29;
  *(_WORD *)(v4 + 230) = *((_WORD *)a1 + 28);
  *(_OWORD *)(v4 + 232) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
  if ( (v42 & 0x10000) != 0 )
  {
    *(_DWORD *)(v4 + 40) |= 0x200u;
    v30 = v29 & 0xDFFF;
  }
  else
  {
    *(_DWORD *)(v4 + 40) &= ~0x200u;
    v30 = v29 | 0x2000;
  }
  *(_WORD *)(v4 + 228) = v30;
  *(_DWORD *)(v4 + 40) |= 0x10000u;
  _InterlockedOr(v41, 0);
  v31 = *(void **)(v4 + 24);
  if ( v31 )
  {
    if ( (*(_DWORD *)(v4 + 40) & 0x1000) != 0 )
      ObfDereferenceObject(v31);
    *(_QWORD *)(v4 + 24) = 0LL;
  }
  ObfReferenceObject(Object);
  *(_DWORD *)(v4 + 40) |= 0x1000u;
  *(_QWORD *)(v4 + 24) = Object;
  *(_DWORD *)(v4 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v12 + 400));
  *(_QWORD *)(v4 + 120) = *(_QWORD *)(v12 + 56);
  ObfDereferenceObject((PVOID)v12);
  v33 = *(unsigned __int64 **)(v4 + 16);
  Objecta = v33;
  if ( v33 )
  {
    v34 = v33 + 22;
    v35 = KeAbPreAcquire((ULONG_PTR)(v33 + 22), 0LL, 0LL, v32);
    v37 = v35;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
      ExfAcquirePushLockExclusiveEx(v34, v35, (ULONG_PTR)v34, v36);
    if ( v37 )
      *(_BYTE *)(v37 + 26) |= 1u;
    --*((_DWORD *)Objecta + 114);
    *(_DWORD *)(v4 + 40) &= 0xFFFFFFF8;
    *(_QWORD *)(v4 + 16) = 0LL;
    **(_QWORD **)(v4 + 8) = *(_QWORD *)v4;
    *(_QWORD *)(*(_QWORD *)v4 + 8LL) = *(_QWORD *)(v4 + 8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v34, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v34);
    KeAbPostRelease((ULONG_PTR)v34);
    --*(_WORD *)(v4 - 30);
  }
  v38 = KeAbPreAcquire(v13 + 352, 0LL, 0LL, v32);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v13 + 352), v38, v13 + 352, v39);
  if ( v38 )
    *(_BYTE *)(v38 + 26) |= 1u;
  if ( (v42 & 0x20000) != 0 )
  {
    *(_DWORD *)(v4 + 40) &= ~0x100u;
    *(_QWORD *)(v4 + 32) = CurrentThread;
    *(_WORD *)(v4 - 30) += 2;
    _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v4);
  }
  a1[4] = v13;
  a1[2] = (__int64)v8;
  if ( *(_QWORD *)(v4 + 160) )
    *((_DWORD *)a1 + 12) |= 8u;
  AlpcpCompleteDispatchMessage(a1);
  return 0LL;
}
