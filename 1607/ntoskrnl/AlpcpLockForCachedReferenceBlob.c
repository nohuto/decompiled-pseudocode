/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x14040A330
 * Callers:
 *     AlpcpCreateSectionView @ 0x140408B38 (AlpcpCreateSectionView.c)
 *     AlpcpSendCloseMessage @ 0x140408D90 (AlpcpSendCloseMessage.c)
 *     AlpcpDisconnectPort @ 0x140408EAC (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040924C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140409680 (AlpcpFlushQueue.c)
 *     AlpcpAllocateMessage @ 0x14040A24C (AlpcpAllocateMessage.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14040A720 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040A858 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14040C0E0 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x14042A038 (AlpcViewDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 *     AlpcpMapLegacyPortView @ 0x1404713B8 (AlpcpMapLegacyPortView.c)
 *     AlpcpQueryRemoteView @ 0x14049D8EC (AlpcpQueryRemoteView.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14049E74C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReleaseViewAttribute @ 0x14049FFDC (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1404ACA94 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1404ACB00 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1404B6F40 (AlpcRegionDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404C2304 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14054739C (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054CBD8 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpPortQueryServerInfo @ 0x140656014 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rbx
  __int64 result; // rax

  v2 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 0);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 - 16), v2, BugCheckParameter2 - 16);
  if ( v3 )
    v3[26] |= 1u;
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
