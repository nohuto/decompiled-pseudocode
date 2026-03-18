/*
 * XREFs of ?EnsureDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@W4DrawListRenderType@@PEAPEAVCDrawListCache@@@Z @ 0x180109FE4
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?EnsureDrawListCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@W4DrawListRenderType@@PEAPEAVCDrawListCache@@@Z @ 0x18011134C (-EnsureDrawListCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@W4DrawListRenderType@@PEAPE.c)
 */

__int64 __fastcall CVisual::EnsureDrawListCacheNoRef(
        CVisual *a1,
        const struct CVisualTree *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v7; // ebx
  struct _LIST_ENTRY *TreeData; // rax
  int v9; // eax

  v7 = -2003292412;
  TreeData = CVisual::FindTreeData(a1, a2);
  if ( TreeData )
  {
    v9 = CDrawListCacheSet::EnsureDrawListCacheNoRef(&TreeData[8], a3, a4, a5);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x83u);
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x55Eu);
  }
  return (unsigned int)v7;
}
