/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x1406B9C44
 * Callers:
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1406BAAF8 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1406BB8C0 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x1406BC29C (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_1402D3FC0,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    VfReportIssueWithOptions(230, 6, *(_DWORD *)(a1 + 164), *(_DWORD *)(a1 + 164) - v2, 0LL, byte_1402D3FC0);
  }
}
