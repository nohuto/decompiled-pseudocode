/*
 * XREFs of AlpcpUnlockMessage @ 0x1404091E8
 * Callers:
 *     AlpcpCreateClientPort @ 0x14040849C (AlpcpCreateClientPort.c)
 *     NtAlpcQueryInformationMessage @ 0x1404089C0 (NtAlpcQueryInformationMessage.c)
 *     AlpcpCancelMessage @ 0x140408B94 (AlpcpCancelMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x140409458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendCloseMessage @ 0x140409ED0 (AlpcpSendCloseMessage.c)
 *     AlpcpDisconnectPort @ 0x140409FEC (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040A38C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x14040A7C0 (AlpcpFlushQueue.c)
 *     AlpcpReceiveSynchronousReply @ 0x140447C40 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140447F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x140448450 (AlpcpDispatchReplyToPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140448B60 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404494D0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14044B560 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044B990 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044CD70 (AlpcpReceiveMessagePort.c)
 *     NtSecureConnectPort @ 0x1404B204C (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1404B25C4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x1404B26D4 (AlpcpProcessConnectionRequest.c)
 *     NtAlpcOpenSenderThread @ 0x1404B39B4 (NtAlpcOpenSenderThread.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404B3C60 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1404B40CC (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404B436C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateReserve @ 0x1404B5F8C (AlpcpCreateReserve.c)
 *     AlpcReserveDestroyProcedure @ 0x1404C0D64 (AlpcReserveDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404DED00 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x1404ECBDC (NtAlpcCancelMessage.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 *     AlpcpCopyRequestData @ 0x140655200 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14065571C (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x140655F30 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654ED8 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  return AlpcpUnlockBlob(BugCheckParameter2);
}
