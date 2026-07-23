/*
 * XREFs of AlpcpReceiveSynchronousReply @ 0x140446B10
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14049C9A4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     AlpcpWaitForSingleObject @ 0x14009F8C8 (AlpcpWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1404A0010 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x140656990 (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveSynchronousReply(
        __int64 *a1,
        KPROCESSOR_MODE a2,
        ULONG_PTR *a3,
        int a4,
        PLARGE_INTEGER a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // edi
  ULONG_PTR v10; // rbx
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  signed __int64 BugCheckParameter4; // rax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  volatile signed __int64 *v18; // rsi
  __int64 v19; // rbp
  int v20; // ecx

  CurrentThread = KeGetCurrentThread();
  v7 = *a1;
  v8 = AlpcpSignalAndWait((__int64)a1, &CurrentThread[1].StateSaveArea, WrLpcReply, a2, a5, 1);
  v9 = v8;
  v10 = _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, 0LL);
  if ( !v10 )
  {
    if ( v8 )
      AlpcpWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrLpcReply, 0, 0, 0LL);
    return 3221227265LL;
  }
  v12 = (_BYTE *)KeAbPreAcquire(v10 - 16, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 - 16), v12, v10 - 16);
  if ( v13 )
    v13[26] |= 1u;
  *(_BYTE *)(v10 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v10, 0x26uLL, BugCheckParameter4);
  v15 = *(_DWORD *)(v10 + 40);
  if ( (v15 & 0x800) != 0 )
    *(_DWORD *)(v10 + 40) = v15 & 0xFFFFF7FF;
  --*(_WORD *)(v10 - 30);
  if ( (*(_BYTE *)(v10 + 40) & 7) != 5 )
  {
    if ( *(struct _KTHREAD **)(v10 + 32) == CurrentThread )
    {
      if ( !v9 )
        v9 = -1073740031;
      goto LABEL_18;
    }
    goto LABEL_23;
  }
  *(_DWORD *)(v10 + 40) &= 0xFFFFFFF8;
  if ( v9 )
  {
    if ( *(struct _KTHREAD **)(v10 + 32) == CurrentThread )
    {
LABEL_18:
      *(_QWORD *)(v10 + 32) = 0LL;
      --*(_WORD *)(v10 - 30);
      if ( (*(_DWORD *)(v10 + 40) & 0x80u) != 0 )
        AlpcpUnlockMessage(v10);
      else
        AlpcpCancelMessage(v7, v10, 0);
      return v9;
    }
    AlpcpWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrLpcReply, 0, 0, 0LL);
    v9 = 0;
  }
  v16 = *(_DWORD *)(v10 + 40);
  if ( (v16 & 0x80u) != 0 )
  {
LABEL_23:
    AlpcpUnlockMessage(v10);
    return 3221227265LL;
  }
  if ( (v16 & 0x200) != 0 )
  {
    v17 = 0;
    if ( *(_QWORD *)(v10 + 136) )
      v17 = 0x80000000;
    if ( *(_QWORD *)(v10 + 144) )
      v17 |= 0x40000000u;
    if ( *(_QWORD *)(v10 + 152) )
      v17 |= 0x10000000u;
    if ( (v17 & a4) == 0 )
    {
      *(_WORD *)(v10 + 236) &= ~0x2000u;
LABEL_48:
      if ( AlpcpLogEnabled )
        AlpcpLogReceiveMessage(v10);
      *a3 = v10;
      return v9;
    }
  }
  v18 = (volatile signed __int64 *)(v7 + 352);
  *(_WORD *)(v10 + 236) |= 0x2000u;
  v19 = KeAbPreAcquire(v7 + 352, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v7 + 352), v19, v7 + 352);
  if ( v19 )
    *(_BYTE *)(v19 + 26) |= 1u;
  v20 = *(_DWORD *)(v7 + 416);
  if ( (v20 & 0x40) == 0 )
  {
    if ( (*(_DWORD *)(v7 + 256) & 0x1000) == 0 || (v20 & 0x20) == 0 || !*(_QWORD *)(v10 + 32) )
    {
      ++*(_WORD *)(v10 - 30);
      AlpcpInsertMessagePendingQueue(v7, v10);
    }
    if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
    KeAbPostRelease(v7 + 352);
    goto LABEL_48;
  }
  if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
  KeAbPostRelease(v7 + 352);
  AlpcpCancelMessage(v7, v10, 0);
  return 3221227264LL;
}
