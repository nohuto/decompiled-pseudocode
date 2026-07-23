/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14040B134
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140408154 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtAlpcCreateSectionView @ 0x14040893C (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x140408B38 (AlpcpCreateSectionView.c)
 *     AlpcpFlushCancelQueue @ 0x14040985C (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushResourcesPort @ 0x140409934 (AlpcpFlushResourcesPort.c)
 *     AlpcpDeletePort @ 0x14040A488 (AlpcpDeletePort.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14040A720 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040A858 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpDeleteView @ 0x14040AC3C (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x14040AEA0 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14040B050 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14040C0E0 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     AlpcViewDestroyProcedure @ 0x14042A038 (AlpcViewDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x140447850 (AlpcMessageDestroyProcedure.c)
 *     AlpcpExposeAttributes @ 0x140448CF0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x140449390 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044C520 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCleanupProcessViews @ 0x14045FE30 (AlpcpCleanupProcessViews.c)
 *     NtAlpcCreatePortSection @ 0x140471588 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x140471738 (AlpcpCreateSection.c)
 *     NtSecureConnectPort @ 0x14049C42C (NtSecureConnectPort.c)
 *     AlpcpReleaseAttributes @ 0x14049F9A8 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseViewAttribute @ 0x14049FFDC (AlpcpReleaseViewAttribute.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1404AFEB8 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcConnectionDestroyProcedure @ 0x1404B0404 (AlpcConnectionDestroyProcedure.c)
 *     NtAlpcDeleteSectionView @ 0x1404B4EB0 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1404B5D94 (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x1404B6F40 (AlpcRegionDestroyProcedure.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404B9944 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14054739C (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054CBD8 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpDereferenceView @ 0x14065565C (AlpcpDereferenceView.c)
 *     NtAlpcDeleteResourceReserve @ 0x140655668 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x140655A14 (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 result; // rax
  signed __int64 BugCheckParameter4; // rdx

  result = -a2;
  BugCheckParameter4 = result + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), result);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    return AlpcpDestroyBlob();
  }
  return result;
}
