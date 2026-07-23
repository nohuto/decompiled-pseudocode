/*
 * XREFs of AlpcpCancelMessage @ 0x140407A54
 * Callers:
 *     AlpcpFlushQueue @ 0x140409680 (AlpcpFlushQueue.c)
 *     AlpcpReceiveSynchronousReply @ 0x140446B10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToPort @ 0x140447320 (AlpcpDispatchReplyToPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x14049D4E0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14049E040 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404C2304 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x1404CED48 (NtAlpcCancelMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpTransferQuotaMessage @ 0x1404080D0 (AlpcpTransferQuotaMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140408128 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140408154 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1404081E0 (AlpcpRemoveMessageFromPendingQueue.c)
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404B4724 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1404C263C (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpRemoveMessagePort @ 0x1404CF4B4 (AlpcpRemoveMessagePort.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // eax
  int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r12
  int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r13d
  int v13; // ecx
  char v14; // al
  __int64 *v15; // r14
  __int64 v16; // rbp
  signed __int64 *v17; // rbp
  __int64 *v18; // r12
  __int64 v19; // rbp
  __int64 *v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rdx
  unsigned int v23; // r15d
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r14
  int v28; // eax
  volatile signed __int64 *v29; // rbp
  _BYTE *v30; // rax
  _BYTE *v31; // r14
  _BYTE *v32; // rax
  _BYTE *v33; // r14
  int v34; // eax
  signed __int32 v36[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v37; // [rsp+80h] [rbp+8h]
  __int64 v38; // [rsp+88h] [rbp+10h]

  v3 = *(_DWORD *)(a2 + 40);
  v6 = a3;
  v7 = v3 & 7;
  v8 = *(_QWORD *)(a2 + 16);
  v9 = (unsigned __int8)v3 >> 7;
  v38 = v8;
  v10 = 0LL;
  v37 = v3 & 7;
  v11 = 0LL;
  v12 = 0;
  v13 = ((*(_DWORD *)(a1 + 416) >> 1) & 3) - 1;
  if ( v13 )
  {
    v14 = v3 & 0x78;
    if ( v13 == 1 )
    {
      LOBYTE(v12) = v14 == 16;
      if ( v9 )
        goto LABEL_54;
      v18 = *(__int64 **)(a1 + 16);
      v19 = KeAbPreAcquire((ULONG_PTR)(v18 - 2), 0LL, 0);
      if ( _InterlockedCompareExchange64(v18 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v18 - 2, v19, (ULONG_PTR)(v18 - 2));
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v12 )
        {
          v10 = *v18;
          v11 = v18[1];
        }
        else
        {
          v10 = a1;
          v11 = a1;
        }
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
        if ( v11 )
          v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
      }
      if ( _InterlockedCompareExchange64(v18 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18 - 2);
      KeAbPostRelease((ULONG_PTR)(v18 - 2));
      v8 = v38;
    }
    else
    {
      LOBYTE(v12) = v14 == 8;
      if ( v9 )
        goto LABEL_54;
      v15 = *(__int64 **)(a1 + 16);
      v16 = KeAbPreAcquire((ULONG_PTR)(v15 - 2), 0LL, 0);
      if ( _InterlockedCompareExchange64(v15 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v15 - 2, v16, (ULONG_PTR)(v15 - 2));
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v12 )
        {
          v10 = v15[2];
          v11 = v10;
        }
        else
        {
          v10 = *v15;
          v11 = v15[1];
        }
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
        if ( v11 )
          v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
      }
      v17 = v15 - 2;
      if ( _InterlockedCompareExchange64(v15 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v17);
      KeAbPostRelease((ULONG_PTR)v17);
    }
    v7 = v37;
    v6 = a3;
  }
  else
  {
    LOBYTE(v12) = (v3 & 0x78) == 8;
    if ( !v9 )
    {
      if ( v8 )
      {
        v20 = *(__int64 **)(a2 + 184);
        if ( v20 )
        {
          v21 = KeAbPreAcquire((ULONG_PTR)(v20 - 2), 0LL, 0);
          if ( _InterlockedCompareExchange64(v20 - 2, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)v20 - 2, v21, (ULONG_PTR)(v20 - 2));
          if ( v21 )
            *(_BYTE *)(v21 + 26) |= 1u;
          if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
          {
            if ( v12 )
            {
              v10 = v20[2];
              v11 = v10;
            }
            else
            {
              v10 = *v20;
              v11 = v20[1];
            }
            if ( v10 )
              v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
            if ( v11 )
              v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
          }
          if ( _InterlockedCompareExchange64(v20 - 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v20 - 2);
          KeAbPostRelease((ULONG_PTR)(v20 - 2));
          v7 = v37;
          v6 = a3;
        }
      }
    }
  }
LABEL_54:
  if ( !v12 )
  {
    if ( v8 && ((_DWORD)v7 != 3 || (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    {
      v22 = 0LL;
      v23 = 0;
    }
    else
    {
      v22 = 1LL;
      v23 = 1073741870;
    }
    if ( (v6 & 1) != 0 && (_DWORD)v22 )
      goto LABEL_110;
LABEL_69:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 236) = 0;
    *(_WORD *)(a2 + 236) |= 0xCu;
    *(_DWORD *)(a2 + 232) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v22, v7);
    *(_WORD *)(a2 + 236) &= ~0x2000u;
    *(_DWORD *)(a2 + 40) |= 0x10200u;
    _InterlockedOr(v36, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v25 = *(_QWORD *)(a2 + 208);
    if ( v25 )
    {
      PsReleaseProcessWakeCounter(v25, *(unsigned int *)(a2 + 256));
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v26 = *(_QWORD *)(a2 + 32);
    if ( v26 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v26 + 1744), 0LL) == a2 )
      {
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_WORD *)(a2 - 30) -= 2;
        KeReleaseSemaphoreEx(v26 + 1600, 1u, 1, v24, 2);
      }
    }
    else if ( v10 && v11 )
    {
      if ( !v12 && (v6 & 2) == 0 )
      {
LABEL_107:
        v34 = *(_DWORD *)(a2 + 40);
        if ( (v34 & 0x4000) != 0 && (v34 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2);
        goto LABEL_110;
      }
      v27 = KeAbPreAcquire(v10 + 352, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v10 + 352), v27, v10 + 352);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      if ( (*(_DWORD *)(v10 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v10 + 352));
        KeAbPostRelease(v10 + 352);
      }
      else
      {
        *(_QWORD *)(a2 + 64) = v10;
        *(_QWORD *)(a2 + 56) = v11;
        ++*(_WORD *)(a2 - 30);
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v11 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v11 + 56);
        AlpcpInsertMessageCanceledQueue(v10, a2);
        AlpcpSignalPortAndUnlock(v10);
      }
      v6 = a3;
    }
    if ( v12 && (v6 & 0x10000) != 0 && v8 )
    {
      v28 = *(_DWORD *)(a2 + 40) & 7;
      if ( v28 == 3 )
      {
        AlpcpRemoveMessageFromPendingQueue(a2);
      }
      else
      {
        if ( v28 == 4 )
        {
          v29 = (volatile signed __int64 *)(v8 + 200);
          v30 = (_BYTE *)KeAbPreAcquire(v8 + 200, 0LL, 0);
          v31 = v30;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 200), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 200), v30, v8 + 200);
          if ( v31 )
            v31[26] |= 1u;
          --*(_DWORD *)(v8 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v29 = (volatile signed __int64 *)(v8 + 136);
          v32 = (_BYTE *)KeAbPreAcquire(v8 + 136, 0LL, 0);
          v33 = v32;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 136), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 136), v32, v8 + 136);
          if ( v33 )
            v33[26] |= 1u;
          AlpcpRemoveMessagePort(v8, a2);
        }
        if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v29);
        KeAbPostRelease((ULONG_PTR)v29);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_107;
  }
  if ( !v8 || (_DWORD)v7 != 3 || (v22 = 1LL, (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    v22 = 0LL;
  v23 = 259;
  if ( (v6 & 1) == 0 || (_DWORD)v22 )
    goto LABEL_69;
LABEL_110:
  *(_DWORD *)(a2 + 40) &= ~0x10000u;
  AlpcpUnlockMessage(a2);
  if ( v10 )
    ObfDereferenceObject((PVOID)v10);
  if ( v11 )
    ObfDereferenceObject((PVOID)v11);
  return v23;
}
