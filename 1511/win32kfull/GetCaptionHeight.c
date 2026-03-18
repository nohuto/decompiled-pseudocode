/*
 * XREFs of GetCaptionHeight @ 0x1C00757A8
 * Callers:
 *     xxxCalcClientRect @ 0x1C0071278 (xxxCalcClientRect.c)
 *     xxxDrawWindowFrame @ 0x1C00CBB20 (xxxDrawWindowFrame.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B3B4 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C0241E10 (xxxMenuBarDraw.c)
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
