/*
 * XREFs of GetScreenRect @ 0x14025BAE8
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1402B3840 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1402F0338 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetCurrentThreadCompositedDpi @ 0x140031050 (GetCurrentThreadCompositedDpi.c)
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 */

__m128i *__fastcall GetScreenRect(__m128i *a1)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  GetScreenRectForDpi(a1, CurrentThreadCompositedDpi);
  return a1;
}
