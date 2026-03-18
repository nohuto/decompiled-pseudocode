/*
 * XREFs of HintSpriteShape @ 0x1C007B8EC
 * Callers:
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C007FEDC (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E79C4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C007B994 (GreHintSpriteShape.c)
 */

__int64 __fastcall HintSpriteShape(HDEV a1, HWND *a2, __int64 a3, int a4)
{
  int v7; // eax

  v7 = IsWindowDesktopComposed(a2);
  return GreHintSpriteShape(a1, *a2, a4, v7, 1);
}
