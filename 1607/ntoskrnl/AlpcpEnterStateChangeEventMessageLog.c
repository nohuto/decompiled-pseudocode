/*
 * XREFs of AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC
 * Callers:
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x14049D4E0 (AlpcpReceiveLegacyMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1404F0EE0 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     AlpcpAllocateSnapshotMessageLog @ 0x140654CF8 (AlpcpAllocateSnapshotMessageLog.c)
 *     AlpcpLocateMessageLog @ 0x140655194 (AlpcpLocateMessageLog.c)
 */

unsigned __int64 __fastcall AlpcpEnterStateChangeEventMessageLog(__int64 a1)
{
  _BYTE *v2; // rax
  signed __int8 v3; // cf
  _BYTE *v4; // rdi
  __int64 MessageLog; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 SnapshotMessageLog; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&AlpcpMessageLogLock, 0LL, 0);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v2, (ULONG_PTR)&AlpcpMessageLogLock);
  if ( v4 )
    v4[26] |= 1u;
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 256));
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
      || memcmp((const void *)(v8 + 80), (const void *)(a1 + 232), 0x28uLL) )
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
        *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 232);
        *(_OWORD *)(v10 + 96) = *(_OWORD *)(a1 + 248);
        *(_QWORD *)(v10 + 112) = *(_QWORD *)(a1 + 264);
        v13 = (__int64 *)v7[1];
        if ( (_QWORD *)*v13 != v7 )
          __fastfail(3u);
        *(_QWORD *)v10 = v7;
        *(_QWORD *)(v10 + 8) = v13;
        *v13 = v10;
        v7[1] = v10;
      }
      else
      {
        v11 = (__int64 *)qword_1403073A8;
        if ( *(__int64 **)qword_1403073A8 != &AlpcpFreeMessageSnapshotListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &AlpcpFreeMessageSnapshotListHead;
        *(_QWORD *)(v10 + 8) = v11;
        *v11 = v10;
        qword_1403073A8 = v10;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
