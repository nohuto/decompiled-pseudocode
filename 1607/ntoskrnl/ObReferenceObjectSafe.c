/*
 * XREFs of ObReferenceObjectSafe @ 0x14008C540
 * Callers:
 *     IoNotifyQuotaState @ 0x1401CC084 (IoNotifyQuotaState.c)
 *     AlpcpCancelMessage @ 0x140408B94 (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x140409FEC (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x14040A5E8 (AlpcpFlushMessagesPort.c)
 *     AlpcpDispatchReplyToPort @ 0x140448450 (AlpcpDispatchReplyToPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140448B60 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x14044B560 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404B2B84 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404B3100 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpQueryRemoteView @ 0x1404B350C (AlpcpQueryRemoteView.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404C2F88 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpReferenceConnectedPort @ 0x14050C900 (AlpcpReferenceConnectedPort.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     WmipProcessEvent @ 0x140537B40 (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x1406508F8 (KiSwapToUmsThread.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140655A88 (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpPortQueryServerInfo @ 0x140655F30 (AlpcpPortQueryServerInfo.c)
 *     ObpCreateTypeArray @ 0x140666C3C (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682394 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406826F4 (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x140701188 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafe(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
