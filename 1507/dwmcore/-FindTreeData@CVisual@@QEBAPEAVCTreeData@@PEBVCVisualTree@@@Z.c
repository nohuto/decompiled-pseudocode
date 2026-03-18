/*
 * XREFs of ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000A900 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000B398 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?PopulateWorldTransform@CHitTestContext@@AEAAJPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000B938 (-PopulateWorldTransform@CHitTestContext@@AEAAJPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@@Z @ 0x180034E5C (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@@Z.c)
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800DC308 (-IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z.c)
 *     ?EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800DCC64 (-EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawList.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800DCDD8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 *     ?EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x1801039B8 (-EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDraw.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall CVisual::FindTreeData(CVisual *this, const struct CVisualTree *a2)
{
  __int64 v2; // r8
  __int64 ***v4; // rcx
  __int64 **i; // rax

  v2 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
    return (__int64 **)((char *)this + 448);
  v4 = (__int64 ***)((char *)this + 432);
  for ( i = *v4; i != (__int64 **)v4; i = (__int64 **)*i )
  {
    if ( i[4] == (__int64 *)a2 )
      return i - 33;
  }
  return (__int64 **)v2;
}
