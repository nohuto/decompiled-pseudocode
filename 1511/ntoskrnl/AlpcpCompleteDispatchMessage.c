/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x1404069A0
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14042A040 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14042C0B0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchCloseMessage @ 0x14047FA24 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14047FE08 (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExNotifyCallback @ 0x140092004 (ExNotifyCallback.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400BBFFC (AlpcpReleaseDirectAttribute.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400BC0D4 (AlpcpQueueIoCompletionPort.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PspChargeJobWakeCounter @ 0x1403EB4DC (PspChargeJobWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x1404233F0 (AlpcpReadMessageData.c)
 *     AlpcpDestroyBlob @ 0x1404253D4 (AlpcpDestroyBlob.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14042BA70 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpExposeAttributes @ 0x14042C820 (AlpcpExposeAttributes.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140482798 (AlpcpInsertMessagePendingQueue.c)
 *     PspCheckConditionalWakeCharge @ 0x1404854B0 (PspCheckConditionalWakeCharge.c)
 *     AlpcpAllocateCompletionBuffer @ 0x14049BF40 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpInsertCompletionListEntry @ 0x14049D380 (AlpcpInsertCompletionListEntry.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404A645C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpGetAvailableAttributesSet @ 0x1404A9168 (AlpcpGetAvailableAttributesSet.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14061FC34 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpFreeBitmap @ 0x1406206A4 (AlpcpFreeBitmap.c)
 *     AlpcpLogSendMessage @ 0x140620C60 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140620E0C (AlpcpLogWaitForReply.c)
 */

void __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // r14
  ULONG_PTR v3; // rdi
  __int64 v4; // r9
  unsigned int v5; // ecx
  int v6; // r15d
  int v7; // ebp
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r11
  int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  volatile signed __int64 *v21; // r9
  __int64 v22; // r13
  int v23; // eax
  char v24; // al
  char v25; // cl
  int v26; // r13d
  signed __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  int v30; // eax
  char v31; // cl
  int v32; // r12d
  signed __int64 BugCheckParameter4; // rcx
  int v34; // ecx
  unsigned int v35; // r10d
  int v36; // edx
  __int64 v37; // r8
  unsigned int v38; // edx
  unsigned int CompletionBuffer; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // edx
  _DWORD *v43; // r9
  int inserted; // eax
  __int64 v45; // rax
  __int64 v46; // r13
  int v47; // eax
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r13
  _QWORD *v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rcx
  __int64 v58; // r9
  __int64 v59; // r11
  char v60; // cl
  unsigned int v61; // r12d
  void *v62; // rdi
  __int16 v63; // ax
  __int16 v64; // ax
  __int16 v65; // ax
  unsigned int v66; // [rsp+40h] [rbp-68h]
  unsigned int v67; // [rsp+44h] [rbp-64h]
  int v68; // [rsp+48h] [rbp-60h]
  __int64 v69; // [rsp+50h] [rbp-58h]
  __int64 v70; // [rsp+58h] [rbp-50h]
  char v71; // [rsp+B0h] [rbp+8h]
  __int64 v72; // [rsp+B0h] [rbp+8h]
  bool v73; // [rsp+B0h] [rbp+8h]
  char v74; // [rsp+B8h] [rbp+10h]
  unsigned int v75; // [rsp+C0h] [rbp+18h]
  _KPROCESS *Process; // [rsp+C0h] [rbp+18h]
  unsigned int v77; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = ((unsigned __int8)v5 >> 2) & 1;
  v7 = (v5 >> 17) & 1;
  v69 = *(_QWORD *)(a1 + 16);
  v8 = (v5 >> 23) & 1;
  v74 = 0;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  if ( (v9 & 0x400000) != 0 )
    v10 = 2LL;
  else
    v10 = (v9 & 0x200000) != 0;
  v11 = (unsigned int)AlpcpWakePolicyDefault;
  if ( (v7 || v8 || (_DWORD)v10 || (AlpcpWakePolicyDefault & 1) == 0) && (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v12 = *(_QWORD *)(v1 + 24);
    if ( (v12 & 1) == 0 )
    {
      if ( v12 )
      {
        v13 = 1;
        if ( (_DWORD)v10 )
        {
          if ( (_DWORD)v10 == 1 )
            v13 = 3;
        }
        else if ( (AlpcpWakePolicyDefault & 1) != 0 )
        {
          v13 = 3;
          if ( (AlpcpWakePolicyDefault & 2) != 0 )
            v13 = -2147483645;
        }
        v14 = *(_QWORD *)(v12 + 944);
        v15 = *(unsigned int *)(v3 + 248);
        if ( v14
          && (v16 = *(_DWORD *)(v14 + 1296), (v16 & 0x1000) != 0)
          && (v73 = (v13 & 2) != 0, (v16 & 0x800000) == 0 || !v73) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (unsigned __int8)PspCheckConditionalWakeCharge(Process, v14, 2LL, 0LL) )
          {
            v60 = 1;
            if ( (Process[1].DirectoryTableBase & 0x40) == 0 && v73 )
            {
              v60 = 5;
              if ( v13 < 0 )
              {
                v61 = 5;
                v60 = 7;
              }
              else
              {
                v61 = 5;
              }
            }
            else
            {
              v61 = 2;
            }
            PspChargeJobWakeCounter((char *)v14, 0LL, 2, 1LL, v60, v59, v15);
            ObfReferenceObjectWithTag((PVOID)v14, 0x6B577350u);
            v17 = v14 | v61;
          }
          else
          {
            v17 = 0LL;
          }
        }
        else
        {
          v17 = 0LL;
        }
        *(_QWORD *)(v3 + 200) = v17;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v3 + 168) )
    {
      AlpcpCaptureMessageDataSafe(v3, v10, v11, v4);
      *(_QWORD *)(v3 + 168) = 0LL;
    }
    ++*(_WORD *)(v3 - 30);
    v28 = KeAbPreAcquire(v1 + 200, 0LL, 0LL);
    v29 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 200), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 200), v28, v1 + 200);
    if ( v29 )
      *(_BYTE *)(v29 + 26) |= 1u;
    v30 = *(_DWORD *)(v3 + 40);
    *(_QWORD *)(v3 + 16) = v1;
    *(_DWORD *)(v3 + 40) = v30 & 0xFFFFFF84 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 4;
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 216);
    *(_QWORD *)v3 = v1 + 208;
    **(_QWORD **)(v1 + 216) = v3;
    *(_QWORD *)(v1 + 216) = v3;
    ++*(_DWORD *)(v1 + 460);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 200));
    KeAbPostRelease(v1 + 200);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v3 + 160);
    *(_DWORD *)(v3 + 40) &= ~0x10000u;
    *(_QWORD *)(v3 + 160) = 0LL;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v3);
    v31 = *(_BYTE *)(v3 - 32);
    v32 = 0;
    if ( (v31 & 1) != 0 )
    {
      v32 = 0x10000 - *(__int16 *)(v3 - 30);
      *(_WORD *)(v3 - 30) = 0;
      *(_BYTE *)(v3 - 32) = v31 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
    KeAbPostRelease(v3 - 16);
    if ( v32 > 0 )
    {
      BugCheckParameter4 = -v32 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v32);
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v3);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v69 - 16));
    KeAbPostRelease(v69 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v7 && !v6 )
    {
      KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFEuLL), 0, 0);
      AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v18 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v18 == v18 )
      goto LABEL_20;
    v49 = KeAbPreAcquire(v1 + 224, 0LL, 0LL);
    v53 = v49;
    v72 = v49;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 224), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 224), v49, v1 + 224);
      v53 = v72;
    }
    if ( v53 )
      *(_BYTE *)(v53 + 26) |= 1u;
    if ( (_QWORD *)*v18 == v18 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
      KeAbPostRelease(v1 + 224);
LABEL_20:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v71 = 1;
        v68 = 0;
      }
      else
      {
        v71 = 0;
        v68 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
      }
      v19 = *(_QWORD *)(v1 + 360);
      if ( v19 )
      {
        v4 = *(unsigned int *)(v1 + 416);
        if ( (v4 & 0x10000) != 0 )
        {
          v10 = 0LL;
          if ( *(_QWORD *)(v3 + 136) )
            v10 = 0x80000000LL;
          if ( *(_QWORD *)(v3 + 144) )
            LODWORD(v10) = v10 | 0x40000000;
          if ( *(_QWORD *)(v3 + 152) )
            LODWORD(v10) = v10 | 0x10000000;
          v34 = *(_DWORD *)(v19 + 148);
          if ( (~v34 & (unsigned int)v10) == 0
            && ((*(unsigned __int16 *)(v3 + 228) & 0xFFFF00FF) != 5 || (v34 & 0x20000000) != 0) )
          {
            v35 = *(unsigned __int16 *)(v3 + 226);
            v66 = v35;
            if ( v34 )
            {
              v36 = 8;
              if ( (v4 & 0x800) != 0 )
                v36 = 4;
              v37 = (v3 + 224 + *(unsigned __int16 *)(v3 + 226)) & (unsigned int)(v36 - 1);
              v38 = v37 ? v36 - v37 : 0;
              v75 = v38;
              v35 += v38 + *(_DWORD *)(v19 + 152);
              v66 = v35;
            }
            else
            {
              v75 = 0;
            }
            v77 = 0;
            if ( (v4 & 0x800) != 0 )
            {
              v35 -= 16;
              v77 = 0x80000000;
              v66 = v35;
            }
            CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v35);
            v67 = CompletionBuffer;
            if ( CompletionBuffer != -1 )
            {
              v40 = *(_QWORD *)(v19 + 120) + CompletionBuffer;
              v70 = v40;
              if ( (v77 & 0xC0000000) == 0x80000000 )
              {
                v63 = *(_WORD *)(v3 + 224);
                *(_WORD *)v40 = v63;
                *(_WORD *)(v40 + 2) = v63 + 24;
                v64 = *(_WORD *)(v3 + 230);
                if ( v64 )
                  v65 = v64 - 16;
                else
                  v65 = 0;
                *(_WORD *)(v40 + 6) = v65;
                *(_WORD *)(v40 + 4) = *(_WORD *)(v3 + 228) | 0x1000;
                *(_DWORD *)(v40 + 8) = *(_DWORD *)(v3 + 232);
                *(_DWORD *)(v40 + 12) = *(_DWORD *)(v3 + 240);
                *(_DWORD *)(v40 + 16) = *(_DWORD *)(v3 + 248);
                *(_DWORD *)(v40 + 20) = *(_DWORD *)(v3 + 256);
                *(_DWORD *)(v40 + 20) = *(_DWORD *)(v3 + 256);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v40 + 4) &= 0xC00Fu;
                v41 = v40 + 24;
              }
              else
              {
                *(_OWORD *)v40 = *(_OWORD *)(v3 + 224);
                *(_OWORD *)(v40 + 16) = *(_OWORD *)(v3 + 240);
                *(_QWORD *)(v40 + 32) = *(_QWORD *)(v3 + 256);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v40 + 4) &= 0xC00Fu;
                v41 = v40 + 40;
              }
              if ( *(_QWORD *)(v3 + 168) )
                AlpcpGetDataFromUserVaSafe(v3, v41);
              else
                AlpcpReadMessageData(v3, v41);
              v42 = *(_DWORD *)(v19 + 148);
              if ( v42 )
              {
                v43 = (_DWORD *)(v70 + *(unsigned __int16 *)(v70 + 2) + v75);
                *v43 = v42;
                v43[1] = 0;
                AlpcpExposeAttributes(v1, v77, v3);
              }
              inserted = AlpcpInsertCompletionListEntry(v1, v67);
              if ( inserted )
              {
                v74 = 1;
                *(_DWORD *)(*(_QWORD *)(v19 + 80) + 72LL) = *(_DWORD *)(v3 + 248);
                *(_DWORD *)(*(_QWORD *)(v19 + 80) + 76LL) = *(_DWORD *)(v3 + 256);
                if ( v71
                  && (inserted & 2) == 0
                  && (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL)
                   + HIWORD(*(_QWORD *)(*(_QWORD *)(v19 + 80) + 64LL)) >= *(unsigned int *)(v19 + 144) )
                {
                  v71 = 0;
                }
                if ( (*(_DWORD *)(v3 + 40) & 0x200) != 0 )
                {
                  if ( (unsigned int)AlpcpGetAvailableAttributesSet(v3 + 104) )
                  {
                    *(_WORD *)(v3 + 228) |= 0x2000u;
                    ++*(_WORD *)(v3 - 30);
                    AlpcpInsertMessagePendingQueue(v1, v3);
                  }
                  else
                  {
                    *(_WORD *)(v3 + 228) &= ~0x2000u;
                  }
LABEL_32:
                  v24 = AlpcpLogEnabled;
                  if ( AlpcpLogEnabled )
                  {
                    AlpcpLogSendMessage(v3);
                    v24 = AlpcpLogEnabled;
                  }
                  if ( v7 && v24 )
                    AlpcpLogWaitForReply(v3);
                  *(_DWORD *)(v3 + 40) &= ~0x10000u;
                  if ( AlpcpMessageLogEnabled )
                    AlpcpEnterStateChangeEventMessageLog(v3);
                  v25 = *(_BYTE *)(v3 - 32);
                  v26 = 0;
                  if ( (v25 & 1) != 0 )
                  {
                    v26 = 0x10000 - *(__int16 *)(v3 - 30);
                    *(_WORD *)(v3 - 30) = 0;
                    *(_BYTE *)(v3 - 32) = v25 & 0xFE;
                  }
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
                  KeAbPostRelease(v3 - 16);
                  if ( v26 > 0 )
                  {
                    v27 = -v26 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v26);
                    if ( v27 <= 0 )
                    {
                      if ( v27 )
                        KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v27);
                      AlpcpDestroyBlob(v3);
                    }
                  }
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 - 16), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v69 - 16));
                  KeAbPostRelease(v69 - 16);
                  if ( v68 )
                  {
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                    KeAbPostRelease(v1 + 352);
                    if ( v7 || v6 )
                    {
                      *(_BYTE *)(a1 + 58) = 0;
                      return;
                    }
                    KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1, 1LL, v48, 0);
                  }
                  else
                  {
                    if ( v71 )
                    {
                      if ( v7 || v6 )
                      {
                        *(_BYTE *)(a1 + 59) = v74;
                        *(_BYTE *)(a1 + 58) = 1;
                      }
                      else
                      {
                        AlpcpQueueIoCompletionPort((__int64 *)v1, v74, 1, 0);
                        ObfDereferenceObject((PVOID)v1);
                        *(_QWORD *)(a1 + 32) = 0LL;
                      }
                      return;
                    }
                    v62 = *(void **)(v1 + 368);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                    KeAbPostRelease(v1 + 352);
                    if ( v62 )
                      ExNotifyCallback(v62, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
                  }
                  ObfDereferenceObject((PVOID)v1);
                  *(_QWORD *)(a1 + 32) = 0LL;
                  return;
                }
                *(_WORD *)(v3 + 228) |= 0x2000u;
                ++*(_WORD *)(v3 - 30);
                v45 = KeAbPreAcquire(v1 + 176, 0LL, 0LL);
                v21 = (volatile signed __int64 *)(v1 + 176);
                v46 = v45;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 176), 0LL) )
                {
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 176), v45, v1 + 176);
                  v21 = (volatile signed __int64 *)(v1 + 176);
                }
                if ( v46 )
                  *(_BYTE *)(v46 + 26) |= 1u;
                v47 = *(_DWORD *)(v3 + 40);
                *(_QWORD *)(v3 + 16) = v1;
                *(_DWORD *)(v3 + 40) = v47 & 0xFFFFFF83 | (4 * (*(_BYTE *)(v1 + 416) & 6)) & 0xFB | 3;
                *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 192);
                *(_QWORD *)v3 = v1 + 184;
                **(_QWORD **)(v1 + 192) = v3;
                *(_QWORD *)(v1 + 192) = v3;
                ++*(_DWORD *)(v1 + 456);
                if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                {
                  ExfTryToWakePushLock(v21);
                  v21 = (volatile signed __int64 *)(v1 + 176);
                }
LABEL_31:
                KeAbPostRelease((ULONG_PTR)v21);
                goto LABEL_32;
              }
              AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v67 >> 6, (v66 + 63) >> 6);
            }
          }
        }
      }
      if ( *(_QWORD *)(v3 + 168) )
      {
        AlpcpCaptureMessageDataSafe(v3, v10, v11, v4);
        *(_QWORD *)(v3 + 168) = 0LL;
      }
      ++*(_WORD *)(v3 - 30);
      v20 = KeAbPreAcquire(v1 + 136, 0LL, 0LL);
      v21 = (volatile signed __int64 *)(v1 + 136);
      v22 = v20;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 136), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 136), v20, v1 + 136);
        v21 = (volatile signed __int64 *)(v1 + 136);
      }
      if ( v22 )
        *(_BYTE *)(v22 + 26) |= 1u;
      v23 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v23 & 0xFFFFFF81 | (4 * (*(_BYTE *)(v1 + 416) & 6)) & 0xF9 | 1;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 152);
      *(_QWORD *)v3 = v1 + 144;
      **(_QWORD **)(v1 + 152) = v3;
      *(_QWORD *)(v1 + 152) = v3;
      ++*(_DWORD *)(v1 + 448);
      if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v21);
        v21 = (volatile signed __int64 *)(v1 + 136);
      }
      goto LABEL_31;
    }
    v54 = *v18 - 1768LL;
    if ( *(_QWORD *)(v3 + 168) )
    {
      AlpcpCaptureMessageDataSafe(v3, v50, v51, v52);
      *(_QWORD *)(v3 + 168) = 0LL;
    }
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0
      || ((unsigned int)AlpcpGetAvailableAttributesSet(v3 + 104) & *(_DWORD *)(v54 + 1752)) != 0 )
    {
      *(_WORD *)(v3 + 228) |= 0x2000u;
      ++*(_WORD *)(v3 - 30);
      AlpcpInsertMessagePendingQueue(v1, v3);
    }
    else
    {
      *(_WORD *)(v3 + 228) &= ~0x2000u;
    }
    *(_QWORD *)(v54 + 1752) = v3;
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x4000u;
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v3);
    v55 = (_QWORD *)(v54 + 1768);
    v56 = *(_QWORD *)(v54 + 1768);
    v57 = *(_QWORD **)(v54 + 1776);
    if ( *(_QWORD *)(v56 + 8) != v54 + 1768 || (_QWORD *)*v57 != v55 )
      __fastfail(3u);
    *v57 = v56;
    *(_QWORD *)(v56 + 8) = v57;
    *v55 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x10000u;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v69 - 16));
    KeAbPostRelease(v69 - 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
    KeAbPostRelease(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v7 || v6 )
      *(_QWORD *)(a1 + 24) = v54;
    else
      KeReleaseSemaphoreEx(v54 + 1592, 1, 1LL, v58, 2);
  }
}
