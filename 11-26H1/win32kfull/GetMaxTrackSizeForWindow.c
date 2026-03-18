/*
 * XREFs of GetMaxTrackSizeForWindow @ 0x14003289C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x140031FC8 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1401F1C9C (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 */

struct tagSIZE __fastcall GetMaxTrackSizeForWindow(struct tagWND *a1)
{
  unsigned __int16 WindowCompositedDpi; // bx
  unsigned int WindowCompositedDpiContext; // eax
  struct tagRECT v5; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi(a1);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
  GetScreenRectForDpi((__m128i *)&v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
  return ComputeMaxTrackSize(&v5, WindowCompositedDpi);
}
