/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x14073A278
 * Callers:
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14073B444 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14073C2A4 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x14073CCCC (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_1403230EC,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    VfReportIssueWithOptions(230, 6, *(_DWORD *)(a1 + 164), *(_DWORD *)(a1 + 164) - v2, 0LL, byte_1403230EC);
  }
}
