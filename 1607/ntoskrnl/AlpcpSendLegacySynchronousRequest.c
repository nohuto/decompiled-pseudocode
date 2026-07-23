/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x14049E74C
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateMessage @ 0x14040A24C (AlpcpAllocateMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x14044A830 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpValidateMessage @ 0x14049FEF4 (AlpcpValidateMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14049FF34 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1404A0010 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpInsertMessageMainQueue @ 0x1404A00E4 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpCaptureMessageData @ 0x1404A01B8 (AlpcpCaptureMessageData.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140654E20 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1406569EC (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140656B98 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, __int64 a2, __m256i *a3, char a4)
{
  __int64 v5; // r10
  int v7; // ecx
  __int64 result; // rax
  _DWORD *v9; // r14
  int v10; // edi
  signed __int32 v11; // eax
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned __int64 *v24; // rdi
  __int64 v25; // r15
  ULONG_PTR v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  struct _KTHREAD *v29; // rcx
  ULONG_PTR v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _BYTE *v33; // rax
  _BYTE *v34; // rdi
  _QWORD *v35; // rax
  ULONG_PTR v36; // rdi
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  _QWORD *v41; // rbx
  int v42; // [rsp+20h] [rbp-98h]
  _DWORD *v43; // [rsp+28h] [rbp-90h] BYREF
  _DWORD *v44; // [rsp+30h] [rbp-88h]
  __int64 v45; // [rsp+38h] [rbp-80h]
  _QWORD *v46; // [rsp+40h] [rbp-78h]
  unsigned __int64 v47; // [rsp+48h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  __int128 v49; // [rsp+58h] [rbp-60h] BYREF
  __int128 v50; // [rsp+68h] [rbp-50h]
  __int64 v51; // [rsp+78h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp+10h]

  v52 = a2;
  v5 = a2;
  v43 = 0LL;
  if ( a4 )
  {
    AlpcpProbeAndCaptureMessageHeader(a3, &v49, 0LL);
  }
  else
  {
    v49 = *(_OWORD *)a3->m256i_i8;
    v50 = *(_OWORD *)&a3->m256i_u64[2];
    v51 = a3[1].m256i_i64[0];
  }
  if ( DWORD2(v50) )
    return AlpcpSendMessage(v5, a3, 0LL, a4);
  v7 = *(_DWORD *)(a1 + 416);
  if ( (v7 & 0x2000) == 0 || (v7 & 6) != 4 || (v7 & 0x38) != 0 || WORD3(v49) )
    return AlpcpSendMessage(v5, a3, 0LL, a4);
  if ( (unsigned __int64)WORD1(v49) > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  LOBYTE(a2) = 1;
  result = AlpcpValidateMessage(&v49, a2, a3);
  if ( (int)result >= 0 )
  {
    v9 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
    v43 = v9;
    if ( v9 )
    {
      AlpcpLockForCachedReferenceBlob((ULONG_PTR)v9);
      --*((_WORD *)v9 - 15);
      v10 = v9[64] & 0x7FFFFFFF;
      memset(v9, 0, 0x110uLL);
      v9[64] = v10;
      do
        v11 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v11 );
      v12 = (ULONG_PTR)v43;
      v43[66] = v11;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterAllocationEventMessageLog(v12);
    }
    else
    {
      result = AlpcpAllocateMessage((ULONG_PTR *)&v43, 0LL, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    CurrentThread = KeGetCurrentThread();
    v13 = (ULONG_PTR)v43;
    *((_OWORD *)v43 + 15) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
    *(_DWORD *)(v13 + 232) = v49;
    *(_WORD *)(v13 + 236) = 8193;
    if ( a4 )
    {
      v14 = (__int16)v49;
      v15 = *(_QWORD *)(v13 + 96);
      if ( v15 )
        v16 = *(_QWORD *)(v15 + 32) - 40LL;
      else
        v16 = 512LL;
      v47 = v16;
      if ( (__int16)v49 <= v16 )
      {
        memmove((void *)(v13 + 272), &a3[1].m256i_u64[1], (__int16)v49);
        v17 = 0;
        v42 = 0;
        goto LABEL_31;
      }
    }
    else
    {
      v14 = (__int16)v49;
      v18 = *(_QWORD *)(v13 + 96);
      if ( v18 )
        v19 = *(_QWORD *)(v18 + 32) - 40LL;
      else
        v19 = 512LL;
      if ( (__int16)v49 <= v19 )
      {
        memmove((void *)(v13 + 272), &a3[1].m256i_u64[1], (__int16)v49);
        v42 = 0;
        goto LABEL_32;
      }
    }
    v17 = AlpcpCaptureMessageData(v13, v14, &a3[1].m256i_u64[1]);
    v42 = v17;
LABEL_31:
    if ( v17 < 0 )
    {
LABEL_83:
      if ( v13 )
        AlpcpUnlockMessage(v13);
      return (unsigned int)v17;
    }
LABEL_32:
    v46 = *(_QWORD **)(a1 + 16);
    v20 = v46 - 2;
    v21 = KeAbPreAcquire((ULONG_PTR)(v46 - 2), 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v20, v21, (ULONG_PTR)v20);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    v22 = *(_QWORD *)(a1 + 424);
    v23 = *(_QWORD *)(a1 + 432);
    v45 = v23;
    if ( v22 && v23 )
    {
      v24 = (unsigned __int64 *)(v23 + 352);
      v25 = KeAbPreAcquire(v23 + 352, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v24, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v24, v25, (ULONG_PTR)v24);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      if ( (*(_DWORD *)(v45 + 416) & 0x20) != 0 )
      {
        v42 = -1073741769;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v24, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v24);
        v26 = (ULONG_PTR)v24;
      }
      else
      {
        *((_QWORD *)v43 + 15) = *(_QWORD *)(v45 + 56);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v24, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v24);
        KeAbPostRelease((ULONG_PTR)v24);
        v27 = KeAbPreAcquire(v22 + 352, 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 352), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)(v22 + 352), v27, v22 + 352);
        if ( v27 )
          *(_BYTE *)(v27 + 26) |= 1u;
        if ( (*(_DWORD *)(v22 + 416) & 0x20) != 0 )
        {
          v42 = -1073741769;
        }
        else
        {
          v28 = (__int64)v43;
          v44 = v43 - 12;
          *((_WORD *)v44 + 9) += 3;
          v29 = CurrentThread;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v28);
          v30 = (ULONG_PTR)v43;
          *((_QWORD *)v43 + 4) = v29;
          AlpcpSetOwnerPortMessage(v30, (void *)a1);
          v31 = v46;
          *(_QWORD *)(v30 + 184) = v46;
          *(_QWORD *)(v30 + 192) = *v31;
          *(_QWORD *)(v52 + 8) = v30;
          if ( AlpcpLogEnabled )
          {
            AlpcpLogSendMessage(v30);
            if ( AlpcpLogEnabled )
              AlpcpLogWaitForReply(v30);
          }
          v32 = 0LL;
          v45 = 0LL;
          if ( *(_QWORD *)(v22 + 232) != v22 + 232 )
          {
            v33 = (_BYTE *)KeAbPreAcquire(v22 + 224, 0LL, 0);
            v34 = v33;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 224), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v22 + 224), v33, v22 + 224);
            if ( v34 )
              v34[26] |= 1u;
            v35 = (_QWORD *)(v22 + 232);
            if ( (_QWORD *)*v35 != v35 )
            {
              v45 = *v35 - 1760LL;
              v36 = (ULONG_PTR)v43;
              AlpcpInsertMessagePendingQueue(v22, v43);
              ++*((_WORD *)v44 + 9);
              *(_DWORD *)(v36 + 40) |= 0x4000u;
              v37 = v45;
              *(_QWORD *)(v45 + 1752) = v36;
              v38 = (_QWORD *)(v37 + 1760);
              v39 = *(_QWORD *)(v37 + 1760);
              v40 = *(_QWORD **)(v37 + 1768);
              if ( *(_QWORD **)(v39 + 8) != v38 || (_QWORD *)*v40 != v38 )
                __fastfail(3u);
              *v40 = v39;
              *(_QWORD *)(v39 + 8) = v40;
              *v38 = 0LL;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 224));
            KeAbPostRelease(v22 + 224);
            v30 = (ULONG_PTR)v43;
            v32 = v45;
          }
          *(_QWORD *)(v52 + 32) = 0LL;
          *(_QWORD *)(v52 + 24) = 0LL;
          *(_QWORD *)(v52 + 40) = 0LL;
          if ( v32 )
          {
            *(_QWORD *)(v52 + 24) = v32;
          }
          else
          {
            AlpcpInsertMessageMainQueue(v22, v30);
            if ( (*(_DWORD *)(v22 + 416) & 0x200) != 0 )
            {
              ObfReferenceObject((PVOID)v22);
              *(_QWORD *)(v52 + 32) = v22;
              *(_BYTE *)(v52 + 58) = 0;
            }
          }
          AlpcpUnlockMessage(v30);
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v22 + 352));
        v26 = v22 + 352;
      }
      KeAbPostRelease(v26);
    }
    else
    {
      v42 = -1073741769;
    }
    v41 = v46;
    if ( _InterlockedCompareExchange64(v46 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v41 - 2);
    KeAbPostRelease((ULONG_PTR)(v41 - 2));
    v13 = (ULONG_PTR)v43;
    v17 = v42;
    if ( v42 >= 0 )
      return (unsigned int)v17;
    goto LABEL_83;
  }
  return result;
}
