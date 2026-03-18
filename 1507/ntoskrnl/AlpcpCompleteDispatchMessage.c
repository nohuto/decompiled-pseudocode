/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x14049B070
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14047E410 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1404807F0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchCloseMessage @ 0x1404A48A4 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14052A624 (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExNotifyCallback @ 0x1400EDED0 (ExNotifyCallback.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011311C (AlpcpQueueIoCompletionPort.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpReadMessageData @ 0x14047A100 (AlpcpReadMessageData.c)
 *     AlpcpExposeAttributes @ 0x140480310 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14049CC90 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpAllocateCompletionBuffer @ 0x1405240B0 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpInsertCompletionListEntry @ 0x140527C20 (AlpcpInsertCompletionListEntry.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14052F9E8 (AlpcpGetDataFromUserVaSafe.c)
 *     PspCheckConditionalWakeCharge @ 0x14053CBE8 (PspCheckConditionalWakeCharge.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpFreeBitmap @ 0x14069FBE0 (AlpcpFreeBitmap.c)
 *     AlpcpLogSendMessage @ 0x1406A02DC (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406A0488 (AlpcpLogWaitForReply.c)
 */

void __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // r14
  ULONG_PTR v3; // rdi
  unsigned int v4; // ecx
  __int64 v5; // r9
  int v6; // r15d
  int v7; // ebp
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // r11
  int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // r13
  volatile signed __int64 *v19; // r13
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // eax
  ULONG_PTR v24; // rcx
  char v25; // al
  char v26; // cl
  int v27; // r13d
  signed __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rbx
  int v32; // eax
  char v33; // cl
  int v34; // r12d
  signed __int64 BugCheckParameter4; // rcx
  int v36; // edx
  unsigned int v37; // r8d
  int v38; // ecx
  unsigned int v39; // r10d
  int v40; // r9d
  __int64 v41; // r8
  unsigned int v42; // r9d
  unsigned int CompletionBuffer; // eax
  __int64 v44; // rcx
  char *v45; // rdx
  int v46; // edx
  _DWORD *v47; // r9
  int inserted; // eax
  __int64 v49; // r9
  __int64 v50; // rax
  volatile signed __int64 *v51; // r9
  __int64 v52; // r13
  int v53; // eax
  __int64 v54; // r9
  bool v55; // cl
  __int64 v56; // r11
  char v57; // dl
  unsigned int v58; // r12d
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r13
  unsigned int v63; // ecx
  bool v64; // zf
  _QWORD *v65; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  char v68; // cl
  int v69; // r12d
  volatile signed __int64 *v70; // rcx
  signed __int64 v71; // rcx
  __int64 v72; // r9
  __int64 v73; // rax
  volatile signed __int64 *v74; // r9
  __int64 v75; // r12
  int v76; // eax
  void *v77; // rdi
  unsigned int v78; // eax
  __int64 v79; // rcx
  __int16 v80; // ax
  __int16 v81; // ax
  __int64 v82; // rax
  __int64 v83; // r9
  __int64 v84; // rcx
  int v85; // eax
  unsigned int v86; // [rsp+40h] [rbp-68h]
  unsigned int v87; // [rsp+44h] [rbp-64h]
  unsigned int v88; // [rsp+48h] [rbp-60h]
  int v89; // [rsp+4Ch] [rbp-5Ch]
  __int64 v90; // [rsp+50h] [rbp-58h]
  __int64 v91; // [rsp+58h] [rbp-50h]
  char v92; // [rsp+B0h] [rbp+8h]
  bool v93; // [rsp+B0h] [rbp+8h]
  __int64 v94; // [rsp+B0h] [rbp+8h]
  char v95; // [rsp+B8h] [rbp+10h]
  __int64 v96; // [rsp+C0h] [rbp+18h]
  unsigned int v97; // [rsp+C0h] [rbp+18h]
  _KPROCESS *Process; // [rsp+C0h] [rbp+18h]
  __int64 v99; // [rsp+C0h] [rbp+18h]
  int v100; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v5 = 1LL;
  v6 = ((unsigned __int8)v4 >> 2) & 1;
  v7 = (v4 >> 17) & 1;
  v90 = *(_QWORD *)(a1 + 16);
  v8 = (v4 >> 23) & 1;
  v95 = 0;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  if ( (v9 & 0x400000) != 0 )
    v10 = 2;
  else
    v10 = (v9 & 0x200000) != 0;
  if ( (v7 || v8 || v10 || (AlpcpWakePolicyDefault & 1) == 0) && (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v11 = *(_QWORD *)(v1 + 24);
    if ( (v11 & 1) == 0 )
    {
      if ( v11 )
      {
        v12 = 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            v12 = 3;
        }
        else if ( (AlpcpWakePolicyDefault & 1) != 0 )
        {
          v12 = 3;
          if ( (AlpcpWakePolicyDefault & 2) != 0 )
            v12 = -2147483645;
        }
        v13 = *(_QWORD *)(v11 + 944);
        v14 = *(unsigned int *)(v3 + 248);
        if ( v13
          && (v15 = *(_DWORD *)(v13 + 1296), (v15 & 0x1000) != 0)
          && (v55 = (v12 & 2) != 0, v93 = v55, (v15 & 0x800000) == 0 || !v55)
          && (Process = KeGetCurrentThread()->ApcState.Process,
              (unsigned __int8)PspCheckConditionalWakeCharge(Process, v13, 2LL, 1LL)) )
        {
          v57 = 1;
          if ( (Process[1].DirectoryTableBase & 0x40) == 0 && v93 )
          {
            v57 = 5;
            if ( v12 < 0 )
            {
              v58 = 5;
              v57 = 7;
            }
            else
            {
              v58 = 5;
            }
          }
          else
          {
            v58 = 2;
          }
          PspChargeJobWakeCounter((_QWORD *)v13, 0LL, 2, 1LL, v57, v56, v14);
          ObfReferenceObjectWithTag((PVOID)v13, 0x6B577350u);
          v16 = v13 | v58;
        }
        else
        {
          v16 = 0LL;
        }
        *(_QWORD *)(v3 + 200) = v16;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v3 + 168) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 168) = 0LL;
    }
    ++*(_WORD *)(v3 - 30);
    v29 = KeAbPreAcquire(v1 + 200, 0LL, 0LL, v5);
    v31 = v29;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 200), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 200), v29, v1 + 200, v30);
    if ( v31 )
      *(_BYTE *)(v31 + 26) |= 1u;
    v32 = *(_DWORD *)(v3 + 40);
    *(_QWORD *)(v3 + 16) = v1;
    *(_DWORD *)(v3 + 40) = v32 & 0xFFFFFF84 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 4;
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
    v33 = *(_BYTE *)(v3 - 32);
    v34 = 0;
    if ( (v33 & 1) != 0 )
    {
      v34 = 0x10000 - *(__int16 *)(v3 - 30);
      *(_WORD *)(v3 - 30) = 0;
      *(_BYTE *)(v3 - 32) = v33 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
    KeAbPostRelease(v3 - 16);
    if ( v34 > 0 )
    {
      BugCheckParameter4 = -v34 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v34);
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v3);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v90 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v90 - 16));
    KeAbPostRelease(v90 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v7 && !v6 )
    {
      KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFEuLL), 0, 0);
      v79 = *(_QWORD *)(a1 + 40);
      if ( (v79 & 1) != 0 )
        ObfDereferenceObject((PVOID)(v79 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v17 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v17 == v17 )
      goto LABEL_20;
    v59 = KeAbPreAcquire(v1 + 224, 0LL, 0LL, v5);
    v61 = v59;
    v94 = v59;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 224), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 224), v59, v1 + 224, v60);
      v61 = v94;
    }
    if ( v61 )
      *(_BYTE *)(v61 + 26) |= 1u;
    if ( (_QWORD *)*v17 == v17 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
      KeAbPostRelease(v1 + 224);
LABEL_20:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v92 = 1;
        v89 = 0;
      }
      else
      {
        v92 = 0;
        v89 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
      }
      v18 = *(_QWORD *)(v1 + 360);
      if ( v18 )
      {
        v36 = *(_DWORD *)(v1 + 416);
        if ( (v36 & 0x10000) != 0 )
        {
          v37 = 0;
          if ( *(_QWORD *)(v3 + 136) )
            v37 = 0x80000000;
          if ( *(_QWORD *)(v3 + 144) )
            v37 |= 0x40000000u;
          if ( *(_QWORD *)(v3 + 152) )
            v37 |= 0x10000000u;
          v38 = *(_DWORD *)(v18 + 148);
          if ( (~v38 & v37) == 0 && ((*(unsigned __int16 *)(v3 + 228) & 0xFFFF00FF) != 5 || (v38 & 0x20000000) != 0) )
          {
            v39 = *(unsigned __int16 *)(v3 + 226);
            v86 = v39;
            if ( v38 )
            {
              v40 = 8;
              if ( (v36 & 0x800) != 0 )
                v40 = 4;
              v41 = (v3 + 224 + *(unsigned __int16 *)(v3 + 226)) & (unsigned int)(v40 - 1);
              v42 = v41 ? v40 - v41 : 0;
              v97 = v42;
              v39 += v42 + *(_DWORD *)(v18 + 152);
              v86 = v39;
            }
            else
            {
              v97 = 0;
            }
            v100 = 0;
            if ( (v36 & 0x800) != 0 )
            {
              v39 -= 16;
              v100 = 0x80000000;
              v86 = v39;
            }
            CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v39);
            v88 = CompletionBuffer;
            if ( CompletionBuffer != -1 )
            {
              v44 = *(_QWORD *)(v18 + 120) + CompletionBuffer;
              v91 = v44;
              if ( (v100 & 0xC0000000) == 0x80000000 )
              {
                *(_WORD *)v44 = *(_WORD *)(v3 + 224);
                v87 = *(unsigned __int16 *)(v3 + 224) + 24;
                *(_WORD *)(v44 + 2) = v87;
                v80 = *(_WORD *)(v3 + 230);
                if ( v80 )
                  v81 = v80 - 16;
                else
                  v81 = 0;
                *(_WORD *)(v44 + 6) = v81;
                *(_WORD *)(v44 + 4) = *(_WORD *)(v3 + 228) | 0x1000;
                *(_DWORD *)(v44 + 8) = *(_DWORD *)(v3 + 232);
                *(_DWORD *)(v44 + 12) = *(_DWORD *)(v3 + 240);
                *(_DWORD *)(v44 + 16) = *(_DWORD *)(v3 + 248);
                *(_DWORD *)(v44 + 20) = *(_DWORD *)(v3 + 256);
                *(_DWORD *)(v44 + 20) = *(_DWORD *)(v3 + 256);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v44 + 4) &= 0xC00Fu;
                v45 = (char *)(v44 + 24);
              }
              else
              {
                *(_OWORD *)v44 = *(_OWORD *)(v3 + 224);
                *(_OWORD *)(v44 + 16) = *(_OWORD *)(v3 + 240);
                *(_QWORD *)(v44 + 32) = *(_QWORD *)(v3 + 256);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v44 + 4) &= 0xC00Fu;
                v45 = (char *)(v44 + 40);
                v87 = *(unsigned __int16 *)(v3 + 226);
              }
              if ( *(_QWORD *)(v3 + 168) )
                AlpcpGetDataFromUserVaSafe(v3, v45);
              else
                AlpcpReadMessageData(v3, v45);
              v46 = *(_DWORD *)(v18 + 148);
              if ( v46 )
              {
                v47 = (_DWORD *)(v91 + v87 + v97);
                *v47 = v46;
                v47[1] = 0;
                AlpcpExposeAttributes((_DWORD *)v1, v100, v3, (__int64)v47);
              }
              inserted = AlpcpInsertCompletionListEntry(v1, v88);
              if ( inserted )
              {
                v95 = 1;
                *(_DWORD *)(*(_QWORD *)(v18 + 80) + 72LL) = *(_DWORD *)(v3 + 248);
                *(_DWORD *)(*(_QWORD *)(v18 + 80) + 76LL) = *(_DWORD *)(v3 + 256);
                if ( v92
                  && (((unsigned __int8)inserted >> 1) & 1) == 0
                  && (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL)
                   + HIWORD(*(_QWORD *)(*(_QWORD *)(v18 + 80) + 64LL)) >= *(unsigned int *)(v18 + 144) )
                {
                  v92 = 0;
                }
                if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
                {
                  *(_WORD *)(v3 + 228) |= 0x2000u;
                  ++*(_WORD *)(v3 - 30);
                  v50 = KeAbPreAcquire(v1 + 176, 0LL, 0LL, v49);
                  v51 = (volatile signed __int64 *)(v1 + 176);
                  v52 = v50;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 176), 0LL) )
                  {
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 176), v50, v1 + 176, (__int64)v51);
                    v51 = (volatile signed __int64 *)(v1 + 176);
                  }
                  if ( v52 )
                    *(_BYTE *)(v52 + 26) |= 1u;
                  v53 = *(_DWORD *)(v3 + 40);
                  *(_QWORD *)(v3 + 16) = v1;
                  *(_DWORD *)(v3 + 40) = v53 & 0xFFFFFF83 | (4 * (*(_BYTE *)(v1 + 416) & 6)) & 0xFB | 3;
                  *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 192);
                  *(_QWORD *)v3 = v1 + 184;
                  **(_QWORD **)(v1 + 192) = v3;
                  *(_QWORD *)(v1 + 192) = v3;
                  ++*(_DWORD *)(v1 + 456);
                  if ( (_InterlockedExchangeAdd64(v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  {
                    ExfTryToWakePushLock(v51);
                    v51 = (volatile signed __int64 *)(v1 + 176);
                  }
                  v24 = (ULONG_PTR)v51;
                  goto LABEL_31;
                }
                v78 = 0;
                if ( *(_QWORD *)(v3 + 136) )
                  v78 = 0x80000000;
                if ( *(_QWORD *)(v3 + 144) )
                  v78 |= 0x40000000u;
                if ( *(_QWORD *)(v3 + 152) )
                  v78 |= 0x10000000u;
                if ( !v78 )
                {
                  *(_WORD *)(v3 + 228) &= ~0x2000u;
LABEL_32:
                  v25 = AlpcpLogEnabled;
                  if ( AlpcpLogEnabled )
                  {
                    AlpcpLogSendMessage(v3);
                    v25 = AlpcpLogEnabled;
                  }
                  if ( v7 && v25 )
                    AlpcpLogWaitForReply(v3);
                  *(_DWORD *)(v3 + 40) &= ~0x10000u;
                  if ( AlpcpMessageLogEnabled )
                    AlpcpEnterStateChangeEventMessageLog(v3);
                  v26 = *(_BYTE *)(v3 - 32);
                  v27 = 0;
                  if ( (v26 & 1) != 0 )
                  {
                    v27 = 0x10000 - *(__int16 *)(v3 - 30);
                    *(_WORD *)(v3 - 30) = 0;
                    *(_BYTE *)(v3 - 32) = v26 & 0xFE;
                  }
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
                  KeAbPostRelease(v3 - 16);
                  if ( v27 > 0 )
                  {
                    v28 = -v27 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v27);
                    if ( v28 <= 0 )
                    {
                      if ( v28 )
                        KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v28);
                      AlpcpDestroyBlob(v3);
                    }
                  }
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v90 - 16), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v90 - 16));
                  KeAbPostRelease(v90 - 16);
                  if ( v89 )
                  {
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                    KeAbPostRelease(v1 + 352);
                    if ( v7 || v6 )
                    {
                      *(_BYTE *)(a1 + 58) = 0;
                      return;
                    }
                    KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1, 1, v54, 0);
                  }
                  else
                  {
                    if ( v92 )
                    {
                      if ( v7 || v6 )
                      {
                        *(_BYTE *)(a1 + 59) = v95;
                        *(_BYTE *)(a1 + 58) = 1;
                      }
                      else
                      {
                        AlpcpQueueIoCompletionPort((__int64 *)v1, v95, 1, 0);
                        ObfDereferenceObject((PVOID)v1);
                        *(_QWORD *)(a1 + 32) = 0LL;
                      }
                      return;
                    }
                    v77 = *(void **)(v1 + 368);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                    KeAbPostRelease(v1 + 352);
                    if ( v77 )
                      ExNotifyCallback(v77, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
                  }
                  ObfDereferenceObject((PVOID)v1);
                  *(_QWORD *)(a1 + 32) = 0LL;
                  return;
                }
                v19 = (volatile signed __int64 *)(v1 + 176);
                *(_WORD *)(v3 + 228) |= 0x2000u;
                ++*(_WORD *)(v3 - 30);
                v82 = KeAbPreAcquire(v1 + 176, 0LL, 0LL, v49);
                v84 = v82;
                v99 = v82;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 176), 0LL) )
                {
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 176), v82, v1 + 176, v83);
                  v84 = v99;
                }
                if ( v84 )
                  *(_BYTE *)(v84 + 26) |= 1u;
                v85 = *(_DWORD *)(v3 + 40);
                *(_QWORD *)(v3 + 16) = v1;
                *(_DWORD *)(v3 + 40) = v85 & 0xFFFFFF83 | (4 * (*(_BYTE *)(v1 + 416) & 6)) & 0xFB | 3;
                *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 192);
                *(_QWORD *)v3 = v1 + 184;
                **(_QWORD **)(v1 + 192) = v3;
                *(_QWORD *)(v1 + 192) = v3;
                ++*(_DWORD *)(v1 + 456);
                if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
                {
LABEL_30:
                  v24 = (ULONG_PTR)v19;
LABEL_31:
                  KeAbPostRelease(v24);
                  goto LABEL_32;
                }
LABEL_188:
                ExfTryToWakePushLock(v19);
                goto LABEL_30;
              }
              AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v88 >> 6, (v86 + 63) >> 6);
            }
          }
        }
      }
      if ( *(_QWORD *)(v3 + 168) )
      {
        AlpcpCaptureMessageDataSafe(v3);
        *(_QWORD *)(v3 + 168) = 0LL;
      }
      ++*(_WORD *)(v3 - 30);
      v19 = (volatile signed __int64 *)(v1 + 136);
      v20 = KeAbPreAcquire(v1 + 136, 0LL, 0LL, v5);
      v22 = v20;
      v96 = v20;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 136), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 136), v20, v1 + 136, v21);
        v22 = v96;
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
      if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_30;
      goto LABEL_188;
    }
    v62 = *v17 - 1768LL;
    if ( *(_QWORD *)(v3 + 168) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 168) = 0LL;
    }
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
      goto LABEL_167;
    v63 = 0;
    if ( *(_QWORD *)(v3 + 136) )
      v63 = 0x80000000;
    if ( *(_QWORD *)(v3 + 144) )
      v63 |= 0x40000000u;
    if ( *(_QWORD *)(v3 + 152) )
      v63 |= 0x10000000u;
    if ( (v63 & *(_DWORD *)(v62 + 1752)) != 0 )
    {
LABEL_167:
      *(_WORD *)(v3 + 228) |= 0x2000u;
      ++*(_WORD *)(v3 - 30);
      v73 = KeAbPreAcquire(v1 + 176, 0LL, 0LL, v60);
      v74 = (volatile signed __int64 *)(v1 + 176);
      v75 = v73;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 176), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 176), v73, v1 + 176, (__int64)v74);
        v74 = (volatile signed __int64 *)(v1 + 176);
      }
      if ( v75 )
        *(_BYTE *)(v75 + 26) |= 1u;
      v76 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v76 & 0xFFFFFF83 | (4 * (*(_BYTE *)(v1 + 416) & 6)) & 0xFB | 3;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 192);
      *(_QWORD *)v3 = v1 + 184;
      **(_QWORD **)(v1 + 192) = v3;
      *(_QWORD *)(v1 + 192) = v3;
      ++*(_DWORD *)(v1 + 456);
      if ( (_InterlockedExchangeAdd64(v74, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v74);
        v74 = (volatile signed __int64 *)(v1 + 176);
      }
      KeAbPostRelease((ULONG_PTR)v74);
    }
    else
    {
      *(_WORD *)(v3 + 228) &= ~0x2000u;
    }
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x4000u;
    v64 = AlpcpLogEnabled == 0;
    *(_QWORD *)(v62 + 1752) = v3;
    if ( !v64 )
      AlpcpLogSendMessage(v3);
    v65 = (_QWORD *)(v62 + 1768);
    v66 = *(_QWORD *)(v62 + 1768);
    v67 = *(_QWORD **)(v62 + 1776);
    if ( *(_QWORD *)(v66 + 8) != v62 + 1768 || (_QWORD *)*v67 != v65 )
      __fastfail(3u);
    *v67 = v66;
    *(_QWORD *)(v66 + 8) = v67;
    *v65 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x10000u;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v3);
    v68 = *(_BYTE *)(v3 - 32);
    v69 = 0;
    if ( (v68 & 1) != 0 )
    {
      v69 = 0x10000 - *(__int16 *)(v3 - 30);
      *(_WORD *)(v3 - 30) = 0;
      *(_BYTE *)(v3 - 32) = v68 & 0xFE;
    }
    v70 = (volatile signed __int64 *)(v3 - 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v70);
      v70 = (volatile signed __int64 *)(v3 - 16);
    }
    KeAbPostRelease((ULONG_PTR)v70);
    if ( v69 > 0 )
    {
      v71 = -v69 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v69);
      if ( v71 <= 0 )
      {
        if ( v71 )
          KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v71);
        AlpcpDestroyBlob(v3);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v90 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v90 - 16));
    KeAbPostRelease(v90 - 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
    KeAbPostRelease(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v7 || v6 )
      *(_QWORD *)(a1 + 24) = v62;
    else
      KeReleaseSemaphoreEx(v62 + 1592, 1, 1, v72, 2);
  }
}
