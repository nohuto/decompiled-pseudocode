/*
 * XREFs of ?EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800F7850
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureHWCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800FC14C (-EnsureHWCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x91u);
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4E3u);
  }
  return (unsigned int)v4;
}
