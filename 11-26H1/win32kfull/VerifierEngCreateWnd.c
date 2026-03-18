/*
 * XREFs of VerifierEngCreateWnd @ 0x140349960
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateWnd @ 0x140319940 (EngCreateWnd.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

WNDOBJ *__fastcall VerifierEngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  if ( (unsigned int)VerifierRandomFailure((int)pso, (__int64)hwnd) )
    return 0LL;
  else
    return EngCreateWnd(pso, hwnd, pfn, fl, iPixelFormat);
}
