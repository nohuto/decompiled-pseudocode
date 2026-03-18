/*
 * XREFs of ScaleDpiOffsetWithSubpixel @ 0x1401F43FC
 * Callers:
 *     OffsetChildren @ 0x1400186DC (OffsetChildren.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x14002C82C (DpiRectIntersectsRectWithSubpixel.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401F42C8 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 * Callees:
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x14002C7B8 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x14002F6D0 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 */

void __fastcall ScaleDpiOffsetWithSubpixel(int *a1, float *a2, struct tagWND *a3, struct tagWND *a4)
{
  int WindowCoordinateSpaceDpi; // ebp
  unsigned __int16 v8; // ax
  float v9; // xmm2_4

  WindowCoordinateSpaceDpi = (unsigned __int16)GetWindowCoordinateSpaceDpi(a3);
  v8 = GetWindowCoordinateSpaceDpi(a4);
  if ( v8 )
  {
    v9 = (float)WindowCoordinateSpaceDpi / (float)v8;
    ScaleValueWithSubpixel(a1, a2, v9);
    ScaleValueWithSubpixel(a1 + 1, a2 + 1, v9);
  }
}
