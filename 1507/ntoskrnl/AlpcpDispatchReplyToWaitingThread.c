/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x140480E50
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14049CC90 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1406A02DC (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406A0488 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  int v5; // ebp
  int v6; // r13d
  void *v8; // r12
  __int64 v9; // r14
  char v10; // cl
  int v11; // r14d
  signed __int64 BugCheckParameter4; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int16 v18; // cx
  __int16 v19; // cx
  __int64 v20; // r9
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // r9
  __int64 v29; // rcx
  char v30; // al
  char v31; // cl
  int v32; // eax
  signed __int64 v33; // rcx
  __int64 v34; // rbx
  int (__fastcall *v35)(ULONG_PTR); // rax
  _SLIST_HEADER *v36; // r8
  void *v37; // rcx
  char v38; // cl
  int v39; // eax
  __int64 v40; // r9
  signed __int64 v41; // rcx
  __int64 v42; // rbx
  int (__fastcall *v43)(ULONG_PTR); // rax
  _SLIST_HEADER *v44; // r8
  void *v45; // rcx
  __int64 v46; // [rsp+30h] [rbp-68h]
  struct _KTHREAD *v47; // [rsp+40h] [rbp-58h]
  int v48; // [rsp+A0h] [rbp+8h]
  int v49; // [rsp+A8h] [rbp+10h]
  char v50; // [rsp+B0h] [rbp+18h]
  int v51; // [rsp+B8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 48);
  v8 = *(void **)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v9 = *(_QWORD *)(v4 + 24);
  v46 = *(_QWORD *)(v4 + 32);
  v50 = v6;
  v51 = (*(_DWORD *)(v4 + 40) >> 12) & 1;
  v48 = (*(_DWORD *)(v9 + 416) >> 1) & 3;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) <= *(_QWORD *)(v9 + 272) )
  {
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 192) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      v14 = KeAbPreAcquire(v9 + 352, 0LL, 0LL, a4);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 352), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 352), v14, v9 + 352, v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *(_DWORD *)(v9 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 352));
      KeAbPostRelease(v9 + 352);
      v5 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v4 + 226) = *(_WORD *)(a1 + 52);
    v47 = CurrentThread;
    *(_WORD *)(v4 + 224) = *(_WORD *)(a1 + 52) - 40;
    v18 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v4 + 228) = v18;
    *(_WORD *)(v4 + 230) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v4 + 232) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
    if ( (v6 & 0x10000) != 0 )
    {
      *(_DWORD *)(v4 + 40) |= 0x200u;
      v19 = v18 & 0xDFFF;
    }
    else
    {
      *(_DWORD *)(v4 + 40) &= ~0x200u;
      v19 = v18 | 0x2000;
    }
    *(_WORD *)(v4 + 228) = v19;
    ObfReferenceObject(v8);
    *(_DWORD *)(v4 + 40) |= 0x1000u;
    *(_QWORD *)(v4 + 24) = v8;
    v49 = v6 & 0x20000;
    if ( (v6 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v4);
      *(_DWORD *)(v4 + 40) |= 0x800u;
      ++*(_WORD *)(v4 - 30);
    }
    *(_DWORD *)(v4 + 40) |= 0x100u;
    v21 = *(_QWORD *)(v4 + 16);
    if ( v21 )
    {
      v22 = KeAbPreAcquire(v21 + 176, 0LL, 0LL, v20);
      v24 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 176), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v21 + 176), v22, v21 + 176, v23);
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      --*(_DWORD *)(v21 + 456);
      *(_DWORD *)(v4 + 40) &= 0xFFFFFFF8;
      v5 = 0;
      *(_QWORD *)(v4 + 16) = 0LL;
      **(_QWORD **)(v4 + 8) = *(_QWORD *)v4;
      *(_QWORD *)(*(_QWORD *)v4 + 8LL) = *(_QWORD *)(v4 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v21 + 176));
      KeAbPostRelease(v21 + 176);
      --*(_WORD *)(v4 - 30);
    }
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 40) & 0xFFFFFFF8 | 5;
    *(_DWORD *)(v4 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v9 + 400));
    v25 = *(_DWORD *)(v4 + 40) ^ (*(_DWORD *)(v4 + 40) ^ (8 * v48)) & 0x78;
    *(_DWORD *)(v4 + 40) = v25;
    if ( ((v25 >> 3) & 0xF) == 1 )
    {
      v26 = *(_QWORD *)(v9 + 16);
      v27 = KeAbPreAcquire(v26 - 16, 0LL, 0LL, v20);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v26 - 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v26 - 16), v27, v26 - 16, v28);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      v29 = *(_QWORD *)(v26 + 8);
      v5 = 0;
      if ( v29 )
        *(_QWORD *)(v4 + 120) = *(_QWORD *)(v29 + 56);
      else
        *(_QWORD *)(v4 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v26 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v26 - 16));
      KeAbPostRelease(v26 - 16);
    }
    else
    {
      *(_QWORD *)(v4 + 120) = *(_QWORD *)(v9 + 56);
    }
    if ( *(_QWORD *)(v4 + 168) )
    {
      AlpcpCaptureMessageDataSafe(v4);
      *(_QWORD *)(v4 + 168) = 0LL;
    }
    v30 = AlpcpLogEnabled;
    if ( AlpcpLogEnabled )
    {
      AlpcpLogSendMessage(v4);
      v30 = AlpcpLogEnabled;
    }
    if ( v49 )
    {
      *(_QWORD *)(v4 + 32) = v47;
      *(_QWORD *)(a1 + 24) = v46;
      if ( v30 )
        AlpcpLogWaitForReply(v4);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v4);
      v31 = *(_BYTE *)(v4 - 32);
      if ( (v31 & 1) != 0 )
      {
        v32 = *(__int16 *)(v4 - 30);
        *(_BYTE *)(v4 - 32) = v31 & 0xFE;
        v5 = 0x10000 - v32;
        *(_WORD *)(v4 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 - 16));
      KeAbPostRelease(v4 - 16);
      if ( v5 > 0 )
      {
        v33 = -v5 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), -v5);
        if ( v33 <= 0 )
        {
          if ( v33 )
            KeBugCheckEx(0x18u, 0LL, v4, 0x28uLL, v33);
          v34 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v4 - 31)];
          v35 = *(int (__fastcall **)(ULONG_PTR))(v34 + 32);
          if ( !v35 || v35(v4) >= 0 )
          {
            if ( (*(_BYTE *)(v4 - 32) & 2) != 0 )
            {
              v36 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v34 + 8);
              ++*((_DWORD *)&v36[1].HeaderX64 + 3);
              if ( LOWORD(v36->Alignment) < LOWORD(v36[1].Alignment) )
              {
                RtlpInterlockedPushEntrySList(v36, (PSLIST_ENTRY)(v4 - 48));
              }
              else
              {
                ++LODWORD(v36[2].Alignment);
                ((void (__fastcall *)(ULONG_PTR))v36[3].Region)(v4 - 48);
              }
            }
            else
            {
              v37 = (void *)(v4 - 48);
              if ( *(_QWORD *)(v34 + 40) )
                (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v34 + 8)
                                                                  + 7))(v37);
              else
                ExFreePoolWithTag(v37, *(_DWORD *)(v34 + 4));
            }
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v4 + 32) = 0LL;
      --*(_WORD *)(v4 - 30);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v4);
      v38 = *(_BYTE *)(v4 - 32);
      if ( (v38 & 1) != 0 )
      {
        v39 = *(__int16 *)(v4 - 30);
        *(_BYTE *)(v4 - 32) = v38 & 0xFE;
        v5 = 0x10000 - v39;
        *(_WORD *)(v4 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 - 16));
      KeAbPostRelease(v4 - 16);
      if ( v5 > 0 )
      {
        v41 = -v5 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), -v5);
        if ( v41 <= 0 )
        {
          if ( v41 )
            KeBugCheckEx(0x18u, 0LL, v4, 0x28uLL, v41);
          v42 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v4 - 31)];
          v43 = *(int (__fastcall **)(ULONG_PTR))(v42 + 32);
          if ( !v43 || v43(v4) >= 0 )
          {
            if ( (*(_BYTE *)(v4 - 32) & 2) != 0 )
            {
              v44 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v42 + 8);
              ++*((_DWORD *)&v44[1].HeaderX64 + 3);
              if ( LOWORD(v44->Alignment) < LOWORD(v44[1].Alignment) )
              {
                RtlpInterlockedPushEntrySList(v44, (PSLIST_ENTRY)(v4 - 48));
              }
              else
              {
                ++LODWORD(v44[2].Alignment);
                ((void (__fastcall *)(ULONG_PTR))v44[3].Region)(v4 - 48);
              }
            }
            else
            {
              v45 = (void *)(v4 - 48);
              if ( *(_QWORD *)(v42 + 40) )
                (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v42 + 8)
                                                                  + 7))(v45);
              else
                ExFreePoolWithTag(v45, *(_DWORD *)(v42 + 4));
            }
          }
        }
      }
      if ( (v50 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v46;
      else
        KeReleaseSemaphoreEx(v46 + 1592, 1, 1, v40, 2);
    }
    if ( v51 )
      ObfDereferenceObject((PVOID)v9);
    return 0LL;
  }
  else
  {
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v4);
    v10 = *(_BYTE *)(v4 - 32);
    v11 = 0;
    if ( (v10 & 1) != 0 )
    {
      v11 = 0x10000 - *(__int16 *)(v4 - 30);
      *(_WORD *)(v4 - 30) = 0;
      *(_BYTE *)(v4 - 32) = v10 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 - 16));
    KeAbPostRelease(v4 - 16);
    if ( v11 > 0 )
    {
      BugCheckParameter4 = -v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), -v11);
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v4, 0x28uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v4);
      }
    }
    return 3221225507LL;
  }
}
