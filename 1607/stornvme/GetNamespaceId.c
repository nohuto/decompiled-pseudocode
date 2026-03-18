/*
 * XREFs of GetNamespaceId @ 0x1C0004770
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0008FC4 (FormInquiryDeviceIdentifiersData.c)
 *     ProtocolCommandCompletion @ 0x1C000ABE0 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000AD38 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B054 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B2AC (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B420 (QueryProtocolInfoLogPageData.c)
 *     ScsiSanitizeRequest @ 0x1C000BE7C (ScsiSanitizeRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C000C30C (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C000C394 (ScsiUnmapRequest.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNamespaceId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx

  if ( a2 < *(_DWORD *)(a1 + 148) && (_mm_lfence(), (v2 = *(_QWORD *)(a1 + 8LL * a2 + 1184)) != 0) )
    return *(unsigned int *)(v2 + 16);
  else
    return 0LL;
}
