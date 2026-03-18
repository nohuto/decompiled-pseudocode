/*
 * XREFs of IsVisible @ 0x1C0057870
 * Callers:
 *     SpbCheckRect @ 0x1C00085DC (SpbCheckRect.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C00088CC (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxDrawWindowFrame @ 0x1C0057540 (xxxDrawWindowFrame.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxSetScrollBar @ 0x1C00D55C0 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D59E4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     RestoreSpb @ 0x1C01EA24C (RestoreSpb.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0231ED0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     EnumPwndDlgChildProc @ 0x1C024CF30 (EnumPwndDlgChildProc.c)
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
