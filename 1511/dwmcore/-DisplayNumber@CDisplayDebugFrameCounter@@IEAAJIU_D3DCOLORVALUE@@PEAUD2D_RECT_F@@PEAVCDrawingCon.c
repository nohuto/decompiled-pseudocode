/*
 * XREFs of ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x1801035B0
 * Callers:
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180103650 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x18010D3C0 (-DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::DisplayNumber(
        struct IDWriteTextFormat **this,
        unsigned int a2,
        struct _D3DCOLORVALUE *a3,
        struct D2D_RECT_F *a4,
        struct CDrawingContext *a5)
{
  unsigned int v8; // r8d
  wchar_t Buffer; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+32h] [rbp-36h]
  __int16 v12; // [rsp+36h] [rbp-32h]

  Buffer = 0;
  v11 = 0;
  v12 = 0;
  swprintf_s(&Buffer, 4uLL, L"%03d", a2 % 0x3E8);
  return CDrawingContext::DrawTextW(a5, &Buffer, v8, this[4], a4, a3);
}
