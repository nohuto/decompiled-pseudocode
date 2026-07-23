/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x140446E10
 * Callers:
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x14049F988 (AlpcpDispatchMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x14044A830 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044B480 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1406569EC (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140656B98 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 *a1)
{
  __int64 v1; // rdi
  int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // r13
  int v6; // r12d
  _BYTE *v8; // rax
  _BYTE *v9; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int16 v11; // cx
  __int16 v12; // cx
  __int64 v13; // r14
  volatile signed __int64 *v14; // rsi
  _BYTE *v15; // rax
  _BYTE *v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rcx
  signed __int64 *v21; // rsi
  char v22; // al
  char v23; // cl
  int v24; // ebp
  __int64 v25; // r9
  signed __int64 BugCheckParameter4; // rcx
  __int64 v27; // rbx
  int (__fastcall *v28)(__int64); // rax
  _SLIST_HEADER *v29; // r8
  void *v30; // rcx
  struct _KTHREAD *v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+90h] [rbp+8h]
  int v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h]
  __int64 v35; // [rsp+A8h] [rbp+20h]

  v1 = a1[1];
  v3 = *((_DWORD *)a1 + 12);
  v4 = *a1;
  v32 = v3;
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v35 = *(_QWORD *)(v1 + 32);
  v34 = (*(_DWORD *)(v1 + 40) >> 12) & 1;
  v6 = (*(_DWORD *)(v5 + 416) >> 1) & 3;
  if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) <= *(_QWORD *)(v5 + 272) )
  {
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *((_WORD *)a1 + 27) == 11 )
    {
      v8 = (_BYTE *)KeAbPreAcquire(v5 + 352, 0LL, 0);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 352), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 352), v8, v5 + 352);
      if ( v9 )
        v9[26] |= 1u;
      *(_DWORD *)(v5 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
      KeAbPostRelease(v5 + 352);
      v3 = v32;
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 234) = *((_WORD *)a1 + 26);
    v31 = CurrentThread;
    *(_WORD *)(v1 + 232) = *((_WORD *)a1 + 26) - 40;
    v11 = *((_WORD *)a1 + 27);
    *(_WORD *)(v1 + 236) = v11;
    *(_WORD *)(v1 + 238) = *((_WORD *)a1 + 28);
    *(_OWORD *)(v1 + 240) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
    if ( (v3 & 0x10000) != 0 )
    {
      *(_DWORD *)(v1 + 40) |= 0x200u;
      v12 = v11 & 0xDFFF;
    }
    else
    {
      *(_DWORD *)(v1 + 40) &= ~0x200u;
      v12 = v11 | 0x2000;
    }
    *(_WORD *)(v1 + 236) = v12;
    AlpcpSetOwnerPortMessage(v1, v4);
    v33 = v3 & 0x20000;
    if ( (v3 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 40) |= 0x100u;
    v13 = *(_QWORD *)(v1 + 16);
    if ( v13 )
    {
      v14 = (volatile signed __int64 *)(v13 + 176);
      v15 = (_BYTE *)KeAbPreAcquire(v13 + 176, 0LL, 0);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 176), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 + 176), v15, v13 + 176);
      if ( v16 )
        v16[26] |= 1u;
      --*(_DWORD *)(v13 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      v13 = 0LL;
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      --*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 40) = *(_DWORD *)(v1 + 40) & 0xFFFFFFF8 | 5;
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v17 = *(_DWORD *)(v1 + 40) ^ (*(_DWORD *)(v1 + 40) ^ (8 * v6)) & 0x78;
    *(_DWORD *)(v1 + 40) = v17;
    if ( ((v17 >> 3) & 0xF) == 1 )
    {
      v18 = *(_QWORD *)(v5 + 16);
      v19 = KeAbPreAcquire(v18 - 16, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 - 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v18 - 16), v19, v18 - 16);
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      v20 = *(_QWORD *)(v18 + 8);
      if ( v20 )
        *(_QWORD *)(v1 + 120) = *(_QWORD *)(v20 + 56);
      else
        *(_QWORD *)(v1 + 120) = 0LL;
      v21 = (signed __int64 *)(v18 - 16);
      v13 = 0LL;
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
    }
    else
    {
      *(_QWORD *)(v1 + 120) = *(_QWORD *)(v5 + 56);
    }
    if ( *(_QWORD *)(v1 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v1);
      *(_QWORD *)(v1 + 176) = v13;
    }
    v22 = AlpcpLogEnabled;
    if ( AlpcpLogEnabled )
    {
      AlpcpLogSendMessage(v1);
      v22 = AlpcpLogEnabled;
    }
    if ( v33 )
    {
      *(_QWORD *)(v1 + 32) = v31;
      a1[3] = v35;
      if ( v22 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      *(_QWORD *)(v1 + 32) = v13;
      --*(_WORD *)(v1 - 30);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v1);
      v23 = *(_BYTE *)(v1 - 32);
      v24 = v13;
      if ( (v23 & 1) != 0 )
      {
        v24 = 0x10000 - *(__int16 *)(v1 - 30);
        *(_WORD *)(v1 - 30) = v13;
        *(_BYTE *)(v1 - 32) = v23 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 - 16));
      KeAbPostRelease(v1 - 16);
      if ( v24 > 0 )
      {
        BugCheckParameter4 = -v24 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 24), -v24);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, v1, 0x28uLL, BugCheckParameter4);
          v27 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v1 - 31)];
          v28 = *(int (__fastcall **)(__int64))(v27 + 32);
          if ( !v28 || v28(v1) >= 0 )
          {
            if ( (*(_BYTE *)(v1 - 32) & 2) != 0 )
            {
              v29 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v27 + 8);
              ++*((_DWORD *)&v29[1].HeaderX64 + 3);
              if ( LOWORD(v29->Alignment) < LOWORD(v29[1].Alignment) )
              {
                RtlpInterlockedPushEntrySList(v29, (PSLIST_ENTRY)(v1 - 48));
              }
              else
              {
                ++LODWORD(v29[2].Alignment);
                ((void (__fastcall *)(__int64))v29[3].Region)(v1 - 48);
              }
            }
            else
            {
              v30 = (void *)(v1 - 48);
              if ( *(_QWORD *)(v27 + 40) )
                (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v27 + 8)
                                                                  + 7))(v30);
              else
                ExFreePoolWithTag(v30, *(_DWORD *)(v27 + 4));
            }
          }
        }
      }
      if ( (v32 & 4) != 0 )
        a1[3] = v35;
      else
        KeReleaseSemaphoreEx(v35 + 1600, 1u, 1, v25, 2);
    }
    if ( v34 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
  else
  {
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
}
