/*
 * XREFs of ?EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x1801039B8
 * Callers:
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureWARPCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x1800FECE8 (-EnsureWARPCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xA0u);
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x53Cu);
  }
  return (unsigned int)v4;
}
