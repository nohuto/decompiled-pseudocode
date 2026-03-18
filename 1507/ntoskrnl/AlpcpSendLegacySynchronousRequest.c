/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x1405327A0
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpAllocateMessage @ 0x140474B20 (AlpcpAllocateMessage.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageData @ 0x140523318 (AlpcpCaptureMessageData.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14069E8E8 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1406A02DC (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406A0488 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(PVOID Object, __int64 a2, ULONG64 a3, __int64 a4)
{
  ULONG64 v7; // rdx
  int v8; // ecx
  __int64 result; // rax
  ULONG_PTR v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  signed __int64 BugCheckParameter4; // rax
  int v15; // edi
  signed __int32 v16; // eax
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // rdi
  size_t v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 *v30; // rdi
  __int64 v31; // r9
  __int64 v32; // r13
  ULONG_PTR v33; // rcx
  signed __int64 *v34; // r13
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // r9
  ULONG_PTR v38; // rax
  ULONG_PTR v39; // r13
  struct _KTHREAD *v40; // rcx
  ULONG_PTR v41; // rdi
  __int64 v42; // r9
  _QWORD *v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // r12
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rcx
  _QWORD *v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // r12
  _QWORD *v59; // rdx
  int v60; // edi
  char v61; // cl
  signed __int64 v62; // rcx
  _QWORD *v63; // rdi
  int v64; // esi
  char v65; // cl
  signed __int64 v66; // rcx
  int v67; // [rsp+30h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+40h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-90h]
  __int64 v71; // [rsp+50h] [rbp-88h]
  _QWORD *v72; // [rsp+58h] [rbp-80h]
  __int128 v73; // [rsp+60h] [rbp-78h]
  __int128 v74; // [rsp+70h] [rbp-68h]
  __int64 v75; // [rsp+80h] [rbp-58h]
  unsigned __int64 v76; // [rsp+88h] [rbp-50h]
  __int64 v77; // [rsp+90h] [rbp-48h]
  char v79; // [rsp+F8h] [rbp+20h]

  v79 = a4;
  BugCheckParameter2 = 0LL;
  if ( (_BYTE)a4 )
  {
    v7 = a3;
    if ( a3 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    v73 = *(_OWORD *)v7;
    v74 = *(_OWORD *)(v7 + 16);
    v75 = *(_QWORD *)(v7 + 32);
  }
  else
  {
    v73 = *(_OWORD *)a3;
    v74 = *(_OWORD *)(a3 + 16);
    v75 = *(_QWORD *)(a3 + 32);
  }
  if ( DWORD2(v74) )
    return AlpcpSendMessage(a2, (__m256i *)a3, 0LL, a4);
  v8 = *((_DWORD *)Object + 104);
  if ( (v8 & 0x2000) == 0 || (v8 & 6) != 4 || (v8 & 0x38) != 0 || WORD3(v73) )
    return AlpcpSendMessage(a2, (__m256i *)a3, 0LL, a4);
  if ( (unsigned __int64)WORD1(v73) > *((_QWORD *)Object + 34) )
    return 3221225519LL;
  if ( (unsigned __int16)v73 >= (unsigned __int16)(v73 + 40)
    || (unsigned __int64)(unsigned __int16)v73 + 40 > WORD1(v73) )
  {
    return 3221225485LL;
  }
  WORD1(v73) = v73 + 40;
  v10 = _InterlockedExchange64((volatile __int64 *)Object + 55, 0LL);
  BugCheckParameter2 = v10;
  if ( v10 )
  {
    v11 = KeAbPreAcquire(v10 - 16, 0LL, 0LL, a4);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 - 16), v11, v10 - 16, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    *(_BYTE *)(v10 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, BugCheckParameter4);
    --*(_WORD *)(v10 - 30);
    v15 = *(_DWORD *)(BugCheckParameter2 + 248) & 0x7FFFFFFF;
    memset((void *)BugCheckParameter2, 0, 0x108uLL);
    *(_DWORD *)(BugCheckParameter2 + 248) = v15;
    do
      v16 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v16 );
    v17 = BugCheckParameter2;
    *(_DWORD *)(BugCheckParameter2 + 256) = v16;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v17);
  }
  else
  {
    result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  CurrentThread = KeGetCurrentThread();
  v18 = BugCheckParameter2;
  *(_OWORD *)(BugCheckParameter2 + 232) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
  *(_DWORD *)(v18 + 224) = v73;
  *(_WORD *)(v18 + 228) = 8193;
  if ( v79 )
  {
    v19 = (__int16)v73;
    v20 = *(_QWORD *)(v18 + 96);
    if ( v20 )
      v21 = *(_QWORD *)(v20 + 32) - 40LL;
    else
      v21 = 512LL;
    v76 = v21;
    if ( (__int16)v73 <= v21 )
    {
      memmove((void *)(v18 + 264), (const void *)(a3 + 40), (__int16)v73);
      v67 = 0;
      goto LABEL_40;
    }
  }
  else
  {
    v19 = (__int16)v73;
    v23 = *(_QWORD *)(v18 + 96);
    if ( v23 )
      v24 = *(_QWORD *)(v23 + 32) - 40LL;
    else
      v24 = 512LL;
    if ( (__int16)v73 <= v24 )
    {
      memmove((void *)(v18 + 264), (const void *)(a3 + 40), (__int16)v73);
      v67 = 0;
LABEL_41:
      v72 = (_QWORD *)*((_QWORD *)Object + 2);
      v25 = v72 - 2;
      v26 = KeAbPreAcquire((ULONG_PTR)(v72 - 2), 0LL, 0LL, v22);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v25, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v25, v26, (ULONG_PTR)v25, v27);
      if ( v26 )
        *(_BYTE *)(v26 + 26) |= 1u;
      v28 = *((_QWORD *)Object + 53);
      v29 = *((_QWORD *)Object + 54);
      v71 = v29;
      if ( v28 && v29 )
      {
        v30 = (unsigned __int64 *)(v29 + 352);
        v32 = KeAbPreAcquire(v29 + 352, 0LL, 0LL, v27);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v30, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v30, v32, (ULONG_PTR)v30, v31);
        if ( v32 )
          *(_BYTE *)(v32 + 26) |= 1u;
        if ( (*(_DWORD *)(v71 + 416) & 0x20) != 0 )
        {
          v67 = -1073741769;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v30, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v30);
          v33 = (ULONG_PTR)v30;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter2 + 120) = *(_QWORD *)(v71 + 56);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v30, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v30);
          KeAbPostRelease((ULONG_PTR)v30);
          v34 = (signed __int64 *)(v28 + 352);
          v71 = v28 + 352;
          v36 = KeAbPreAcquire(v28 + 352, 0LL, 0LL, v35);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 352), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)(v28 + 352), v36, v28 + 352, v37);
          if ( v36 )
            *(_BYTE *)(v36 + 26) |= 1u;
          if ( (*(_DWORD *)(v28 + 416) & 0x20) != 0 )
          {
            v67 = -1073741769;
          }
          else
          {
            v38 = BugCheckParameter2;
            v39 = BugCheckParameter2 - 48;
            *(_WORD *)(BugCheckParameter2 - 48 + 18) += 3;
            v40 = CurrentThread;
            _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v38);
            v41 = BugCheckParameter2;
            *(_QWORD *)(BugCheckParameter2 + 32) = v40;
            ObfReferenceObject(Object);
            *(_QWORD *)(v41 + 24) = Object;
            CurrentThread = (struct _KTHREAD *)(v41 + 40);
            *(_DWORD *)(v41 + 40) |= 0x1000u;
            v43 = v72;
            *(_QWORD *)(v41 + 176) = v72;
            *(_QWORD *)(v41 + 184) = *v43;
            *(_QWORD *)(a2 + 8) = v41;
            if ( AlpcpLogEnabled )
            {
              AlpcpLogSendMessage(v41);
              if ( AlpcpLogEnabled )
                AlpcpLogWaitForReply(v41);
            }
            v44 = 0LL;
            if ( *(_QWORD *)(v28 + 232) != v28 + 232 )
            {
              v45 = KeAbPreAcquire(v28 + 224, 0LL, 0LL, v42);
              v47 = v45;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 224), 0LL) )
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v28 + 224), v45, v28 + 224, v46);
              if ( v47 )
                *(_BYTE *)(v47 + 26) |= 1u;
              v48 = (_QWORD *)(v28 + 232);
              if ( (_QWORD *)*v48 == v48 )
              {
                v44 = 0LL;
              }
              else
              {
                v69 = *v48 - 1768LL;
                v49 = KeAbPreAcquire(v28 + 176, 0LL, 0LL, v46);
                v51 = v49;
                v77 = v49;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 176), 0LL) )
                {
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v28 + 176), v49, v28 + 176, v50);
                  v51 = v77;
                }
                if ( v51 )
                  *(_BYTE *)(v51 + 26) |= 1u;
                v52 = (_QWORD *)BugCheckParameter2;
                *(_QWORD *)(BugCheckParameter2 + 16) = v28;
                CurrentThread->Header.LockNV = CurrentThread->Header.LockNV & 0xFFFFFF83 | (4
                                                                                          * (*(_DWORD *)(v28 + 416) & 6)) | 3;
                v52[1] = *(_QWORD *)(v28 + 192);
                *v52 = v28 + 184;
                **(_QWORD **)(v28 + 192) = v52;
                *(_QWORD *)(v28 + 192) = v52;
                ++*(_DWORD *)(v28 + 456);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 176));
                KeAbPostRelease(v28 + 176);
                ++*(_WORD *)(v39 + 18);
                CurrentThread->Header.LockNV |= 0x4000u;
                v44 = v69;
                *(_QWORD *)(v69 + 1752) = BugCheckParameter2;
                v53 = (_QWORD *)(v44 + 1768);
                v54 = *(_QWORD *)(v44 + 1768);
                v55 = *(_QWORD **)(v44 + 1776);
                if ( *(_QWORD *)(v54 + 8) != v44 + 1768 || (_QWORD *)*v55 != v53 )
                  __fastfail(3u);
                *v55 = v54;
                *(_QWORD *)(v54 + 8) = v55;
                *v53 = 0LL;
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 224));
              KeAbPostRelease(v28 + 224);
              v41 = BugCheckParameter2;
            }
            *(_QWORD *)(a2 + 32) = 0LL;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 40) = 0LL;
            if ( v44 )
            {
              *(_QWORD *)(a2 + 24) = v44;
            }
            else
            {
              v56 = KeAbPreAcquire(v28 + 136, 0LL, 0LL, v42);
              v58 = v56;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 136), 0LL) )
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v28 + 136), v56, v28 + 136, v57);
              if ( v58 )
                *(_BYTE *)(v58 + 26) |= 1u;
              v59 = (_QWORD *)BugCheckParameter2;
              *(_QWORD *)(BugCheckParameter2 + 16) = v28;
              CurrentThread->Header.LockNV = CurrentThread->Header.LockNV & 0xFFFFFF81 | (4
                                                                                        * (*(_DWORD *)(v28 + 416) & 6)) | 1;
              v59[1] = *(_QWORD *)(v28 + 152);
              *v59 = v28 + 144;
              **(_QWORD **)(v28 + 152) = v59;
              *(_QWORD *)(v28 + 152) = v59;
              ++*(_DWORD *)(v28 + 448);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 136));
              KeAbPostRelease(v28 + 136);
              if ( (*(_DWORD *)(v28 + 416) & 0x200) != 0 )
              {
                ObfReferenceObject((PVOID)v28);
                *(_QWORD *)(a2 + 32) = v28;
                *(_BYTE *)(a2 + 58) = 0;
              }
              v41 = BugCheckParameter2;
            }
            if ( AlpcpMessageLogEnabled )
              AlpcpEnterStateChangeEventMessageLog(v41);
            v60 = 0;
            v61 = *(_BYTE *)(v39 + 16);
            if ( (v61 & 1) != 0 )
            {
              v60 = 0x10000 - *(__int16 *)(v39 + 18);
              *(_BYTE *)(v39 + 16) = v61 & 0xFE;
              *(_WORD *)(v39 + 18) = 0;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v39 + 32));
            KeAbPostRelease(v39 + 32);
            if ( v60 > 0 )
            {
              v62 = -v60 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 24), -v60);
              if ( v62 <= 0 )
              {
                if ( v62 )
                  KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v62);
                AlpcpDestroyBlob(BugCheckParameter2);
              }
            }
            v34 = (signed __int64 *)v71;
          }
          if ( _InterlockedCompareExchange64(v34, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v34);
          v33 = (ULONG_PTR)v34;
        }
        KeAbPostRelease(v33);
      }
      else
      {
        v67 = -1073741769;
      }
      v63 = v72;
      if ( _InterlockedCompareExchange64(v72 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v63 - 2);
      KeAbPostRelease((ULONG_PTR)(v63 - 2));
      v18 = BugCheckParameter2;
      goto LABEL_117;
    }
  }
  v67 = AlpcpCaptureMessageData(v18, v19, (char *)(a3 + 40));
LABEL_40:
  if ( v67 >= 0 )
    goto LABEL_41;
LABEL_117:
  if ( v67 < 0 && v18 )
  {
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v18);
    v64 = 0;
    v65 = *(_BYTE *)(v18 - 32);
    if ( (v65 & 1) != 0 )
    {
      v64 = 0x10000 - *(__int16 *)(v18 - 30);
      *(_BYTE *)(v18 - 32) = v65 & 0xFE;
      *(_WORD *)(v18 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v18 - 16));
    KeAbPostRelease(v18 - 16);
    if ( v64 > 0 )
    {
      v66 = -v64 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 - 24), -v64);
      if ( v66 <= 0 )
      {
        if ( v66 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v66);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
  }
  return (unsigned int)v67;
}
