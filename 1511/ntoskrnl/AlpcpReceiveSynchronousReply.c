/*
 * XREFs of AlpcpReceiveSynchronousReply @ 0x14042EF50
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140482368 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     AlpcpWaitForSingleObject @ 0x1400E38BC (AlpcpWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140482798 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x140620C04 (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveSynchronousReply(
        __int64 *a1,
        unsigned __int8 a2,
        ULONG_PTR *a3,
        int a4,
        PLARGE_INTEGER a5)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // ebp
  ULONG_PTR v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  volatile signed __int64 *v17; // rdi
  __int64 v18; // rsi
  int v19; // ecx
  __int64 v20; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v20 = *a1;
  v8 = AlpcpSignalAndWait((__int64)a1, &CurrentThread[1].StateSaveArea, WrLpcReply, a2, a5, 1);
  v9 = _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, 0LL);
  if ( v9 )
  {
    v10 = KeAbPreAcquire(v9 - 16, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 - 16), v10, v9 - 16);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    *(_BYTE *)(v9 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v9, 0x26uLL, BugCheckParameter4);
    v13 = *(_DWORD *)(v9 + 40);
    if ( (v13 & 0x800) != 0 )
      *(_DWORD *)(v9 + 40) = v13 & 0xFFFFF7FF;
    --*(_WORD *)(v9 - 30);
    if ( v8 )
    {
      if ( *(struct _KTHREAD **)(v9 + 32) == CurrentThread )
      {
        *(_QWORD *)(v9 + 32) = 0LL;
        --*(_WORD *)(v9 - 30);
        if ( (*(_DWORD *)(v9 + 40) & 0x80u) != 0 )
          AlpcpUnlockMessage(v9);
        else
          AlpcpCancelMessage(v20, v9, 0LL);
        return v8;
      }
      AlpcpWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrLpcReply, 0, 0, 0LL);
      v8 = 0;
    }
    v14 = *(_DWORD *)(v9 + 40);
    if ( (v14 & 0x80u) != 0 )
    {
      AlpcpUnlockMessage(v9);
      return 3221227265LL;
    }
    else
    {
      if ( (v14 & 0x200) != 0 )
      {
        v15 = 0;
        if ( *(_QWORD *)(v9 + 136) )
          v15 = 0x80000000;
        if ( *(_QWORD *)(v9 + 144) )
          v15 |= 0x40000000u;
        if ( *(_QWORD *)(v9 + 152) )
          v15 |= 0x10000000u;
        if ( (v15 & a4) == 0 )
        {
          *(_WORD *)(v9 + 228) &= ~0x2000u;
LABEL_20:
          if ( AlpcpLogEnabled )
            AlpcpLogReceiveMessage(v9);
          *a3 = v9;
          return v8;
        }
      }
      *(_WORD *)(v9 + 228) |= 0x2000u;
      v17 = (volatile signed __int64 *)(v20 + 352);
      v18 = KeAbPreAcquire(v20 + 352, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v20 + 352), v18, v20 + 352);
      if ( v18 )
        *(_BYTE *)(v18 + 26) |= 1u;
      v19 = *(_DWORD *)(v20 + 416);
      if ( (v19 & 0x40) == 0 )
      {
        if ( (*(_DWORD *)(v20 + 256) & 0x1000) == 0 || (v19 & 0x20) == 0 || !*(_QWORD *)(v9 + 32) )
        {
          ++*(_WORD *)(v9 - 30);
          AlpcpInsertMessagePendingQueue(v20, v9);
        }
        if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
        KeAbPostRelease(v20 + 352);
        goto LABEL_20;
      }
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
      KeAbPostRelease(v20 + 352);
      AlpcpCancelMessage(v20, v9, 0LL);
      return 3221227264LL;
    }
  }
  else
  {
    if ( v8 )
      AlpcpWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrLpcReply, 0, 0, 0LL);
    return 3221227265LL;
  }
}
