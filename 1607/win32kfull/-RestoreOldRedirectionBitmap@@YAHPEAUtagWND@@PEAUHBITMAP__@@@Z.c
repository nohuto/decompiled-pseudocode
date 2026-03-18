/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01DE224
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     GetRedirectionFlags @ 0x1C0053B04 (GetRedirectionFlags.c)
 *     HintSpriteShape @ 0x1C00623A8 (HintSpriteShape.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0063658 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0063B98 (ChangeRedirectionParentInDCEs.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(struct tagWND *a1, HBITMAP a2)
{
  unsigned int v4; // edi

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape((HDEV)*gpDispInfo, (__int64)a1, a2, 1);
    ChangeRedirectionParentInDCEs(a1, 1u);
  }
  return v4;
}
