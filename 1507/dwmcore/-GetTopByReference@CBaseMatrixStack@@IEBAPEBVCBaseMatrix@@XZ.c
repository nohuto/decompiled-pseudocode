/*
 * XREFs of ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00
 * Callers:
 *     ?GetInverseTransform@CHitTestContext@@AEAA_NPEAVMatrix3x2F@D2D1@@@Z @ 0x18000A898 (-GetInverseTransform@CHitTestContext@@AEAA_NPEAVMatrix3x2F@D2D1@@@Z.c)
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180010AA8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?CalcPartiallyVisibleRectangleSetInLocalSpace@CDrawingContext@@AEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@PEAI@Z @ 0x18002ABCC (-CalcPartiallyVisibleRectangleSetInLocalSpace@CDrawingContext@@AEAA_NAEBV-$TMilRect_@MUMilRectF@.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18002AD28 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F2618 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 *     ?GetWorldTransform4x4@CDrawingContext@@EEBAXPEAUD2D_MATRIX_4X4_F@@@Z @ 0x1800F3B70 (-GetWorldTransform4x4@CDrawingContext@@EEBAXPEAUD2D_MATRIX_4X4_F@@@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x1800F4178 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800FC0A0 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJPEAVCPolygon@@@Z @ 0x18012F604 (-BspHitTest@CHitTestContext@@AEAAJPEAVCPolygon@@@Z.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014C5A8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

const struct CBaseMatrix *__fastcall CBaseMatrixStack::GetTopByReference(CBaseMatrixStack *this)
{
  if ( *(_DWORD *)this )
    return (const struct CBaseMatrix *)(*((_QWORD *)this + 2)
                                      + ((unsigned __int64)(unsigned int)(*(_DWORD *)this - 1) << 6));
  else
    return (const struct CBaseMatrix *)&IdentityMatrix;
}
