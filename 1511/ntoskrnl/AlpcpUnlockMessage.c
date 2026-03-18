/*
 * XREFs of AlpcpUnlockMessage @ 0x140423364
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14042A040 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14042A910 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14042B610 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x14042C0B0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReceiveSynchronousReply @ 0x14042EF50 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14047D7C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     AlpcpSendCloseMessage @ 0x14047E6B8 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x14047F078 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x14047F358 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14047F6F8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x140480FF8 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140482368 (AlpcpReceiveLegacyConnectionReply.c)
 *     NtAlpcCancelMessage @ 0x1404834A8 (NtAlpcCancelMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x1404A5E90 (NtAlpcQueryInformationMessage.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 *     NtAlpcOpenSenderThread @ 0x1404B1A58 (NtAlpcOpenSenderThread.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404BB744 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x1404BF96C (AlpcReserveDestroyProcedure.c)
 *     AlpcpPortQueryServerInfo @ 0x14050FEAC (AlpcpPortQueryServerInfo.c)
 *     AlpcpCopyRequestData @ 0x14061FF58 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406203B4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14061FC34 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  return AlpcpUnlockBlob(BugCheckParameter2);
}
