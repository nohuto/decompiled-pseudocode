/*
 * XREFs of ??1CpuClipShape@@QEAA@XZ @ 0x1800DF55C
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?ReleaseShape@CpuClipShape@@AEAAXXZ @ 0x180073540 (-ReleaseShape@CpuClipShape@@AEAAXXZ.c)
 */

void __fastcall CpuClipShape::~CpuClipShape(CComplexShape **this)
{
  CpuClipShape::ReleaseShape(this);
  CRectangleShape::~CRectangleShape((CRectangleShape *)(this + 1));
}
