/*
 * XREFs of VerifierEngCreateWnd @ 0x1C0290CC0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateWnd @ 0x1C027C8D0 (EngCreateWnd.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290828 (-VerifierRandomFailure@@YAHK@Z.c)
 */

WNDOBJ *__fastcall VerifierEngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateWnd(pso, hwnd, pfn, fl, iPixelFormat);
}
