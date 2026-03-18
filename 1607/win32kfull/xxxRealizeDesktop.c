/*
 * XREFs of xxxRealizeDesktop @ 0x1C01DF6B4
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxBroadcastPaletteChanged @ 0x1C020E2CC (xxxBroadcastPaletteChanged.c)
 * Callees:
 *     xxxInternalPaintDesktop @ 0x1C0100C4C (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxRealizeDesktop(__int64 a1)
{
  HDC DC; // rbx

  DC = (HDC)_GetDC(a1);
  xxxInternalPaintDesktop(a1, DC, 0);
  return _ReleaseDC(DC);
}
