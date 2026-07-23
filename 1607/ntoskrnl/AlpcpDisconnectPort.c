/*
 * XREFs of AlpcpDisconnectPort @ 0x140408EAC
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140409A64 (AlpcpDoPortCleanup.c)
 *     NtAlpcDisconnectPort @ 0x1404BADEC (NtAlpcDisconnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040924C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404B4724 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpWalkConnectionList @ 0x1404BF8D8 (AlpcpWalkConnectionList.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1404C263C (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpDisconnectPort(char *Object, char a2)
{
  __int64 *v2; // r13
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  __int64 v7; // r15
  volatile signed __int64 *v8; // rdi
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  int v11; // eax
  __int64 v12; // rsi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  __int64 v16; // rdi
  ULONG_PTR v18; // rdi
  __int64 v19; // r13
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h]

  v2 = (__int64 *)*((_QWORD *)Object + 2);
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v2 - 2), 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2 - 4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2 - 2, v5, (ULONG_PTR)(v2 - 2));
  v7 = 0LL;
  if ( v6 )
    v6[26] |= 1u;
  v8 = (volatile signed __int64 *)(Object + 352);
  v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(Object + 352), 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Object + 88, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Object + 44, v9, (ULONG_PTR)(Object + 352));
  if ( v10 )
    v10[26] |= 1u;
  if ( (a2 & 1) != 0 )
    *((_DWORD *)Object + 104) |= 0x80u;
  v11 = *((_DWORD *)Object + 104);
  if ( (v11 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    return 3221225527LL;
  }
  else
  {
    *((_DWORD *)Object + 104) = v11 | 0x20;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
      AlpcpWalkConnectionList(Object);
    if ( ((*((_DWORD *)Object + 104) >> 1) & 3) == 1 )
    {
      v12 = 0LL;
    }
    else if ( ((*((_DWORD *)Object + 104) >> 1) & 3) == 2 )
    {
      v7 = *v2;
      v12 = (__int64)Object;
    }
    else
    {
      v7 = v2[2];
      v12 = *v2;
    }
    v21 = v12;
    if ( v7 )
      v7 &= -(__int64)(ObReferenceObjectSafe(v7) != 0);
    if ( v12 )
    {
      v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
      v21 = v12;
    }
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    if ( v7 )
    {
      v20[1] = v20;
      v20[0] = v20;
      do
      {
        v13 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v7, (int)v7 + 144, 1, (__int64)v20);
        v14 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v7, (int)v7 + 160, 2, (__int64)v20) | v13;
        v15 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v7, (int)v7 + 184, 3, (__int64)v20) | v14;
      }
      while ( (unsigned int)AlpcpCancelMessagesByRequestor((_DWORD)Object, v7, (int)v7 + 208, 4, (__int64)v20) | v15 );
      ObfDereferenceObject((PVOID)v7);
      v12 = v21;
      while ( 1 )
      {
        v16 = v20[0];
        if ( (_QWORD *)v20[0] == v20 )
          break;
        v20[0] = *(_QWORD *)v20[0];
        v18 = v16 - 80;
        *(_QWORD *)(v20[0] + 8LL) = v20;
        AlpcpLockForCachedReferenceBlob(v18);
        if ( v21 )
        {
          v19 = KeAbPreAcquire(v21 + 352, 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 352), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)(v21 + 352), v19, v21 + 352);
          if ( v19 )
            *(_BYTE *)(v19 + 26) |= 1u;
          if ( (*(_DWORD *)(v21 + 416) & 0x40) != 0 )
          {
            --*(_WORD *)(v18 - 30);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 352), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v21 + 352));
            KeAbPostRelease(v21 + 352);
          }
          else
          {
            *(_DWORD *)(v18 + 72) = _InterlockedIncrement((volatile signed __int32 *)Object + 100);
            *(_QWORD *)(v18 + 128) = *((_QWORD *)Object + 7);
            *(_QWORD *)(v18 + 56) = Object;
            *(_QWORD *)(v18 + 64) = v21;
            AlpcpInsertMessageCanceledQueue(v21, v18);
            AlpcpSignalPortAndUnlock(v21);
          }
        }
        else
        {
          --*(_WORD *)(v18 - 30);
        }
        AlpcpUnlockMessage(v18);
      }
    }
    if ( v12 )
      ObfDereferenceObject((PVOID)v12);
    return 0LL;
  }
}
