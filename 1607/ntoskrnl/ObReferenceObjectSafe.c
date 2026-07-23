/*
 * XREFs of ObReferenceObjectSafe @ 0x14008BCA0
 * Callers:
 *     IoNotifyQuotaState @ 0x1401CBF68 (IoNotifyQuotaState.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x140408EAC (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x1404094A8 (AlpcpFlushMessagesPort.c)
 *     AlpcpDispatchReplyToPort @ 0x140447320 (AlpcpDispatchReplyToPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x14044A430 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14049CF64 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14049D4E0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpQueryRemoteView @ 0x14049D8EC (AlpcpQueryRemoteView.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404AEC9C (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpReferenceConnectedPort @ 0x1404EF890 (AlpcpReferenceConnectedPort.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     WmipProcessEvent @ 0x140538080 (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x1405FB1F0 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140655B6C (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpPortQueryServerInfo @ 0x140656014 (AlpcpPortQueryServerInfo.c)
 *     ObpCreateTypeArray @ 0x140666D20 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406827D8 (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x140701188 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
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
