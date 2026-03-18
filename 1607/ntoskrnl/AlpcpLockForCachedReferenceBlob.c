/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x14040B470
 * Callers:
 *     AlpcpCreateSectionView @ 0x140409C78 (AlpcpCreateSectionView.c)
 *     AlpcpSendCloseMessage @ 0x140409ED0 (AlpcpSendCloseMessage.c)
 *     AlpcpDisconnectPort @ 0x140409FEC (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040A38C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x14040A7C0 (AlpcpFlushQueue.c)
 *     AlpcpAllocateMessage @ 0x14040B38C (AlpcpAllocateMessage.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14040B860 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040B998 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14040CD88 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14040D220 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x14042B168 (AlpcViewDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044CD70 (AlpcpReceiveMessagePort.c)
 *     AlpcpMapLegacyPortView @ 0x1404724E8 (AlpcpMapLegacyPortView.c)
 *     AlpcpQueryRemoteView @ 0x1404B350C (AlpcpQueryRemoteView.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404B436C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B5BFC (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1404C0D64 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1404C0DD0 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1404D34A0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404DED00 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140546E5C (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054C698 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpPortQueryServerInfo @ 0x140655F30 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
