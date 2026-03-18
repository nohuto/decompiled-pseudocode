/*
 * XREFs of GetCaptionHeight @ 0x1C00F3714
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0057540 (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C0094474 (xxxCalcClientRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B1E4 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C0241C80 (xxxMenuBarDraw.c)
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
