/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E79C4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009AA24 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     GetRedirectionFlags @ 0x1C006BF30 (GetRedirectionFlags.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00799CC (ChangeRedirectionParentInDCEs.c)
 *     HintSpriteShape @ 0x1C007B8EC (HintSpriteShape.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C007C284 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(struct tagWND *a1, HBITMAP a2)
{
  unsigned int v4; // edi

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape((HDEV)*gpDispInfo, (HWND *)a1, (__int64)a2, 1);
    ChangeRedirectionParentInDCEs(a1, 1u);
  }
  return v4;
}
