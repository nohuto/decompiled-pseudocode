/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x140480230
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpAllocateMessage @ 0x14047CF10 (AlpcpAllocateMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047E410 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpValidateMessage @ 0x14047E4C0 (AlpcpValidateMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x140480024 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140482798 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpInsertMessageMainQueue @ 0x140482904 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpCaptureMessageData @ 0x1404A7424 (AlpcpCaptureMessageData.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14061FA98 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x140620C60 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140620E0C (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  int v8; // ecx
  _DWORD *v9; // r14
  int v10; // edi
  signed __int32 v11; // eax
  _DWORD *v12; // rcx
  ULONG_PTR v13; // r14
  __int64 v14; // rdx
  int v15; // edi
  unsigned __int64 *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 *v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rax
  struct _KTHREAD *v24; // rcx
  ULONG_PTR v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // r13
  __int64 v28; // rax
  __int64 v29; // r13
  _QWORD *v30; // rcx
  _DWORD *v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  ULONG_PTR v35; // rcx
  _QWORD *v36; // rbx
  int v37; // [rsp+20h] [rbp-98h]
  _DWORD *v38; // [rsp+28h] [rbp-90h] BYREF
  _DWORD *v39; // [rsp+38h] [rbp-80h]
  _QWORD *v40; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  __m128i v42; // [rsp+50h] [rbp-68h] BYREF
  __int128 v43; // [rsp+60h] [rbp-58h]
  __int64 v44; // [rsp+70h] [rbp-48h]

  v38 = 0LL;
  if ( a4 )
  {
    AlpcpProbeAndCaptureMessageHeader((__m128i *)a3, (__int64)&v42, 0);
  }
  else
  {
    v42 = *(__m128i *)a3;
    v43 = *(_OWORD *)(a3 + 16);
    v44 = *(_QWORD *)(a3 + 32);
  }
  if ( DWORD2(v43) )
    return AlpcpSendMessage((__int64 *)a2, (__m256i *)a3, 0LL, a4);
  v8 = *(_DWORD *)(a1 + 416);
  if ( (v8 & 0x2000) == 0 || (v8 & 6) != 4 || (v8 & 0x38) != 0 || v42.m128i_i16[3] )
    return AlpcpSendMessage((__int64 *)a2, (__m256i *)a3, 0LL, a4);
  if ( (unsigned __int64)v42.m128i_u16[1] > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  result = AlpcpValidateMessage((unsigned __int16 *)&v42, 1);
  if ( (int)result >= 0 )
  {
    v9 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
    v38 = v9;
    if ( v9 )
    {
      AlpcpLockForCachedReferenceBlob((ULONG_PTR)v9);
      --*((_WORD *)v9 - 15);
      v10 = v9[62] & 0x7FFFFFFF;
      memset(v9, 0, 0x108uLL);
      v9[62] = v10;
      do
        v11 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v11 );
      v12 = v38;
      v38[64] = v11;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterAllocationEventMessageLog(v12);
LABEL_17:
      CurrentThread = KeGetCurrentThread();
      v13 = (ULONG_PTR)v38;
      *(_OWORD *)(v38 + 58) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
      *(_DWORD *)(v13 + 224) = v42.m128i_i32[0];
      *(_WORD *)(v13 + 228) = 8193;
      if ( a4 )
      {
        v14 = v42.m128i_i16[0];
        if ( (unsigned __int64)v42.m128i_i16[0] < 0x200 )
        {
          memmove((void *)(v13 + 264), (const void *)(a3 + 40), v42.m128i_i16[0]);
          v15 = 0;
          v37 = 0;
          goto LABEL_21;
        }
      }
      else
      {
        v14 = v42.m128i_i16[0];
        if ( (unsigned __int64)v42.m128i_i16[0] < 0x200 )
        {
          memmove((void *)(v13 + 264), (const void *)(a3 + 40), v42.m128i_i16[0]);
          v37 = 0;
          goto LABEL_22;
        }
      }
      v15 = AlpcpCaptureMessageData(v13, v14, a3 + 40);
      v37 = v15;
LABEL_21:
      if ( v15 < 0 )
      {
LABEL_83:
        if ( v13 )
          AlpcpUnlockMessage(v13);
        return (unsigned int)v15;
      }
LABEL_22:
      v40 = *(_QWORD **)(a1 + 16);
      v16 = v40 - 2;
      v17 = KeAbPreAcquire((ULONG_PTR)(v40 - 2), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v16, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v16, v17, (ULONG_PTR)v16);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      v18 = *(_QWORD *)(a1 + 424);
      v19 = *(_QWORD *)(a1 + 432);
      v39 = (_DWORD *)v19;
      if ( v18 && v19 )
      {
        v20 = (unsigned __int64 *)(v19 + 352);
        v21 = KeAbPreAcquire(v19 + 352, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v20, v21, (ULONG_PTR)v20);
        if ( v21 )
          *(_BYTE *)(v21 + 26) |= 1u;
        if ( (v39[104] & 0x20) != 0 )
        {
          v37 = -1073741769;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v20);
          v35 = (ULONG_PTR)v20;
        }
        else
        {
          *((_QWORD *)v38 + 15) = *((_QWORD *)v39 + 7);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v20);
          KeAbPostRelease((ULONG_PTR)v20);
          v22 = KeAbPreAcquire(v18 + 352, 0LL, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 352), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)(v18 + 352), v22, v18 + 352);
          if ( v22 )
            *(_BYTE *)(v22 + 26) |= 1u;
          if ( (*(_DWORD *)(v18 + 416) & 0x20) != 0 )
          {
            v37 = -1073741769;
          }
          else
          {
            v23 = (__int64)v38;
            v39 = v38 - 12;
            *((_WORD *)v39 + 9) += 3;
            v24 = CurrentThread;
            _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v23);
            v25 = (ULONG_PTR)v38;
            *((_QWORD *)v38 + 4) = v24;
            AlpcpSetOwnerPortMessage(v25, (void *)a1, 0);
            v26 = v40;
            *(_QWORD *)(v25 + 176) = v40;
            *(_QWORD *)(v25 + 184) = *v26;
            *(_QWORD *)(a2 + 8) = v25;
            if ( AlpcpLogEnabled )
            {
              AlpcpLogSendMessage(v25);
              if ( AlpcpLogEnabled )
                AlpcpLogWaitForReply(v25);
            }
            v27 = 0LL;
            if ( *(_QWORD *)(v18 + 232) != v18 + 232 )
            {
              v28 = KeAbPreAcquire(v18 + 224, 0LL, 0LL);
              v29 = v28;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 224), 0LL) )
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v18 + 224), v28, v18 + 224);
              if ( v29 )
                *(_BYTE *)(v29 + 26) |= 1u;
              v30 = (_QWORD *)(v18 + 232);
              if ( (_QWORD *)*v30 == v30 )
              {
                v27 = 0LL;
              }
              else
              {
                v27 = (_QWORD *)(*v30 - 1768LL);
                v31 = v38;
                v27[219] = v38;
                ++*((_WORD *)v39 + 9);
                v31[10] |= 0x4000u;
                AlpcpInsertMessagePendingQueue(v18, v31);
                v32 = v27 + 221;
                v33 = v27[221];
                v34 = (_QWORD *)v27[222];
                if ( *(_QWORD **)(v33 + 8) != v27 + 221 || (_QWORD *)*v34 != v32 )
                  __fastfail(3u);
                *v34 = v33;
                *(_QWORD *)(v33 + 8) = v34;
                *v32 = 0LL;
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v18 + 224));
              KeAbPostRelease(v18 + 224);
              v25 = (ULONG_PTR)v38;
            }
            *(_QWORD *)(a2 + 32) = 0LL;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 40) = 0LL;
            if ( v27 )
            {
              *(_QWORD *)(a2 + 24) = v27;
            }
            else
            {
              AlpcpInsertMessageMainQueue(v18, v25);
              if ( (*(_DWORD *)(v18 + 416) & 0x200) != 0 )
              {
                ObfReferenceObject((PVOID)v18);
                *(_QWORD *)(a2 + 32) = v18;
                *(_BYTE *)(a2 + 58) = 0;
              }
            }
            AlpcpUnlockMessage(v25);
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 352), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v18 + 352));
          v35 = v18 + 352;
        }
        KeAbPostRelease(v35);
      }
      else
      {
        v37 = -1073741769;
      }
      v36 = v40;
      if ( _InterlockedCompareExchange64(v40 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v36 - 2);
      KeAbPostRelease((ULONG_PTR)(v36 - 2));
      v13 = (ULONG_PTR)v38;
      v15 = v37;
      if ( v37 >= 0 )
        return (unsigned int)v15;
      goto LABEL_83;
    }
    result = AlpcpAllocateMessage(&v38, 0LL, 0);
    if ( (int)result >= 0 )
      goto LABEL_17;
  }
  return result;
}
