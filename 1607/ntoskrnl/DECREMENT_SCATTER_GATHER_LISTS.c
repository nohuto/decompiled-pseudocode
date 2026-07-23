/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x140705CE8
 * Callers:
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B9C (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140707964 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x140708340 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_1402F9924,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    VfReportIssueWithOptions(230, 6, *(_DWORD *)(a1 + 164), *(_DWORD *)(a1 + 164) - v2, 0LL, byte_1402F9924);
  }
}
