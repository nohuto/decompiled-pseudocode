/*
 * XREFs of ??0CpuClipShape@@QEAA@XZ @ 0x180058CE0
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

CpuClipShape *__fastcall CpuClipShape::CpuClipShape(CpuClipShape *this)
{
  CRectangleShape *v2; // rcx
  CpuClipShape *result; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v4[0] = 0LL;
  v4[1] = 0LL;
  v2 = (CpuClipShape *)((char *)this + 8);
  *(_QWORD *)v2 = &CRectangleShape::`vftable';
  CRectangleShape::Set(v2, (const struct MilRectF *)v4);
  result = this;
  *((_BYTE *)this + 40) = 0;
  return result;
}
