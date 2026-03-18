/*
 * XREFs of AlpcpUnlockBlob @ 0x140424050
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x1403F4818 (AlpcViewDestroyProcedure.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140423610 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpMapLegacyPortView @ 0x14044FC24 (AlpcpMapLegacyPortView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14047BCB0 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047BDF0 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14047C210 (AlpcpCreateView.c)
 *     AlpcpCreateSectionView @ 0x14047D390 (AlpcpCreateSectionView.c)
 *     AlpcpQueryRemoteView @ 0x1404825F0 (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x1404B0448 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1404B1F24 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B80D8 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14050C27C (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14051A418 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v2; // cl
  int v3; // edi
  signed __int64 BugCheckParameter4; // rcx

  v2 = *(_BYTE *)(BugCheckParameter2 - 32);
  v3 = 0;
  if ( (v2 & 1) != 0 )
  {
    v3 = 0x10000 - *(__int16 *)(BugCheckParameter2 - 30);
    *(_WORD *)(BugCheckParameter2 - 30) = 0;
    *(_BYTE *)(BugCheckParameter2 - 32) = v2 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
  KeAbPostRelease(BugCheckParameter2 - 16);
  if ( v3 > 0 )
  {
    BugCheckParameter4 = -v3 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -v3);
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
      AlpcpDestroyBlob(BugCheckParameter2);
    }
  }
}
