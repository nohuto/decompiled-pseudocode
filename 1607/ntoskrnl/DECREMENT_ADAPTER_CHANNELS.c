/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x140705B90
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407061E0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063A4 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140706D70 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407070CC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070716C (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x140708488 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    ViHalPreprocessOptions(byte_1402F992C, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(230, 4, v2 != *(_DWORD *)(a1 + 180), 0, 0LL, byte_1402F992C);
  }
}
