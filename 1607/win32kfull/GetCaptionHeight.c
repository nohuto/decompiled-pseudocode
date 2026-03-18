/*
 * XREFs of GetCaptionHeight @ 0x1C011CE48
 * Callers:
 *     xxxCalcClientRect @ 0x1C006D964 (xxxCalcClientRect.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0232EDC (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C0238258 (xxxMenuBarDraw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCaptionHeight(__int64 a1)
{
  unsigned int v1; // edx

  if ( (*(_BYTE *)(a1 + 40) & 8) == 0 )
    return 0LL;
  v1 = 51;
  if ( *(char *)(a1 + 48) >= 0 )
    v1 = 4;
  return GetSystemMetricsForWindow(a1, v1);
}
