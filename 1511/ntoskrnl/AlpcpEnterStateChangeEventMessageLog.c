/*
 * XREFs of AlpcpEnterStateChangeEventMessageLog @ 0x14061FC34
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140423610 (AlpcpReceiveLegacyMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140425460 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14042B610 (AlpcpDispatchReplyToWaitingThread.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     AlpcpAllocateSnapshotMessageLog @ 0x14061F970 (AlpcpAllocateSnapshotMessageLog.c)
 *     AlpcpLocateMessageLog @ 0x14061FE0C (AlpcpLocateMessageLog.c)
 */

void __fastcall AlpcpEnterStateChangeEventMessageLog(__int64 a1)
{
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rdi
  __int64 MessageLog; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // r8
  __int64 SnapshotMessageLog; // rax
  __int64 v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = KeAbPreAcquire((ULONG_PTR)&AlpcpMessageLogLock, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v2, (ULONG_PTR)&AlpcpMessageLogLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 248));
  v6 = MessageLog;
  if ( MessageLog )
  {
    v7 = (_QWORD *)(MessageLog + 48);
    if ( (_QWORD *)*v7 == v7
      || (v8 = *(_QWORD *)(MessageLog + 56)) == 0
      || *(_DWORD *)(v8 + 16) != *(_DWORD *)(a1 + 40)
      || *(_QWORD *)(v8 + 24) != *(_QWORD *)(a1 + 24)
      || *(_QWORD *)(v8 + 32) != *(_QWORD *)(a1 + 16)
      || *(_QWORD *)(v8 + 48) != *(_QWORD *)(a1 + 32)
      || *(_QWORD *)(v8 + 40) != *(_QWORD *)(a1 + 64)
      || *(_QWORD *)(v8 + 56) != *(_QWORD *)(a1 + 104)
      || *(_QWORD *)(v8 + 64) != *(_QWORD *)(a1 + 112)
      || memcmp((const void *)(v8 + 80), (const void *)(a1 + 224), 0x28uLL) )
    {
      SnapshotMessageLog = AlpcpAllocateSnapshotMessageLog();
      v10 = SnapshotMessageLog;
      if ( *(_DWORD *)(v6 + 44) )
      {
        *(_DWORD *)(SnapshotMessageLog + 16) = *(_DWORD *)(a1 + 40);
        *(_QWORD *)(SnapshotMessageLog + 24) = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(SnapshotMessageLog + 32) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(SnapshotMessageLog + 40) = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(SnapshotMessageLog + 48) = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(SnapshotMessageLog + 56) = *(_QWORD *)(a1 + 104);
        v12 = *(_QWORD *)(a1 + 112);
        *(_DWORD *)(v10 + 20) = 0;
        *(_QWORD *)(v10 + 64) = v12;
        *(_QWORD *)(v10 + 72) = retaddr;
        *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 224);
        *(_OWORD *)(v10 + 96) = *(_OWORD *)(a1 + 240);
        *(_QWORD *)(v10 + 112) = *(_QWORD *)(a1 + 256);
        v13 = (__int64 *)v7[1];
        *(_QWORD *)v10 = v7;
        *(_QWORD *)(v10 + 8) = v13;
        if ( (_QWORD *)*v13 != v7 )
          __fastfail(3u);
        *v13 = v10;
        v7[1] = v10;
      }
      else
      {
        v11 = (__int64 **)qword_1402E1E88;
        *(_QWORD *)v10 = &AlpcpFreeMessageSnapshotListHead;
        *(_QWORD *)(v10 + 8) = v11;
        if ( *v11 != &AlpcpFreeMessageSnapshotListHead )
          __fastfail(3u);
        *v11 = (__int64 *)v10;
        qword_1402E1E88 = v10;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
