/*
 * XREFs of AlpcpUnlockBlob @ 0x1404F14C0
 * Callers:
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpCreateSectionView @ 0x140408B38 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14040A720 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040A858 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14040C0E0 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x14042A038 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1404713B8 (AlpcpMapLegacyPortView.c)
 *     AlpcpReceiveLegacyMessage @ 0x14049D4E0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpQueryRemoteView @ 0x14049D8EC (AlpcpQueryRemoteView.c)
 *     AlpcpReleaseViewAttribute @ 0x14049FFDC (AlpcpReleaseViewAttribute.c)
 *     AlpcSectionDeleteProcedure @ 0x1404ACB00 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1404B6F40 (AlpcRegionDestroyProcedure.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1404F0EE0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14054739C (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054CBD8 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
