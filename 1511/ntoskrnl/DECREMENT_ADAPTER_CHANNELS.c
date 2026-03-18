/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x1406B9B1C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1406BACFC (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1406BB058 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1406BB0F8 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x1406BC414 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    ViHalPreprocessOptions(byte_1402D3FC4, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(230, 4, v2 != *(_DWORD *)(a1 + 180), 0, 0LL, byte_1402D3FC4);
  }
}
