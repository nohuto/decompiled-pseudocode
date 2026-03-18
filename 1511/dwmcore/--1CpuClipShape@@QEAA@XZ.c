/*
 * XREFs of ??1CpuClipShape@@QEAA@XZ @ 0x1800FCF78
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?ReleaseShape@CpuClipShape@@AEAAXXZ @ 0x180058C84 (-ReleaseShape@CpuClipShape@@AEAAXXZ.c)
 */

void __fastcall CpuClipShape::~CpuClipShape(CpuClipShape *this)
{
  CpuClipShape::ReleaseShape(this);
  CRectangleShape::~CRectangleShape((CpuClipShape *)((char *)this + 8));
}
