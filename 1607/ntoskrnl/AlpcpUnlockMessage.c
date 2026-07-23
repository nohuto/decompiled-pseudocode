/*
 * XREFs of AlpcpUnlockMessage @ 0x1404080A8
 * Callers:
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     NtAlpcQueryInformationMessage @ 0x140407880 (NtAlpcQueryInformationMessage.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x140408318 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendCloseMessage @ 0x140408D90 (AlpcpSendCloseMessage.c)
 *     AlpcpDisconnectPort @ 0x140408EAC (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040924C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140409680 (AlpcpFlushQueue.c)
 *     AlpcpReceiveSynchronousReply @ 0x140446B10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x140447320 (AlpcpDispatchReplyToPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14044A430 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 *     NtSecureConnectPort @ 0x14049C42C (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14049C9A4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 *     NtAlpcOpenSenderThread @ 0x14049DD94 (NtAlpcOpenSenderThread.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14049E040 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x14049E4AC (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14049E74C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 *     AlpcReserveDestroyProcedure @ 0x1404ACA94 (AlpcReserveDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404C2304 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x1404CED48 (NtAlpcCancelMessage.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     AlpcpCopyRequestData @ 0x1406552E4 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140655800 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x140656014 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  return AlpcpUnlockBlob(BugCheckParameter2);
}
