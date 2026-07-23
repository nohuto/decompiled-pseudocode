/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x14044A860
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x140447320 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchNewMessage @ 0x14044A430 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14049CF64 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1404AEB14 (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400098D8 (ExNotifyCallback.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400A39E8 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400A7D50 (AlpcpReleaseDirectAttribute.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x140448CF0 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044B480 (AlpcpCaptureMessageDataSafe.c)
 *     PspChargeJobWakeCounter @ 0x140467B60 (PspChargeJobWakeCounter.c)
 *     AlpcpReadMessageData @ 0x14049D800 (AlpcpReadMessageData.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1404A0010 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpAllocateCompletionBuffer @ 0x1404A5920 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpInsertCompletionListEntry @ 0x1404A70A0 (AlpcpInsertCompletionListEntry.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404AEF1C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpGetAvailableAttributesSet @ 0x1404B0A70 (AlpcpGetAvailableAttributesSet.c)
 *     PspCheckConditionalWakeCharge @ 0x1404D43D8 (PspCheckConditionalWakeCharge.c)
 *     AlpcpDestroyBlob @ 0x1404F2C54 (AlpcpDestroyBlob.c)
 *     AlpcpFreeBitmap @ 0x14052A968 (AlpcpFreeBitmap.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1406569EC (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140656B98 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // r14
  ULONG_PTR v3; // rdi
  unsigned int v4; // ecx
  int v5; // r15d
  int v6; // ebp
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  __int64 v10; // r11
  int v11; // r12d
  unsigned __int64 v12; // rbx
  __int64 v13; // r13
  int v14; // eax
  unsigned __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // r13
  _BYTE *v18; // rax
  volatile signed __int64 *v19; // r9
  _BYTE *v20; // r13
  int v21; // eax
  char v22; // al
  char v23; // cl
  int v24; // r13d
  signed __int64 v25; // rcx
  __int64 result; // rax
  _BYTE *v27; // rax
  _BYTE *v28; // rbx
  int v29; // eax
  char v30; // cl
  int v31; // r12d
  signed __int64 BugCheckParameter4; // rcx
  int v33; // r9d
  unsigned int v34; // edx
  int v35; // ecx
  unsigned int v36; // r10d
  int v37; // edx
  __int64 v38; // r8
  unsigned int v39; // edx
  unsigned int CompletionBuffer; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // edx
  _DWORD *v44; // r9
  int inserted; // eax
  __int64 v46; // r9
  bool v47; // cl
  __int64 v48; // r11
  int v49; // edx
  unsigned int v50; // r12d
  _BYTE *v51; // rax
  _BYTE *v52; // rcx
  __int64 v53; // r13
  bool v54; // zf
  _QWORD *v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rcx
  __int64 v58; // r9
  void *v59; // rdi
  __int16 v60; // ax
  __int16 v61; // ax
  unsigned int v62; // [rsp+40h] [rbp-68h]
  unsigned int v63; // [rsp+44h] [rbp-64h]
  unsigned int v64; // [rsp+48h] [rbp-60h]
  int v65; // [rsp+4Ch] [rbp-5Ch]
  __int64 v66; // [rsp+50h] [rbp-58h]
  __int64 v67; // [rsp+58h] [rbp-50h]
  char v68; // [rsp+B0h] [rbp+8h]
  bool v69; // [rsp+B0h] [rbp+8h]
  _BYTE *v70; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v71; // [rsp+B8h] [rbp+10h]
  unsigned int v72; // [rsp+C0h] [rbp+18h]
  _KPROCESS *Process; // [rsp+C0h] [rbp+18h]
  int v74; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v5 = ((unsigned __int8)v4 >> 2) & 1;
  v6 = (v4 >> 17) & 1;
  v66 = *(_QWORD *)(a1 + 16);
  v7 = (v4 >> 23) & 1;
  v71 = 0;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  if ( (v8 & 0x400000) != 0 )
    v9 = 2;
  else
    v9 = (v8 & 0x200000) != 0;
  if ( (v6 || v7 || v9 || (AlpcpWakePolicyDefault & 1) == 0) && (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v10 = *(_QWORD *)(v1 + 24);
    if ( (v10 & 1) == 0 )
    {
      if ( v10 )
      {
        v11 = 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v11 = 3;
        }
        else if ( (AlpcpWakePolicyDefault & 1) != 0 )
        {
          v11 = 3;
          if ( (AlpcpWakePolicyDefault & 2) != 0 )
            v11 = -2147483645;
        }
        v12 = *(_QWORD *)(v10 + 944);
        v13 = *(unsigned int *)(v3 + 256);
        if ( v12
          && (v14 = *(_DWORD *)(v12 + 1304), (v14 & 0x1000) != 0)
          && (v47 = (v11 & 2) != 0, v69 = v47, (v14 & 0x800000) == 0 || !v47)
          && (Process = KeGetCurrentThread()->ApcState.Process,
              (unsigned __int8)PspCheckConditionalWakeCharge(Process, v12, 2LL, 1LL)) )
        {
          v49 = 1;
          if ( (Process[1].DirectoryTableBase & 0x40) == 0 && v69 )
          {
            v49 = 5;
            if ( v11 < 0 )
            {
              v50 = 5;
              v49 = 7;
            }
            else
            {
              v50 = 5;
            }
          }
          else
          {
            v50 = 2;
          }
          PspChargeJobWakeCounter((PVOID)v12, v49, v48, v13);
          ObfReferenceObjectWithTag((PVOID)v12, 0x6B577350u);
          v15 = v12 | v50;
        }
        else
        {
          v15 = 0LL;
        }
        *(_QWORD *)(v3 + 208) = v15;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    ++*(_WORD *)(v3 - 30);
    v27 = (_BYTE *)KeAbPreAcquire(v1 + 200, 0LL, 0);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 200), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 200), v27, v1 + 200);
    if ( v28 )
      v28[26] |= 1u;
    v29 = *(_DWORD *)(v3 + 40);
    *(_QWORD *)(v3 + 16) = v1;
    *(_DWORD *)(v3 + 40) = v29 & 0xFFFFFF84 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 4;
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
    v30 = *(_BYTE *)(v3 - 32);
    v31 = 0;
    if ( (v30 & 1) != 0 )
    {
      v31 = 0x10000 - *(__int16 *)(v3 - 30);
      *(_WORD *)(v3 - 30) = 0;
      *(_BYTE *)(v3 - 32) = v30 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
    KeAbPostRelease(v3 - 16);
    if ( v31 > 0 )
    {
      BugCheckParameter4 = -v31 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v31);
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v3);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v66 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v66 - 16));
    KeAbPostRelease(v66 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v6 && !v5 )
    {
      KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFEuLL), 0, 0);
      result = AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v16 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v16 == v16 )
      goto LABEL_20;
    v51 = (_BYTE *)KeAbPreAcquire(v1 + 224, 0LL, 0);
    v52 = v51;
    v70 = v51;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 224), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 224), v51, v1 + 224);
      v52 = v70;
    }
    if ( v52 )
      v52[26] |= 1u;
    if ( (_QWORD *)*v16 == v16 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
      KeAbPostRelease(v1 + 224);
LABEL_20:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v68 = 1;
        v65 = 0;
      }
      else
      {
        v68 = 0;
        v65 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
      }
      v17 = *(_QWORD *)(v1 + 360);
      if ( v17 )
      {
        v33 = *(_DWORD *)(v1 + 416);
        if ( (v33 & 0x10000) != 0 )
        {
          v34 = 0;
          if ( *(_QWORD *)(v3 + 136) )
            v34 = 0x80000000;
          if ( *(_QWORD *)(v3 + 144) )
            v34 |= 0x40000000u;
          if ( *(_QWORD *)(v3 + 152) )
            v34 |= 0x10000000u;
          v35 = *(_DWORD *)(v17 + 148);
          if ( (~v35 & v34) == 0 && ((*(unsigned __int16 *)(v3 + 236) & 0xFFFF00FF) != 5 || (v35 & 0x20000000) != 0) )
          {
            v36 = *(unsigned __int16 *)(v3 + 234);
            v62 = v36;
            if ( v35 )
            {
              v37 = 8;
              if ( (v33 & 0x800) != 0 )
                v37 = 4;
              v38 = (v3 + 232 + *(unsigned __int16 *)(v3 + 234)) & (unsigned int)(v37 - 1);
              v39 = v38 ? v37 - v38 : 0;
              v72 = v39;
              v36 += v39 + *(_DWORD *)(v17 + 152);
              v62 = v36;
            }
            else
            {
              v72 = 0;
            }
            v74 = 0;
            if ( (v33 & 0x800) != 0 )
            {
              v36 -= 16;
              v74 = 0x80000000;
              v62 = v36;
            }
            CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v36);
            v64 = CompletionBuffer;
            if ( CompletionBuffer != -1 )
            {
              v41 = *(_QWORD *)(v17 + 120) + CompletionBuffer;
              v67 = v41;
              if ( (v74 & 0xC0000000) == 0x80000000 )
              {
                *(_WORD *)v41 = *(_WORD *)(v3 + 232);
                v63 = *(unsigned __int16 *)(v3 + 232) + 24;
                *(_WORD *)(v41 + 2) = v63;
                v60 = *(_WORD *)(v3 + 238);
                if ( v60 )
                  v61 = v60 - 16;
                else
                  v61 = 0;
                *(_WORD *)(v41 + 6) = v61;
                *(_WORD *)(v41 + 4) = *(_WORD *)(v3 + 236) | 0x1000;
                *(_DWORD *)(v41 + 8) = *(_DWORD *)(v3 + 240);
                *(_DWORD *)(v41 + 12) = *(_DWORD *)(v3 + 248);
                *(_DWORD *)(v41 + 16) = *(_DWORD *)(v3 + 256);
                *(_DWORD *)(v41 + 20) = *(_DWORD *)(v3 + 264);
                *(_DWORD *)(v41 + 20) = *(_DWORD *)(v3 + 264);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v41 + 4) &= 0xC00Fu;
                v42 = v41 + 24;
              }
              else
              {
                *(_OWORD *)v41 = *(_OWORD *)(v3 + 232);
                *(_OWORD *)(v41 + 16) = *(_OWORD *)(v3 + 248);
                *(_QWORD *)(v41 + 32) = *(_QWORD *)(v3 + 264);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v41 + 4) &= 0xC00Fu;
                v42 = v41 + 40;
                v63 = *(unsigned __int16 *)(v3 + 234);
              }
              if ( *(_QWORD *)(v3 + 176) )
                AlpcpGetDataFromUserVaSafe(v3, v42);
              else
                AlpcpReadMessageData(v3, v42);
              v43 = *(_DWORD *)(v17 + 148);
              if ( v43 )
              {
                v44 = (_DWORD *)(v67 + v63 + v72);
                *v44 = v43;
                v44[1] = 0;
                AlpcpExposeAttributes((_DWORD *)v1, v74, v3, (__int64)v44);
              }
              inserted = AlpcpInsertCompletionListEntry(v1, v64);
              if ( inserted )
              {
                v71 = 1;
                *(_DWORD *)(*(_QWORD *)(v17 + 80) + 72LL) = *(_DWORD *)(v3 + 256);
                *(_DWORD *)(*(_QWORD *)(v17 + 80) + 76LL) = *(_DWORD *)(v3 + 264);
                if ( v68
                  && (inserted & 2) == 0
                  && HIWORD(*(_QWORD *)(*(_QWORD *)(v17 + 80) + 64LL))
                   + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL) >= *(unsigned int *)(v17 + 144) )
                {
                  v68 = 0;
                }
                if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 || (unsigned int)AlpcpGetAvailableAttributesSet(v3 + 104) )
                {
                  *(_WORD *)(v3 + 236) |= 0x2000u;
                  ++*(_WORD *)(v3 - 30);
                  AlpcpInsertMessagePendingQueue(v1, v3);
                }
                else
                {
                  *(_WORD *)(v3 + 236) &= ~0x2000u;
                }
LABEL_32:
                v22 = AlpcpLogEnabled;
                if ( AlpcpLogEnabled )
                {
                  AlpcpLogSendMessage(v3);
                  v22 = AlpcpLogEnabled;
                }
                if ( v6 && v22 )
                  AlpcpLogWaitForReply(v3);
                *(_DWORD *)(v3 + 40) &= ~0x10000u;
                if ( AlpcpMessageLogEnabled )
                  AlpcpEnterStateChangeEventMessageLog(v3);
                v23 = *(_BYTE *)(v3 - 32);
                v24 = 0;
                if ( (v23 & 1) != 0 )
                {
                  v24 = 0x10000 - *(__int16 *)(v3 - 30);
                  *(_WORD *)(v3 - 30) = 0;
                  *(_BYTE *)(v3 - 32) = v23 & 0xFE;
                }
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
                KeAbPostRelease(v3 - 16);
                if ( v24 > 0 )
                {
                  v25 = -v24 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v24);
                  if ( v25 <= 0 )
                  {
                    if ( v25 )
                      KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v25);
                    AlpcpDestroyBlob(v3);
                  }
                }
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v66 - 16), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v66 - 16));
                KeAbPostRelease(v66 - 16);
                if ( v65 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                  result = KeAbPostRelease(v1 + 352);
                  if ( v6 || v5 )
                  {
                    *(_BYTE *)(a1 + 58) = 0;
                    return result;
                  }
                  KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1u, 1, v46, 0);
                }
                else
                {
                  if ( v68 )
                  {
                    if ( v6 || v5 )
                    {
                      result = v71;
                      *(_BYTE *)(a1 + 59) = v71;
                      *(_BYTE *)(a1 + 58) = 1;
                    }
                    else
                    {
                      AlpcpQueueIoCompletionPort(v1, v71, 1, 0);
                      result = ObfDereferenceObject((PVOID)v1);
                      *(_QWORD *)(a1 + 32) = 0LL;
                    }
                    return result;
                  }
                  v59 = *(void **)(v1 + 368);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                  KeAbPostRelease(v1 + 352);
                  if ( v59 )
                    ExNotifyCallback(v59, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
                }
                result = ObfDereferenceObject((PVOID)v1);
                *(_QWORD *)(a1 + 32) = 0LL;
                return result;
              }
              AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v64 >> 6, (v62 + 63) >> 6);
            }
          }
        }
      }
      if ( *(_QWORD *)(v3 + 176) )
      {
        AlpcpCaptureMessageDataSafe(v3);
        *(_QWORD *)(v3 + 176) = 0LL;
      }
      ++*(_WORD *)(v3 - 30);
      v18 = (_BYTE *)KeAbPreAcquire(v1 + 136, 0LL, 0);
      v19 = (volatile signed __int64 *)(v1 + 136);
      v20 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 136), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 136), v18, v1 + 136);
        v19 = (volatile signed __int64 *)(v1 + 136);
      }
      if ( v20 )
        v20[26] |= 1u;
      v21 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v21 & 0xFFFFFF81 | (4 * (*(_BYTE *)(v1 + 416) & 6)) & 0xF9 | 1;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 152);
      *(_QWORD *)v3 = v1 + 144;
      **(_QWORD **)(v1 + 152) = v3;
      *(_QWORD *)(v1 + 152) = v3;
      ++*(_DWORD *)(v1 + 448);
      if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v19);
        v19 = (volatile signed __int64 *)(v1 + 136);
      }
      KeAbPostRelease((ULONG_PTR)v19);
      goto LABEL_32;
    }
    v53 = *v16 - 1760LL;
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0
      || ((unsigned int)AlpcpGetAvailableAttributesSet(v3 + 104) & *(_DWORD *)(v53 + 1752)) != 0 )
    {
      *(_WORD *)(v3 + 236) |= 0x2000u;
      ++*(_WORD *)(v3 - 30);
      AlpcpInsertMessagePendingQueue(v1, v3);
    }
    else
    {
      *(_WORD *)(v3 + 236) &= ~0x2000u;
    }
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x4000u;
    v54 = AlpcpLogEnabled == 0;
    *(_QWORD *)(v53 + 1752) = v3;
    if ( !v54 )
      AlpcpLogSendMessage(v3);
    v55 = (_QWORD *)(v53 + 1760);
    v56 = *(_QWORD *)(v53 + 1760);
    v57 = *(_QWORD **)(v53 + 1768);
    if ( *(_QWORD *)(v56 + 8) != v53 + 1760 || (_QWORD *)*v57 != v55 )
      __fastfail(3u);
    *v57 = v56;
    *(_QWORD *)(v56 + 8) = v57;
    *v55 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x10000u;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v66 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v66 - 16));
    KeAbPostRelease(v66 - 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
    KeAbPostRelease(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v6 || v5 )
      *(_QWORD *)(a1 + 24) = v53;
    else
      return KeReleaseSemaphoreEx(v53 + 1600, 1u, 1, v58, 2);
  }
  return result;
}
