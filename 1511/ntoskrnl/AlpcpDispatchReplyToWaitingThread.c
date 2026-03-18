/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x14042B610
 * Callers:
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x14047E334 (AlpcpDispatchMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpDestroyBlob @ 0x1404253D4 (AlpcpDestroyBlob.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14042BA70 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpSetOwnerPortMessage @ 0x140480024 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14061FC34 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x140620C60 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140620E0C (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1)
{
  ULONG_PTR v1; // rdi
  int v3; // ebp
  signed __int32 *v4; // rsi
  __int64 v5; // r15
  int v6; // r12d
  struct _KTHREAD *CurrentThread; // r13
  __int16 v8; // cx
  __int16 v9; // cx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebp
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // eax
  char v18; // al
  char v19; // cl
  int v20; // esi
  __int64 v21; // r9
  signed __int64 BugCheckParameter4; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rcx
  struct _KTHREAD *v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+90h] [rbp+8h]
  int v31; // [rsp+98h] [rbp+10h]
  char v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(signed __int32 **)a1;
  v32 = v3;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v33 = *(_QWORD *)(v1 + 32);
  v6 = (*(_DWORD *)(v1 + 40) >> 12) & 1;
  v31 = (*(_DWORD *)(v5 + 416) >> 1) & 3;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *(_QWORD *)(v5 + 272) )
  {
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
  else
  {
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 192) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      v24 = KeAbPreAcquire(v5 + 352, 0LL, 0LL);
      v25 = v24;
      v29 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 352), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 352), v24, v5 + 352);
        v25 = v29;
      }
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      *(_DWORD *)(v5 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
      KeAbPostRelease(v5 + 352);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 226) = *(_WORD *)(a1 + 52);
    v28 = CurrentThread;
    *(_WORD *)(v1 + 224) = *(_WORD *)(a1 + 52) - 40;
    v8 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 228) = v8;
    *(_WORD *)(v1 + 230) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v1 + 232) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
    if ( (v3 & 0x10000) != 0 )
    {
      *(_DWORD *)(v1 + 40) |= 0x200u;
      v9 = v8 & 0xDFFF;
    }
    else
    {
      *(_DWORD *)(v1 + 40) &= ~0x200u;
      v9 = v8 | 0x2000;
    }
    *(_WORD *)(v1 + 228) = v9;
    if ( (_bittest(v4 + 104, 0xDu) & _bittest((const signed __int32 *)(v1 + 40), 9u)) != 0 )
    {
      AlpcpSetOwnerPortMessage(v1, v4, 0LL);
    }
    else
    {
      ObfReferenceObject(v4);
      *(_DWORD *)(v1 + 40) |= 0x1000u;
      *(_QWORD *)(v1 + 24) = v4;
    }
    v13 = v3 & 0x20000;
    if ( v13 )
    {
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 40) |= 0x100u;
    v14 = *(_QWORD *)(v1 + 16);
    if ( v14 )
    {
      v15 = KeAbPreAcquire(v14 + 176, 0LL, 0LL);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 176), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 176), v15, v14 + 176);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      --*(_DWORD *)(v14 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 176));
      KeAbPostRelease(v14 + 176);
      --*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v17 = *(_DWORD *)(v1 + 40) ^ (*(_DWORD *)(v1 + 40) ^ (8 * v31)) & 0x78;
    *(_DWORD *)(v1 + 40) = v17;
    if ( ((v17 >> 3) & 0xF) == 1 )
    {
      v30 = *(_QWORD *)(v5 + 16);
      v26 = KeAbPreAcquire(v30 - 16, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v30 - 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v30 - 16), v26, v30 - 16);
      if ( v26 )
        *(_BYTE *)(v26 + 26) |= 1u;
      v27 = *(_QWORD *)(v30 + 8);
      if ( v27 )
        *(_QWORD *)(v1 + 120) = *(_QWORD *)(v27 + 56);
      else
        *(_QWORD *)(v1 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v30 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v30 - 16));
      KeAbPostRelease(v30 - 16);
    }
    else
    {
      *(_QWORD *)(v1 + 120) = *(_QWORD *)(v5 + 56);
    }
    if ( *(_QWORD *)(v1 + 168) )
    {
      AlpcpCaptureMessageDataSafe(v1, v10, v11, v12);
      *(_QWORD *)(v1 + 168) = 0LL;
    }
    v18 = AlpcpLogEnabled;
    if ( AlpcpLogEnabled )
    {
      AlpcpLogSendMessage(v1);
      v18 = AlpcpLogEnabled;
    }
    if ( v13 )
    {
      *(_QWORD *)(v1 + 32) = v28;
      *(_QWORD *)(a1 + 24) = v33;
      if ( v18 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      *(_QWORD *)(v1 + 32) = 0LL;
      --*(_WORD *)(v1 - 30);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v1);
      v19 = *(_BYTE *)(v1 - 32);
      v20 = 0;
      if ( (v19 & 1) != 0 )
      {
        v20 = 0x10000 - *(__int16 *)(v1 - 30);
        *(_WORD *)(v1 - 30) = 0;
        *(_BYTE *)(v1 - 32) = v19 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 - 16));
      KeAbPostRelease(v1 - 16);
      if ( v20 > 0 )
      {
        BugCheckParameter4 = -v20 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 24), -v20);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, v1, 0x28uLL, BugCheckParameter4);
          AlpcpDestroyBlob(v1);
        }
      }
      if ( (v32 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v33;
      else
        KeReleaseSemaphoreEx(v33 + 1592, 1, 1LL, v21, 2);
    }
    if ( v6 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
}
