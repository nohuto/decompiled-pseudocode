/*
 * XREFs of AlpcpCancelMessage @ 0x14052BBC4
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404760D0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1404807F0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpFlushQueue @ 0x1404A3A20 (AlpcpFlushQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14052B804 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x14052BA0C (NtAlpcCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011311C (AlpcpQueueIoCompletionPort.c)
 *     PsTransferProcessQuotaToSharedQuota @ 0x14014C840 (PsTransferProcessQuotaToSharedQuota.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14052C618 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  int v3; // eax
  ULONG_PTR v4; // rbp
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // edx
  int v10; // r13d
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // r15
  int v14; // r12d
  int v15; // ecx
  __int64 *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r9
  ULONG_PTR v19; // rcx
  __int64 *v20; // r12
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 *v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned int v27; // r13d
  __int64 v28; // r9
  void *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  PVOID v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rbp
  char v35; // al
  __int64 v36; // rcx
  volatile signed __int64 *v37; // rbp
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // r9
  __int64 v44; // r9
  _QWORD *v45; // r13
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // r12
  _QWORD *v49; // r13
  _QWORD *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // r9
  int v54; // eax
  __int64 v55; // r13
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // r14
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 v68; // r14
  char v69; // cl
  int v70; // eax
  signed __int64 BugCheckParameter4; // rcx
  signed __int32 v73[8]; // [rsp+0h] [rbp-98h] BYREF
  int v74; // [rsp+A0h] [rbp+8h]
  int v75; // [rsp+A8h] [rbp+10h]
  __int64 v77; // [rsp+B8h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 40);
  LODWORD(v4) = 0;
  v7 = a3;
  v8 = *(_QWORD *)(a2 + 16);
  v9 = (unsigned __int8)v3 >> 7;
  v10 = v3 & 7;
  v11 = v3 & 0x78;
  v77 = v8;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = ((*(_DWORD *)(a1 + 416) >> 1) & 3) - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      LOBYTE(v14) = v11 == 16;
      v75 = v14;
      if ( v9 )
        goto LABEL_55;
      v20 = *(__int64 **)(a1 + 16);
      v21 = KeAbPreAcquire((ULONG_PTR)(v20 - 2), 0LL, 0LL, v7);
      if ( _InterlockedCompareExchange64(v20 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v20 - 2, v21, (ULONG_PTR)(v20 - 2), v22);
      LODWORD(v4) = 0;
      if ( v21 )
        *(_BYTE *)(v21 + 26) |= 1u;
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v75 )
        {
          v12 = *v20;
          v13 = v20[1];
        }
        else
        {
          v12 = a1;
          v13 = a1;
        }
        if ( v12 )
          v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
        if ( v13 )
          v13 &= -(__int64)(ObReferenceObjectSafe(v13) != 0);
      }
      if ( _InterlockedCompareExchange64(v20 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20 - 2);
      KeAbPostRelease((ULONG_PTR)(v20 - 2));
      v14 = v75;
      goto LABEL_54;
    }
    LOBYTE(v14) = v11 == 8;
    v75 = v14;
    if ( v9 )
      goto LABEL_55;
    v16 = *(__int64 **)(a1 + 16);
    v17 = KeAbPreAcquire((ULONG_PTR)(v16 - 2), 0LL, 0LL, v7);
    if ( _InterlockedCompareExchange64(v16 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v16 - 2, v17, (ULONG_PTR)(v16 - 2), v18);
    LODWORD(v4) = 0;
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
    {
      if ( v14 )
      {
        v12 = v16[2];
        v13 = v12;
      }
      else
      {
        v12 = *v16;
        v13 = v16[1];
      }
      if ( v12 )
        v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
      if ( v13 )
        v13 &= -(__int64)(ObReferenceObjectSafe(v13) != 0);
    }
    if ( _InterlockedCompareExchange64(v16 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v16 - 2);
    v19 = (ULONG_PTR)(v16 - 2);
LABEL_53:
    KeAbPostRelease(v19);
LABEL_54:
    v8 = v77;
    LOBYTE(v7) = a3;
    goto LABEL_55;
  }
  LOBYTE(v14) = v11 == 8;
  v75 = v14;
  if ( !v9 )
  {
    if ( v8 )
    {
      v23 = *(__int64 **)(a2 + 176);
      if ( v23 )
      {
        v24 = KeAbPreAcquire((ULONG_PTR)(v23 - 2), 0LL, 0LL, v7);
        if ( _InterlockedCompareExchange64(v23 - 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)v23 - 2, v24, (ULONG_PTR)(v23 - 2), v25);
        if ( v24 )
          *(_BYTE *)(v24 + 26) |= 1u;
        LODWORD(v4) = 0;
        if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
        {
          if ( v14 )
          {
            v12 = v23[2];
            v13 = v12;
          }
          else
          {
            v12 = *v23;
            v13 = v23[1];
          }
          if ( v12 )
            v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
          if ( v13 )
            v13 &= -(__int64)(ObReferenceObjectSafe(v13) != 0);
        }
        if ( _InterlockedCompareExchange64(v23 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v23 - 2);
        v19 = (ULONG_PTR)(v23 - 2);
        goto LABEL_53;
      }
    }
  }
LABEL_55:
  if ( !v14 )
  {
    if ( v8 && (v10 != 3 || (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    {
      v26 = 0LL;
      v74 = 0;
    }
    else
    {
      v26 = 1LL;
      v74 = 1073741870;
    }
    if ( (v7 & 1) != 0 && (_DWORD)v26 )
    {
LABEL_163:
      v27 = v74;
      goto LABEL_164;
    }
LABEL_70:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 228) = 0;
    *(_WORD *)(a2 + 228) |= 0xCu;
    *(_DWORD *)(a2 + 224) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v26);
    *(_WORD *)(a2 + 228) &= ~0x2000u;
    *(_DWORD *)(a2 + 40) |= 0x10200u;
    _InterlockedOr(v73, 0);
    v29 = *(void **)(a2 + 24);
    if ( v29 )
    {
      if ( (*(_DWORD *)(a2 + 40) & 0x1000) != 0 )
        ObfDereferenceObject(v29);
      *(_QWORD *)(a2 + 24) = 0LL;
    }
    v30 = *(_QWORD *)(a2 + 48);
    if ( v30 && (*(_DWORD *)(a2 + 40) & 0x400) == 0 && !*(_QWORD *)(a2 + 96) )
    {
      v31 = 776LL;
      if ( *(_QWORD *)(a2 + 208) )
        v31 = *(_QWORD *)(a2 + 216) + 776LL;
      *(_QWORD *)(a2 + 48) = PsTransferProcessQuotaToSharedQuota(v30, v31);
      ObfDereferenceObjectWithTag(v32, 0x63706C41u);
      *(_DWORD *)(a2 + 40) |= 0x400u;
    }
    v4 = *(_QWORD *)(a2 + 200);
    if ( v4 )
    {
      v33 = *(_QWORD *)(a2 + 200) & 7LL;
      v34 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8uLL);
      v35 = 1;
      if ( (_DWORD)v33 == 5 )
      {
        v35 = 5;
        LODWORD(v33) = 0;
      }
      PspChargeJobWakeCounter(v34, 0LL, v33, -1LL, v35, 0LL, *(unsigned int *)(a2 + 248));
      ObDereferenceObjectDeferDeleteWithTag(v34, 0x6B577350u);
      v4 = 0LL;
      *(_QWORD *)(a2 + 200) = 0LL;
    }
    v36 = *(_QWORD *)(a2 + 32);
    if ( v36 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v36 + 1744), v4) == a2 )
      {
        *(_QWORD *)(a2 + 32) = v4;
        *(_WORD *)(a2 - 30) -= 2;
        KeReleaseSemaphoreEx(v36 + 1592, 1, 1, v28, 2);
      }
      goto LABEL_129;
    }
    if ( !v12 || !v13 )
    {
LABEL_129:
      if ( v75 != (_DWORD)v4 && (a3 & 0x10000) != 0 && v77 )
      {
        v54 = *(_DWORD *)(a2 + 40) & 7;
        if ( v54 == 3 )
        {
          v55 = *(_QWORD *)(a2 + 16);
          v4 = v55 + 176;
          v56 = KeAbPreAcquire(v55 + 176, 0LL, 0LL, v28);
          v58 = v56;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 176), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v55 + 176), v56, v55 + 176, v57);
          if ( v58 )
            *(_BYTE *)(v58 + 26) |= 1u;
          --*(_DWORD *)(v55 + 456);
        }
        else if ( v54 == 4 )
        {
          v4 = v77 + 200;
          v59 = KeAbPreAcquire(v77 + 200, 0LL, 0LL, v28);
          v61 = v59;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 200), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v77 + 200), v59, v77 + 200, v60);
          if ( v61 )
            *(_BYTE *)(v61 + 26) |= 1u;
          --*(_DWORD *)(v77 + 460);
        }
        else
        {
          v4 = v77 + 136;
          v62 = KeAbPreAcquire(v77 + 136, 0LL, 0LL, v28);
          v64 = v62;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 136), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v77 + 136), v62, v77 + 136, v63);
          if ( v64 )
            *(_BYTE *)(v64 + 26) |= 1u;
          if ( (*(_DWORD *)(a2 + 40) & 7) == 1 )
            --*(_DWORD *)(v77 + 448);
          else
            --*(_DWORD *)(v77 + 452);
        }
        *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
        *(_QWORD *)(a2 + 16) = 0LL;
        **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
        *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v4);
        KeAbPostRelease(v4);
        --*(_WORD *)(a2 - 30);
        LODWORD(v4) = 0;
      }
      goto LABEL_154;
    }
    if ( !v14 && (a3 & 2) == 0 )
    {
LABEL_154:
      if ( (*(_DWORD *)(a2 + 40) & 0x4000) != 0 && (*(_DWORD *)(a2 + 40) & 7) == 3 )
      {
        v65 = *(_QWORD *)(a2 + 16);
        v66 = KeAbPreAcquire(v65 + 176, 0LL, 0LL, v28);
        v68 = v66;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 176), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v65 + 176), v66, v65 + 176, v67);
        if ( v68 )
          *(_BYTE *)(v68 + 26) |= 1u;
        --*(_DWORD *)(v65 + 456);
        *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
        *(_QWORD *)(a2 + 16) = 0LL;
        **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
        *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v65 + 176));
        KeAbPostRelease(v65 + 176);
        --*(_WORD *)(a2 - 30);
        LODWORD(v4) = 0;
      }
      goto LABEL_163;
    }
    v37 = (volatile signed __int64 *)(v12 + 352);
    v39 = KeAbPreAcquire(v12 + 352, 0LL, 0LL, v28);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v12 + 352), v39, v12 + 352, v38);
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
    if ( (*(_DWORD *)(v12 + 416) & 0x40) == 0 )
    {
      *(_QWORD *)(a2 + 64) = v12;
      *(_QWORD *)(a2 + 56) = v13;
      ++*(_WORD *)(a2 - 30);
      *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v13 + 400));
      *(_QWORD *)(a2 + 128) = *(_QWORD *)(v13 + 56);
      v40 = KeAbPreAcquire(v12 + 136, 0LL, 0LL, v38);
      v42 = v40;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 136), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 + 136), v40, v12 + 136, v41);
      if ( v42 )
        *(_BYTE *)(v42 + 26) |= 1u;
      *(_QWORD *)(a2 + 88) = *(_QWORD *)(v12 + 392);
      *(_QWORD *)(a2 + 80) = v12 + 384;
      **(_QWORD **)(v12 + 392) = a2 + 80;
      *(_QWORD *)(v12 + 392) = a2 + 80;
      ++*(_DWORD *)(v12 + 464);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 136));
      KeAbPostRelease(v12 + 136);
      if ( *(_QWORD *)(v12 + 32) )
      {
        AlpcpQueueIoCompletionPort((__int64 *)v12, 0, 1, 0);
LABEL_104:
        LODWORD(v4) = 0;
        goto LABEL_129;
      }
      if ( (*(_DWORD *)(v12 + 416) & 0x200) != 0 )
      {
        if ( _InterlockedCompareExchange64(v37, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
        KeAbPostRelease(v12 + 352);
        LODWORD(v4) = 0;
        KeReleaseSemaphoreEx(*(_QWORD *)(v12 + 248), 1, 1, v44, 0);
        goto LABEL_129;
      }
      v45 = (_QWORD *)(v12 + 232);
      if ( (_QWORD *)*v45 != v45 )
      {
        v46 = KeAbPreAcquire(v12 + 224, 0LL, 0LL, v43);
        v48 = v46;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 224), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 + 224), v46, v12 + 224, v47);
        if ( v48 )
          *(_BYTE *)(v48 + 26) |= 1u;
        if ( (_QWORD *)*v45 == v45 )
        {
          v49 = 0LL;
        }
        else
        {
          v49 = (_QWORD *)(*v45 - 1768LL);
          v50 = v49 + 221;
          v49[219] = 0LL;
          v51 = v49[221];
          v52 = (_QWORD *)v49[222];
          if ( *(_QWORD **)(v51 + 8) != v49 + 221 || (_QWORD *)*v52 != v50 )
            __fastfail(3u);
          *v52 = v51;
          *(_QWORD *)(v51 + 8) = v52;
          *v50 = 0LL;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 224));
        KeAbPostRelease(v12 + 224);
        if ( v49 )
        {
          if ( _InterlockedCompareExchange64(v37, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
          KeAbPostRelease(v12 + 352);
          KeReleaseSemaphoreEx((__int64)(v49 + 199), 1, 1, v53, 2);
          goto LABEL_104;
        }
      }
    }
    if ( _InterlockedCompareExchange64(v37, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
    KeAbPostRelease(v12 + 352);
    LODWORD(v4) = 0;
    goto LABEL_129;
  }
  if ( !v8 || v10 != 3 || (v26 = 1LL, (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    v26 = 0LL;
  v27 = 259;
  v74 = 259;
  if ( (v7 & 1) == 0 || (_DWORD)v26 )
    goto LABEL_70;
LABEL_164:
  *(_DWORD *)(a2 + 40) &= ~0x10000u;
  if ( AlpcpMessageLogEnabled != (_DWORD)v4 )
    AlpcpEnterStateChangeEventMessageLog(a2);
  v69 = *(_BYTE *)(a2 - 32);
  if ( (v69 & 1) != 0 )
  {
    v70 = *(__int16 *)(a2 - 30);
    *(_BYTE *)(a2 - 32) = v69 & 0xFE;
    LODWORD(v4) = 0x10000 - v70;
    *(_WORD *)(a2 - 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 - 16));
  KeAbPostRelease(a2 - 16);
  if ( (int)v4 > 0 )
  {
    BugCheckParameter4 = -(int)v4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 24), -(int)v4);
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, a2, 0x28uLL, BugCheckParameter4);
      AlpcpDestroyBlob(a2);
    }
  }
  if ( v12 )
    ObfDereferenceObject((PVOID)v12);
  if ( v13 )
    ObfDereferenceObject((PVOID)v13);
  return v27;
}
