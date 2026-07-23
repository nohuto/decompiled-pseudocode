/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x140705BC0
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140706DA0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407070FC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070719C (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x1407084B8 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
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
