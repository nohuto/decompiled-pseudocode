/*
 * XREFs of ObReferenceObjectSafe @ 0x140075130
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140406B0C (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140406CC8 (AlpcpReferenceMessageByWaitingThread.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404760D0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x14047E410 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1404807F0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpFlushMessagesPort @ 0x1404A3834 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404A4A40 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     WmipProcessEvent @ 0x1404A9A7C (WmipProcessEvent.c)
 *     AlpcpReferenceConnectedPort @ 0x14051FCC0 (AlpcpReferenceConnectedPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x14052A624 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpQueryRemoteView @ 0x14052AA30 (AlpcpQueryRemoteView.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     CmUnRegisterCallback @ 0x1406527EC (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
 *     ObpCreateTypeArray @ 0x1406AC9A4 (ObpCreateTypeArray.c)
 *     PsTerminateAllProcessesInSilo @ 0x1406C1334 (PsTerminateAllProcessesInSilo.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406C6990 (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x1407354B0 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
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
