/*
 * XREFs of ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A3E0
 * Callers:
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002C340 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180055530 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097A50 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180124730 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ??$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z @ 0x18001C064 (--$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z.c)
 */

__int64 __fastcall CMILMatrix::Is2DAffine<0>(float *a1)
{
  __int64 v1; // xmm4_8
  float v2; // xmm5_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  unsigned __int8 v10; // dl
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  float v16; // xmm3_4
  __int64 v17; // rcx
  float v18; // xmm5_4
  float v19; // xmm2_4
  __int64 v20; // rcx

  v1 = _xmm;
  v2 = FLOAT_0_00012207031;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[2] - 0.0)) & _xmm);
  if ( v3 < 0.00012207031
    && (v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[6] - 0.0)) & _xmm), v4 < 0.00012207031)
    && (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[14] - 0.0)) & _xmm), v5 < 0.00012207031)
    || CMILMatrix::IsEqual<1,0>(a1[2], 0.0, 0.00012207031)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v12 + 24), 0.0, 0.00012207031)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v13 + 32), 0.0, 0.00012207031)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v14 + 36), 0.0, 0.00012207031)
    && ((v16 = *(float *)(v15 + 40), CMILMatrix::IsEqual<1,0>(v16, 0.0, 0.00012207031))
     || CMILMatrix::IsEqual<1,0>(v16, 1.0, 0.00012207031))
    && (v19 = v18, CMILMatrix::IsEqual<1,0>(*(float *)(v17 + 44), 0.0, v18))
    && CMILMatrix::IsEqual<1,0>(*(float *)(v20 + 56), 0.0, v19) )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[3]) & v1);
    v7 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[7]) & v1) * 40960.0) + (float)(v6 * 40960.0);
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[15]) & v1);
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v7 + v8) - 1.0)) & v1);
    return v2 > v9;
  }
  return v10;
}
