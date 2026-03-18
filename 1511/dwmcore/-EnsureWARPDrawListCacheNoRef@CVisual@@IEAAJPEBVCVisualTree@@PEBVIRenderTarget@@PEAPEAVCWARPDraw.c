/*
 * XREFs of ?EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x18012020C
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureWARPCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x180117AB4 (-EnsureWARPCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z.c)
 */

__int64 __fastcall CVisual::EnsureWARPDrawListCacheNoRef(
        CVisual *this,
        const struct CVisualTree *a2,
        const struct IRenderTarget *a3,
        struct CWARPDrawListCache **a4)
{
  int v4; // ebx
  __int64 **TreeData; // rax
  struct CWARPDrawListCache **v6; // r9
  const struct IRenderTarget *v7; // r10
  int v8; // eax

  v4 = -2003292412;
  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
  {
    v8 = CDrawListCacheSet::EnsureWARPCacheNoRef((CDrawListCacheSet *)(TreeData + 15), v7, v6);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xA2u);
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4FEu);
  }
  return (unsigned int)v4;
}
