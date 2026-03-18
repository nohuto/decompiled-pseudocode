/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x14073A150
 * Callers:
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x14073B648 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14073B9A4 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14073BA44 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x14073CEBC (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    ViHalPreprocessOptions(byte_1403230F4, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(230, 4, v2 != *(_DWORD *)(a1 + 180), 0, 0LL, byte_1403230F4);
  }
}
