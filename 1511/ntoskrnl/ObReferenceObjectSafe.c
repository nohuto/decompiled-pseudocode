/*
 * XREFs of ObReferenceObjectSafe @ 0x1400C8410
 * Callers:
 *     WmipProcessEvent @ 0x1403D1CFC (WmipProcessEvent.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     AlpcpReceiveLegacyMessage @ 0x140423610 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x140425270 (AlpcpReferenceConnectedPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x14042A040 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14042C0B0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpFlushMessagesPort @ 0x14047EE8C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14047F358 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14047FBB0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x14047FE08 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpQueryRemoteView @ 0x1404825F0 (AlpcpQueryRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x14050FEAC (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x14051004C (AlpcpReferenceMessageByWaitingThread.c)
 *     CmUnRegisterCallback @ 0x1405DD2C0 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 *     ObpCreateTypeArray @ 0x14062EBF4 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140643914 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x140643C78 (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x1406B5320 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
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
