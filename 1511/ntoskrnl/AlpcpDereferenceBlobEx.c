/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1404243CC
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x1403E6C8C (AlpcpCleanupProcessViews.c)
 *     AlpcViewDestroyProcedure @ 0x1403F4818 (AlpcViewDestroyProcedure.c)
 *     NtAlpcDeleteSecurityContext @ 0x140422764 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcMessageDestroyProcedure @ 0x140426FA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x1404292E0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14042BCD0 (AlpcpCaptureSecurityAttribute.c)
 *     NtAlpcCreatePortSection @ 0x14044DF54 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x14044E0D4 (AlpcpCreateSection.c)
 *     AlpcpMapLegacyPortView @ 0x14044FC24 (AlpcpMapLegacyPortView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14047BCB0 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047BDF0 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14047C210 (AlpcpCreateView.c)
 *     NtAlpcCreateSecurityContext @ 0x14047C548 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     AlpcpDeleteView @ 0x14047CE3C (AlpcpDeleteView.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14047D050 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateSectionView @ 0x14047D390 (AlpcpCreateSectionView.c)
 *     AlpcpReleaseAttributes @ 0x14047E354 (AlpcpReleaseAttributes.c)
 *     NtAlpcCreateSectionView @ 0x14047E500 (NtAlpcCreateSectionView.c)
 *     AlpcpDeletePort @ 0x14047E7D8 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x14047ED3C (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x14047F26C (AlpcpFlushCancelQueue.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140481C28 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 *     AlpcConnectionDestroyProcedure @ 0x1404A9B68 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpExposeViewAttribute @ 0x1404ABC0C (AlpcpExposeViewAttribute.c)
 *     NtAlpcDeleteSectionView @ 0x1404ABD1C (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1404AE8F0 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404AF9DC (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcRegionDestroyProcedure @ 0x1404B0448 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B80D8 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14050C27C (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14051A418 (AlpcpForceUnlinkSecureView.c)
 *     NtAlpcDeleteResourceReserve @ 0x1406202C8 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x14062054C (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
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
    return AlpcpDestroyBlob(BugCheckParameter2);
  }
  return result;
}
