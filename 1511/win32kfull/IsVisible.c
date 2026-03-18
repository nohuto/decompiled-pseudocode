/*
 * XREFs of IsVisible @ 0x1C00CBE50
 * Callers:
 *     SpbCheckRect @ 0x1C00097BC (SpbCheckRect.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C0009A9C (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxSetScrollBar @ 0x1C00CA7B4 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00CABF0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00CB970 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxDrawWindowFrame @ 0x1C00CBB20 (xxxDrawWindowFrame.c)
 *     RestoreSpb @ 0x1C01EA75C (RestoreSpb.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0232300 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     EnumPwndDlgChildProc @ 0x1C024CEC0 (EnumPwndDlgChildProc.c)
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
