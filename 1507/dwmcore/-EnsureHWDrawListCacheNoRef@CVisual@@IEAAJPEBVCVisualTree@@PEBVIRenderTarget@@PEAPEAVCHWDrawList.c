/*
 * XREFs of ?EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800DCC64
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureHWCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800DECD0 (-EnsureHWCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z.c)
 */

__int64 __fastcall CVisual::EnsureHWDrawListCacheNoRef(
        CVisual *this,
        const struct CVisualTree *a2,
        const struct IRenderTarget *a3,
        struct CHWDrawListCache **a4)
{
  int v4; // ebx
  __int64 **TreeData; // rax
  struct CHWDrawListCache **v6; // r9
  const struct IRenderTarget *v7; // r10
  int v8; // eax

  v4 = -2003292412;
  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
  {
    v8 = CDrawListCacheSet::EnsureHWCacheNoRef((CDrawListCacheSet *)(TreeData + 15), v7, v6);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x8Fu);
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x521u);
  }
  return (unsigned int)v4;
}
