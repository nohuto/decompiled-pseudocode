/*
 * XREFs of AlpcpUnlockBlob @ 0x14050E530
 * Callers:
 *     AlpcpUnlockMessage @ 0x1404091E8 (AlpcpUnlockMessage.c)
 *     AlpcpCreateSectionView @ 0x140409C78 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14040B860 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040B998 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14040CD88 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14040D220 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x14042B168 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1404724E8 (AlpcpMapLegacyPortView.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404B3100 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpQueryRemoteView @ 0x1404B350C (AlpcpQueryRemoteView.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B5BFC (AlpcpReleaseViewAttribute.c)
 *     AlpcSectionDeleteProcedure @ 0x1404C0DD0 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1404D34A0 (AlpcRegionDestroyProcedure.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14050DF50 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140546E5C (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054C698 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v2; // cl
  int v3; // ebx
  __int64 result; // rax
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
  result = KeAbPostRelease(BugCheckParameter2 - 16);
  if ( v3 > 0 )
  {
    result = -v3;
    BugCheckParameter4 = result
                       + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), result);
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
      return AlpcpDestroyBlob(BugCheckParameter2);
    }
  }
  return result;
}
