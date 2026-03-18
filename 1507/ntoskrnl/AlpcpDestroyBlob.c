/*
 * XREFs of AlpcpDestroyBlob @ 0x140476564
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140406B0C (AlpcpPortQueryServerInfo.c)
 *     AlpcpReleaseAttributes @ 0x1404713BC (AlpcpReleaseAttributes.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     NtAlpcCreateSectionView @ 0x140473D80 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x140474264 (AlpcpCreateSectionView.c)
 *     AlpcpReceiveView @ 0x140474CA0 (AlpcpReceiveView.c)
 *     NtAlpcDeleteSecurityContext @ 0x140474F14 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcCreateSecurityContext @ 0x14047504C (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x140475280 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcViewDestroyProcedure @ 0x140476810 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140476E58 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140477090 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x14047721C (AlpcpLocateSectionView.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140479CB0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcMessageDestroyProcedure @ 0x14047A9E0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x14047CDC0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14047E410 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14047FE50 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpExposeAttributes @ 0x140480310 (AlpcpExposeAttributes.c)
 *     AlpcpDispatchReplyToPort @ 0x1404807F0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140480E50 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpDeletePort @ 0x1404A30E4 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x1404A36CC (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x1404A3A20 (AlpcpFlushQueue.c)
 *     AlpcpFlushCancelQueue @ 0x1404A3C30 (AlpcpFlushCancelQueue.c)
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404A41F0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x1404A46BC (AlpcpSendCloseMessage.c)
 *     AlpcpCleanupProcessViews @ 0x1405045B0 (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140529BA4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x14052A7D4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpQueryRemoteView @ 0x14052AA30 (AlpcpQueryRemoteView.c)
 *     AlpcpMapLegacyPortView @ 0x14052ABD8 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x14052AF18 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x14052B184 (AlpcpCreateSection.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14052B804 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x14052BA0C (NtAlpcCancelMessage.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14052C618 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcQueryInformationMessage @ 0x140530090 (NtAlpcQueryInformationMessage.c)
 *     AlpcRegionDestroyProcedure @ 0x140531AE0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405327A0 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcConnectionDestroyProcedure @ 0x140533124 (AlpcConnectionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x140533F94 (AlpcSectionDeleteProcedure.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14053B4E4 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtAlpcOpenSenderProcess @ 0x14053B9A8 (NtAlpcOpenSenderProcess.c)
 *     NtAlpcDeleteSectionView @ 0x14053BE80 (NtAlpcDeleteSectionView.c)
 *     AlpcpExposeViewAttribute @ 0x14053DA04 (AlpcpExposeViewAttribute.c)
 *     NtAlpcDeletePortSection @ 0x14053ECC4 (NtAlpcDeletePortSection.c)
 *     NtAlpcOpenSenderThread @ 0x1405422C4 (NtAlpcOpenSenderThread.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14054279C (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcReserveDestroyProcedure @ 0x14054CAD8 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405820A8 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpCopyRequestData @ 0x14069EDA8 (AlpcpCopyRequestData.c)
 *     AlpcpForceUnlinkSecureView @ 0x14069F1C4 (AlpcpForceUnlinkSecureView.c)
 *     NtAlpcDeleteResourceReserve @ 0x14069F384 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14069F5B0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtAlpcRevokeSecurityContext @ 0x14069FA30 (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDestroyBlob(__int64 a1)
{
  _BYTE *v1; // rdi
  __int64 v2; // rbx
  int (*v3)(void); // rax

  v1 = (_BYTE *)(a1 - 48);
  v2 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 48 + 17)];
  v3 = *(int (**)(void))(v2 + 32);
  if ( !v3 || v3() >= 0 )
  {
    if ( (v1[16] & 2) != 0 )
    {
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v2 + 8), v1);
    }
    else if ( *(_QWORD *)(v2 + 40) )
    {
      (*((void (__fastcall **)(_BYTE *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v2 + 8) + 7))(v1);
    }
    else
    {
      ExFreePoolWithTag(v1, *(_DWORD *)(v2 + 4));
    }
  }
}
