/*
 * XREFs of AlpcpCancelMessage @ 0x1404815E0
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x140423610 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14042C0B0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReceiveSynchronousReply @ 0x14042EF50 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushQueue @ 0x14047F078 (AlpcpFlushQueue.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcCancelMessage @ 0x1404834A8 (NtAlpcCancelMessage.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404BB744 (AlpcpFlushMessagesByRequestor.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     PsReleaseProcessWakeCounter @ 0x1403E967C (PsReleaseProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpTransferQuotaMessage @ 0x140481BA4 (AlpcpTransferQuotaMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140481BFC (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140481C28 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140481CB4 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpRemoveMessagePort @ 0x1404832A8 (AlpcpRemoveMessagePort.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404832E0 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1404833FC (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // eax
  unsigned int v4; // r15d
  int v6; // r14d
  int v8; // edx
  __int64 v9; // rbp
  int v10; // r13d
  char v11; // al
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r12d
  int v15; // ecx
  __int64 *v16; // r15
  __int64 v17; // rbp
  signed __int64 *v18; // rbp
  ULONG_PTR v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 *v27; // r14
  __int64 v28; // rbp
  __int64 v29; // r14
  unsigned __int64 *v30; // rbp
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 *v35; // r14
  __int64 v36; // rbp
  signed __int32 v37[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v39; // [rsp+88h] [rbp+10h]

  v3 = *(_DWORD *)(a2 + 40);
  v4 = 0;
  v6 = a3;
  v8 = (unsigned __int8)v3 >> 7;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = v3 & 7;
  v11 = v3 & 0x78;
  v39 = v9;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = ((*(_DWORD *)(a1 + 416) >> 1) & 3) - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      LOBYTE(v14) = v11 == 16;
      if ( v8 )
        goto LABEL_15;
      v16 = *(__int64 **)(a1 + 16);
      v17 = KeAbPreAcquire((ULONG_PTR)(v16 - 2), 0LL, 0LL);
      if ( _InterlockedCompareExchange64(v16 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v16 - 2, v17, (ULONG_PTR)(v16 - 2));
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v14 )
        {
          v12 = *v16;
          v13 = v16[1];
        }
        else
        {
          v13 = a1;
          v12 = a1;
        }
        if ( v12 )
          v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
        if ( v13 )
          v13 &= -(__int64)(ObReferenceObjectSafe(v13) != 0);
      }
      v18 = v16 - 2;
      v4 = 0;
      goto LABEL_10;
    }
    LOBYTE(v14) = v11 == 8;
    if ( !v8 )
    {
      v35 = *(__int64 **)(a1 + 16);
      v36 = KeAbPreAcquire((ULONG_PTR)(v35 - 2), 0LL, 0LL);
      if ( _InterlockedCompareExchange64(v35 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v35 - 2, v36, (ULONG_PTR)(v35 - 2));
      v4 = 0;
      if ( v36 )
        *(_BYTE *)(v36 + 26) |= 1u;
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v14 )
        {
          v12 = v35[2];
          v13 = v12;
        }
        else
        {
          v12 = *v35;
          v13 = v35[1];
        }
        if ( v12 )
          v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
        if ( v13 )
          v13 &= -(__int64)(ObReferenceObjectSafe(v13) != 0);
      }
      v18 = v35 - 2;
LABEL_10:
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      v19 = (ULONG_PTR)v18;
      goto LABEL_13;
    }
  }
  else
  {
    LOBYTE(v14) = v11 == 8;
    if ( !v8 )
    {
      v27 = *(__int64 **)(a2 + 176);
      if ( !v27 )
        goto LABEL_14;
      v28 = KeAbPreAcquire((ULONG_PTR)(v27 - 2), 0LL, 0LL);
      if ( _InterlockedCompareExchange64(v27 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v27 - 2, v28, (ULONG_PTR)(v27 - 2));
      v4 = 0;
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v14 )
        {
          v12 = v27[2];
          v13 = v12;
        }
        else
        {
          v12 = *v27;
          v13 = v27[1];
        }
        if ( v12 )
          v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
        if ( v13 )
          v13 &= -(__int64)(ObReferenceObjectSafe(v13) != 0);
      }
      if ( _InterlockedCompareExchange64(v27 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v27 - 2);
      v19 = (ULONG_PTR)(v27 - 2);
LABEL_13:
      KeAbPostRelease(v19);
      v9 = v39;
LABEL_14:
      v6 = a3;
    }
  }
LABEL_15:
  if ( !v14 )
  {
    if ( v9 && (v10 != 3 || (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    {
      v20 = 0LL;
    }
    else
    {
      v20 = 1LL;
      v4 = 1073741870;
    }
    if ( (v6 & 1) != 0 && (_DWORD)v20 )
      goto LABEL_30;
LABEL_20:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 228) = 0;
    *(_WORD *)(a2 + 228) |= 0xCu;
    *(_DWORD *)(a2 + 224) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v20);
    *(_WORD *)(a2 + 228) &= ~0x2000u;
    *(_DWORD *)(a2 + 40) |= 0x10200u;
    _InterlockedOr(v37, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v22 = *(_QWORD *)(a2 + 200);
    if ( v22 )
    {
      PsReleaseProcessWakeCounter(v22, *(unsigned int *)(a2 + 248));
      *(_QWORD *)(a2 + 200) = 0LL;
    }
    v23 = *(_QWORD *)(a2 + 32);
    if ( v23 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v23 + 1744), 0LL) == a2 )
      {
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_WORD *)(a2 - 30) -= 2;
        KeReleaseSemaphoreEx(v23 + 1592, 1, 1LL, v21, 2);
      }
    }
    else if ( v12 && v13 )
    {
      if ( !v14 && (v6 & 2) == 0 )
      {
LABEL_29:
        v25 = *(_DWORD *)(a2 + 40);
        if ( (v25 & 0x4000) != 0 && (v25 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2);
        goto LABEL_30;
      }
      v29 = KeAbPreAcquire(v12 + 352, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v12 + 352), v29, v12 + 352);
      if ( v29 )
        *(_BYTE *)(v29 + 26) |= 1u;
      if ( (*(_DWORD *)(v12 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
        KeAbPostRelease(v12 + 352);
      }
      else
      {
        *(_QWORD *)(a2 + 64) = v12;
        *(_QWORD *)(a2 + 56) = v13;
        ++*(_WORD *)(a2 - 30);
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v13 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v13 + 56);
        AlpcpInsertMessageCanceledQueue(v12, a2);
        AlpcpSignalPortAndUnlock(v12);
      }
      v6 = a3;
      v9 = v39;
    }
    if ( v14 && (v6 & 0x10000) != 0 && v9 )
    {
      v24 = *(_DWORD *)(a2 + 40) & 7;
      if ( v24 == 3 )
      {
        AlpcpRemoveMessageFromPendingQueue(a2);
      }
      else
      {
        if ( v24 == 4 )
        {
          v30 = (unsigned __int64 *)(a1 + 200);
          v33 = KeAbPreAcquire(a1 + 200, 0LL, 0LL);
          v34 = v33;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 200), 0LL) )
            ExfAcquirePushLockExclusiveEx(v30, v33, (ULONG_PTR)v30);
          if ( v34 )
            *(_BYTE *)(v34 + 26) |= 1u;
          --*(_DWORD *)(a1 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v30 = (unsigned __int64 *)(v9 + 136);
          v31 = KeAbPreAcquire((ULONG_PTR)v30, 0LL, 0LL);
          v32 = v31;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
            ExfAcquirePushLockExclusiveEx(v30, v31, (ULONG_PTR)v30);
          if ( v32 )
            *(_BYTE *)(v32 + 26) |= 1u;
          AlpcpRemoveMessagePort(v39, a2);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v30);
        KeAbPostRelease((ULONG_PTR)v30);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_29;
  }
  if ( !v9 || v10 != 3 || (v20 = 1LL, (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    v20 = 0LL;
  v4 = 259;
  if ( (v6 & 1) == 0 || (_DWORD)v20 )
    goto LABEL_20;
LABEL_30:
  *(_DWORD *)(a2 + 40) &= ~0x10000u;
  AlpcpUnlockMessage(a2);
  if ( v12 )
    ObfDereferenceObject((PVOID)v12);
  if ( v13 )
    ObfDereferenceObject((PVOID)v13);
  return v4;
}
