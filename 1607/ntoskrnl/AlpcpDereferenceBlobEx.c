/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14040C274
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140409294 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtAlpcCreateSectionView @ 0x140409A7C (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x140409C78 (AlpcpCreateSectionView.c)
 *     AlpcpFlushCancelQueue @ 0x14040A99C (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushResourcesPort @ 0x14040AA74 (AlpcpFlushResourcesPort.c)
 *     AlpcpDeletePort @ 0x14040B5C8 (AlpcpDeletePort.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14040B860 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040B998 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpDeleteView @ 0x14040BD7C (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x14040BFE0 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14040C190 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpReceiveView @ 0x14040CD88 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14040D220 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14040D720 (AlpcpCreateSecurityContext.c)
 *     AlpcViewDestroyProcedure @ 0x14042B168 (AlpcViewDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x140448980 (AlpcMessageDestroyProcedure.c)
 *     AlpcpExposeAttributes @ 0x140449E20 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x14044A4C0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044D650 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCleanupProcessViews @ 0x140460F60 (AlpcpCleanupProcessViews.c)
 *     NtAlpcCreatePortSection @ 0x1404726B8 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x140472868 (AlpcpCreateSection.c)
 *     NtSecureConnectPort @ 0x1404B204C (NtSecureConnectPort.c)
 *     AlpcpReleaseAttributes @ 0x1404B55C8 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B5BFC (AlpcpReleaseViewAttribute.c)
 *     AlpcpCreateReserve @ 0x1404B5F8C (AlpcpCreateReserve.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1404CA138 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcConnectionDestroyProcedure @ 0x1404CA684 (AlpcConnectionDestroyProcedure.c)
 *     NtAlpcDeleteSectionView @ 0x1404D1410 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1404D22F4 (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x1404D34A0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404D6340 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140546E5C (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054C698 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpDereferenceView @ 0x140655578 (AlpcpDereferenceView.c)
 *     NtAlpcDeleteResourceReserve @ 0x140655584 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x140655930 (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
