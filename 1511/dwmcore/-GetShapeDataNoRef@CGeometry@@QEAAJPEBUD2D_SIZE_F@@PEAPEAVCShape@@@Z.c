/*
 * XREFs of ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E278 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18003FB88 (-ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180049DC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18005E4E8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x18005EEA8 (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x18005EF3C (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800632E0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 *     ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x180063538 (-NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800643F8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x180064A74 (-GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800674F4 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z @ 0x1801236BC (-GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801237A4 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18013234C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetShapeDataCoreNoRef@CGeometryGroup@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1801354F0 (-GetShapeDataCoreNoRef@CGeometryGroup@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x180064BB0 (-GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGeometry::GetShapeDataNoRef(
        const struct D2DMatrix **this,
        const struct D2D_SIZE_F *a2,
        struct CShape **a3)
{
  unsigned int v3; // esi
  __int64 (__fastcall *v8)(CRgnGeometry *__hidden, const struct D2D_SIZE_F *, struct CShape **); // rsi
  int ShapeDataCoreNoRef; // eax
  struct CShape **v10; // r14
  const struct D2DMatrix *v11; // r15
  const struct D2DMatrix *v12; // rcx
  struct CShape *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  struct CShape *v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( ((_BYTE)this[4] & 1) != 0
    || *((_BYTE *)this + 88) && (*((float *)this + 20) != a2->width || *((float *)this + 21) != a2->height) )
  {
    v16 = 0LL;
    v8 = (__int64 (__fastcall *)(CRgnGeometry *__hidden, const struct D2D_SIZE_F *, struct CShape **))*((_QWORD *)*this + 14);
    if ( v8 == CRgnGeometry::GetShapeDataCoreNoRef )
      ShapeDataCoreNoRef = CRgnGeometry::GetShapeDataCoreNoRef(
                             (CRgnGeometry *)this,
                             (const struct D2D_SIZE_F *)((unsigned __int64)a2 & -(__int64)(*((_BYTE *)this + 88) != 0)),
                             &v16);
    else
      ShapeDataCoreNoRef = v8(
                             (CRgnGeometry *)this,
                             (const struct D2D_SIZE_F *)((unsigned __int64)a2 & -(__int64)(*((_BYTE *)this + 88) != 0)),
                             &v16);
    v3 = ShapeDataCoreNoRef;
    if ( ShapeDataCoreNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataCoreNoRef, 0x49u);
      return v3;
    }
    v10 = this + 8;
    v11 = this[8];
    if ( v11 )
      (**(void (__fastcall ***)(const struct D2DMatrix *, __int64))v11)(this[8], 1LL);
    *v10 = 0LL;
    v12 = this[9];
    if ( !v12 || D2DMatrixIsIdentity(v12) )
    {
      v13 = v16;
    }
    else
    {
      v15 = CShape::Combine((__int64)v16, v14, 0LL, 0LL, 0, this + 8);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x56u);
        return v3;
      }
      v13 = *v10;
    }
    this[7] = v13;
    if ( a2 )
      this[10] = (const struct D2DMatrix *)*a2;
    *((_DWORD *)this + 8) &= ~1u;
  }
  *a3 = this[7];
  return v3;
}
