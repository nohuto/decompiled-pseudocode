/*
 * XREFs of AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140406B0C (AlpcpPortQueryServerInfo.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404760D0 (AlpcpReceiveLegacyMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140479CB0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14047E410 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToPort @ 0x1404807F0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140480E50 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpFlushQueue @ 0x1404A3A20 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404A41F0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x1404A46BC (AlpcpSendCloseMessage.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140529BA4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x14052A7D4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14052B804 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x14052BA0C (NtAlpcCancelMessage.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcQueryInformationMessage @ 0x140530090 (NtAlpcQueryInformationMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405327A0 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x14053B9A8 (NtAlpcOpenSenderProcess.c)
 *     NtAlpcOpenSenderThread @ 0x1405422C4 (NtAlpcOpenSenderThread.c)
 *     AlpcReserveDestroyProcedure @ 0x14054CAD8 (AlpcReserveDestroyProcedure.c)
 *     AlpcpCopyRequestData @ 0x14069EDA8 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14069F5B0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     AlpcpAllocateSnapshotMessageLog @ 0x14069E7C0 (AlpcpAllocateSnapshotMessageLog.c)
 *     AlpcpLocateMessageLog @ 0x14069EC5C (AlpcpLocateMessageLog.c)
 */

void __fastcall AlpcpEnterStateChangeEventMessageLog(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  __int64 MessageLog; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // r8
  __int64 SnapshotMessageLog; // rax
  __int64 v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v5 = KeAbPreAcquire((ULONG_PTR)&AlpcpMessageLogLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v5, (ULONG_PTR)&AlpcpMessageLogLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 248));
  v10 = MessageLog;
  if ( MessageLog )
  {
    v11 = (_QWORD *)(MessageLog + 48);
    if ( (_QWORD *)*v11 == v11
      || (v12 = *(_QWORD *)(MessageLog + 56)) == 0
      || *(_DWORD *)(v12 + 16) != *(_DWORD *)(a1 + 40)
      || *(_QWORD *)(v12 + 24) != *(_QWORD *)(a1 + 24)
      || *(_QWORD *)(v12 + 32) != *(_QWORD *)(a1 + 16)
      || *(_QWORD *)(v12 + 48) != *(_QWORD *)(a1 + 32)
      || *(_QWORD *)(v12 + 40) != *(_QWORD *)(a1 + 64)
      || *(_QWORD *)(v12 + 56) != *(_QWORD *)(a1 + 104)
      || *(_QWORD *)(v12 + 64) != *(_QWORD *)(a1 + 112)
      || memcmp((const void *)(v12 + 80), (const void *)(a1 + 224), 0x28uLL) )
    {
      SnapshotMessageLog = AlpcpAllocateSnapshotMessageLog();
      v14 = SnapshotMessageLog;
      if ( *(_DWORD *)(v10 + 44) )
      {
        *(_DWORD *)(SnapshotMessageLog + 16) = *(_DWORD *)(a1 + 40);
        *(_QWORD *)(SnapshotMessageLog + 24) = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(SnapshotMessageLog + 32) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(SnapshotMessageLog + 40) = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(SnapshotMessageLog + 48) = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(SnapshotMessageLog + 56) = *(_QWORD *)(a1 + 104);
        v16 = *(_QWORD *)(a1 + 112);
        *(_DWORD *)(v14 + 20) = 0;
        *(_QWORD *)(v14 + 64) = v16;
        *(_QWORD *)(v14 + 72) = retaddr;
        *(_OWORD *)(v14 + 80) = *(_OWORD *)(a1 + 224);
        *(_OWORD *)(v14 + 96) = *(_OWORD *)(a1 + 240);
        *(_QWORD *)(v14 + 112) = *(_QWORD *)(a1 + 256);
        v17 = (__int64 *)v11[1];
        *(_QWORD *)v14 = v11;
        *(_QWORD *)(v14 + 8) = v17;
        if ( (_QWORD *)*v17 != v11 )
          __fastfail(3u);
        *v17 = v14;
        v11[1] = v14;
      }
      else
      {
        v15 = (__int64 **)qword_1403322E8;
        *(_QWORD *)v14 = &AlpcpFreeMessageSnapshotListHead;
        *(_QWORD *)(v14 + 8) = v15;
        if ( *v15 != &AlpcpFreeMessageSnapshotListHead )
          __fastfail(3u);
        *v15 = (__int64 *)v14;
        qword_1403322E8 = v14;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
