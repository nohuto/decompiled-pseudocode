/*
 * XREFs of AlpcpDisconnectPort @ 0x1404A3D10
 * Callers:
 *     NtAlpcDisconnectPort @ 0x1404A301C (NtAlpcDisconnectPort.c)
 *     AlpcpDoPortCleanup @ 0x1404A34DC (AlpcpDoPortCleanup.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011311C (AlpcpQueueIoCompletionPort.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404A41F0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpWalkConnectionList @ 0x1404A4F58 (AlpcpWalkConnectionList.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpDisconnectPort(char *Object, char a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  volatile signed __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r14
  __int64 v16; // rsi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  __int64 v20; // r9
  __int64 v21; // rdi
  ULONG_PTR v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r14
  signed __int64 v27; // rax
  volatile signed __int64 *v28; // r14
  __int64 v29; // r9
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r13
  __int64 v34; // r9
  char v35; // cl
  int v36; // r14d
  signed __int64 BugCheckParameter4; // rcx
  __int64 v38; // r9
  _QWORD *v39; // r13
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rcx
  _QWORD *v43; // r13
  _QWORD *v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  __int64 v47; // r9
  _QWORD v48[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v49; // [rsp+70h] [rbp+30h]
  __int64 v50; // [rsp+70h] [rbp+30h]

  v4 = (__int64 *)*((_QWORD *)Object + 2);
  v7 = KeAbPreAcquire((ULONG_PTR)(v4 - 2), 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4 - 4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4 - 2, v7, (ULONG_PTR)(v4 - 2), v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (volatile signed __int64 *)(Object + 352);
  v11 = KeAbPreAcquire((ULONG_PTR)(Object + 352), 0LL, 0LL, v8);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Object + 88, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Object + 44, v11, (ULONG_PTR)(Object + 352), v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( (a2 & 1) != 0 )
    *((_DWORD *)Object + 104) |= 0x80u;
  v14 = *((_DWORD *)Object + 104);
  if ( (v14 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    if ( (_InterlockedExchangeAdd64(v4 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    return 3221225527LL;
  }
  else
  {
    *((_DWORD *)Object + 104) = v14 | 0x20;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
      AlpcpWalkConnectionList(Object);
    if ( ((*((_DWORD *)Object + 104) >> 1) & 3) == 1 )
    {
      v15 = 0LL;
      v16 = 0LL;
    }
    else if ( ((*((_DWORD *)Object + 104) >> 1) & 3) == 2 )
    {
      v15 = *v4;
      v16 = (__int64)Object;
    }
    else
    {
      v15 = v4[2];
      v16 = *v4;
    }
    v49 = v16;
    if ( v15 )
      v15 &= -(__int64)(ObReferenceObjectSafe(v15) != 0);
    if ( v16 )
    {
      v16 &= -(__int64)(ObReferenceObjectSafe(v16) != 0);
      v49 = v16;
    }
    if ( (_InterlockedExchangeAdd64(v4 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    if ( v15 )
    {
      v48[1] = v48;
      v48[0] = v48;
      do
      {
        v17 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v15, (int)v15 + 144, 1, (__int64)v48);
        v18 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v15, (int)v15 + 160, 2, (__int64)v48) | v17;
        v19 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v15, (int)v15 + 184, 3, (__int64)v48) | v18;
      }
      while ( (unsigned int)AlpcpCancelMessagesByRequestor((_DWORD)Object, v15, (int)v15 + 208, 4, (__int64)v48) | v19 );
      ObfDereferenceObject((PVOID)v15);
      v16 = v49;
      while ( 1 )
      {
        v21 = v48[0];
        if ( (_QWORD *)v48[0] == v48 )
          break;
        v48[0] = *(_QWORD *)v48[0];
        v23 = v21 - 80;
        *(_QWORD *)(v48[0] + 8LL) = v48;
        v24 = KeAbPreAcquire(v23 - 16, 0LL, 0LL, v20);
        v26 = v24;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 - 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v23 - 16), v24, v23 - 16, v25);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        *(_BYTE *)(v23 - 32) |= 1u;
        v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 - 24), 0x10000uLL) + 0x10000;
        if ( v27 <= 0 )
          KeBugCheckEx(0x18u, 0LL, v23, 0x26uLL, v27);
        if ( !v16 )
        {
          --*(_WORD *)(v23 - 30);
          goto LABEL_59;
        }
        v28 = (volatile signed __int64 *)(v16 + 352);
        v30 = KeAbPreAcquire(v16 + 352, 0LL, 0LL, v25);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 352), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)(v16 + 352), v30, v16 + 352, v29);
        if ( v30 )
          *(_BYTE *)(v30 + 26) |= 1u;
        if ( (*(_DWORD *)(v16 + 416) & 0x40) != 0 )
        {
          --*(_WORD *)(v23 - 30);
        }
        else
        {
          *(_DWORD *)(v23 + 72) = _InterlockedIncrement((volatile signed __int32 *)Object + 100);
          *(_QWORD *)(v23 + 128) = *((_QWORD *)Object + 7);
          *(_QWORD *)(v23 + 56) = Object;
          *(_QWORD *)(v23 + 64) = v16;
          v31 = KeAbPreAcquire(v16 + 136, 0LL, 0LL, v29);
          v33 = v31;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 136), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 136), v31, v16 + 136, v32);
          if ( v33 )
            *(_BYTE *)(v33 + 26) |= 1u;
          *(_QWORD *)(v23 + 88) = *(_QWORD *)(v16 + 392);
          *(_QWORD *)(v23 + 80) = v16 + 384;
          **(_QWORD **)(v16 + 392) = v23 + 80;
          *(_QWORD *)(v16 + 392) = v23 + 80;
          ++*(_DWORD *)(v16 + 464);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 136));
          KeAbPostRelease(v16 + 136);
          if ( *(_QWORD *)(v16 + 32) )
          {
            AlpcpQueueIoCompletionPort((__int64 *)v16, 0, 1, 0);
            goto LABEL_59;
          }
          if ( (*(_DWORD *)(v16 + 416) & 0x200) != 0 )
          {
            if ( _InterlockedCompareExchange64(v28, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v16 + 352));
            KeAbPostRelease(v16 + 352);
            KeReleaseSemaphoreEx(*(_QWORD *)(v16 + 248), 1, 1, v38, 0);
            goto LABEL_59;
          }
          v39 = (_QWORD *)(v16 + 232);
          if ( (_QWORD *)*v39 != v39 )
          {
            v40 = KeAbPreAcquire(v16 + 224, 0LL, 0LL, v34);
            v42 = v40;
            v50 = v40;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 224), 0LL) )
            {
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 224), v40, v16 + 224, v41);
              v42 = v50;
            }
            if ( v42 )
              *(_BYTE *)(v42 + 26) |= 1u;
            if ( (_QWORD *)*v39 == v39 )
            {
              v43 = 0LL;
            }
            else
            {
              v43 = (_QWORD *)(*v39 - 1768LL);
              v44 = v43 + 221;
              v43[219] = 0LL;
              v45 = v43[221];
              v46 = (_QWORD *)v43[222];
              if ( *(_QWORD **)(v45 + 8) != v43 + 221 || (_QWORD *)*v46 != v44 )
                __fastfail(3u);
              *v46 = v45;
              *(_QWORD *)(v45 + 8) = v46;
              *v44 = 0LL;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 224));
            KeAbPostRelease(v16 + 224);
            if ( v43 )
            {
              if ( _InterlockedCompareExchange64(v28, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v16 + 352));
              KeAbPostRelease(v16 + 352);
              KeReleaseSemaphoreEx((__int64)(v43 + 199), 1, 1, v47, 2);
              goto LABEL_59;
            }
          }
        }
        if ( _InterlockedCompareExchange64(v28, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v16 + 352));
        KeAbPostRelease(v16 + 352);
LABEL_59:
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v23);
        v35 = *(_BYTE *)(v23 - 32);
        v36 = 0;
        if ( (v35 & 1) != 0 )
        {
          v36 = 0x10000 - *(__int16 *)(v23 - 30);
          *(_WORD *)(v23 - 30) = 0;
          *(_BYTE *)(v23 - 32) = v35 & 0xFE;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v23 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v23 - 16));
        KeAbPostRelease(v23 - 16);
        if ( v36 > 0 )
        {
          BugCheckParameter4 = -v36 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 - 24), -v36);
          if ( BugCheckParameter4 <= 0 )
          {
            if ( BugCheckParameter4 )
              KeBugCheckEx(0x18u, 0LL, v23, 0x28uLL, BugCheckParameter4);
            AlpcpDestroyBlob(v23);
          }
        }
      }
    }
    if ( v16 )
      ObfDereferenceObject((PVOID)v16);
    return 0LL;
  }
}
