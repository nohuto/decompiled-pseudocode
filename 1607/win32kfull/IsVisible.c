/*
 * XREFs of IsVisible @ 0x1C00AE7B0
 * Callers:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C000CC00 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxSetScrollBar @ 0x1C00ACED4 (xxxSetScrollBar.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00AE2D8 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00FFF8C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     RestoreSpb @ 0x1C01E12DC (RestoreSpb.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022B0C0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     EnumPwndDlgChildProc @ 0x1C02491F0 (EnumPwndDlgChildProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsVisible(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al

  v1 = a1;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v2 = *(_BYTE *)(v1 + 55);
    if ( (v2 & 0x10) == 0 || (v2 & 0x20) != 0 && v1 != a1 )
      break;
    if ( (*(_WORD *)(v1 + 66) & 0x3FFF) != 0x29D )
    {
      v1 = *(_QWORD *)(v1 + 88);
      if ( v1 )
        continue;
    }
    return 1LL;
  }
  return 0LL;
}
