/*
 * XREFs of ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930
 * Callers:
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1800043FC (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180014990 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@1PEAV3@2@Z @ 0x180014CA0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180029590 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180051AA0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180058F60 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@IEAA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18014CB44 (-InvertTransformToCalc2DBounds@CFilterEffect@@IEAA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@1PEAV3@2@Z @ 0x180156EB0 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x18005B06C (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CMILMatrix::Transform2DBoundsHelper<1>(__int64 a1, __int64 a2, float *a3)
{
  float *v3; // r11
  char v4; // r8
  char v5; // di
  char v6; // bl
  char v7; // al
  float v8; // xmm6_4
  __int64 v9; // xmm3_8
  float v10; // xmm4_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  char v18; // r9
  char v19; // al
  char v20; // al
  float *v21; // rcx
  unsigned int v22; // edx
  __int64 result; // rax
  char v24; // r8
  char v25; // al
  float v26; // xmm1_4
  char v27; // r9
  char v28; // al
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // [rsp+30h] [rbp-48h] BYREF
  float v42; // [rsp+34h] [rbp-44h]
  float v43; // [rsp+38h] [rbp-40h]
  float v44; // [rsp+3Ch] [rbp-3Ch]
  float v45; // [rsp+40h] [rbp-38h]
  float v46; // [rsp+44h] [rbp-34h]
  float v47; // [rsp+48h] [rbp-30h]
  float v48; // [rsp+4Ch] [rbp-2Ch]

  v3 = a3;
  v4 = *(_BYTE *)(a1 + 64);
  v5 = 0;
  v6 = 0;
  v7 = (char)(4 * v4) >> 6;
  if ( v7 )
  {
    if ( v7 == 1 )
      goto LABEL_12;
    v9 = _xmm;
    v8 = FLOAT_1_0;
    v10 = FLOAT_0_00012207031;
LABEL_20:
    v24 = *(_BYTE *)(a1 + 65);
    v25 = (char)(v24 << 6) >> 6;
    if ( v25 )
    {
      if ( v25 != 1 )
      {
LABEL_24:
        CMILMatrix::Transform2DRectToPerspective(
          (CMILMatrix *)a1,
          (const struct MilRectF *)a2,
          (struct MilPoint2F *const)&v41);
        v22 = 8;
        v21 = &v41;
        goto LABEL_14;
      }
    }
    else
    {
      v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 4) - 0.0)) & v9);
      if ( v10 <= v26
        || (v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 12) - 0.0)) & v9), v10 <= v33)
        || (v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 16) - 0.0)) & v9), v10 <= v34)
        || (v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 28) - 0.0)) & v9), v10 <= v35)
        || (v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - v8)) & v9), v10 <= v36) )
      {
        v27 = 0;
        v28 = -1;
      }
      else
      {
        v27 = 1;
        v28 = 1;
      }
      *(_BYTE *)(a1 + 65) = v24 ^ (v24 ^ v28) & 3;
      if ( !v27 )
        goto LABEL_24;
    }
    v5 = 1;
    *v3 = (float)(*(float *)a2 * *(float *)a1) + *(float *)(a1 + 48);
    v3[1] = (float)(*(float *)(a2 + 4) * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
    v3[2] = (float)(*(float *)(a2 + 8) * *(float *)a1) + *(float *)(a1 + 48);
    v3[3] = (float)(*(float *)(a2 + 12) * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
    if ( *(float *)a1 > 0.0 && *(float *)(a1 + 20) > 0.0 )
      v6 = 1;
    goto LABEL_13;
  }
  v8 = FLOAT_1_0;
  v9 = _xmm;
  v10 = FLOAT_0_00012207031;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a1 - 1.0)) & _xmm);
  if ( v11 >= 0.00012207031
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 4) - 0.0)) & _xmm), v12 >= 0.00012207031)
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 12) - 0.0)) & _xmm), v13 >= 0.00012207031)
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 16) - 0.0)) & _xmm), v14 >= 0.00012207031)
    || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm), v15 >= 0.00012207031)
    || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 28) - 0.0)) & _xmm), v16 >= 0.00012207031)
    || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v17 >= 0.00012207031) )
  {
    v18 = 0;
    v19 = -1;
  }
  else
  {
    v18 = 1;
    v19 = 1;
  }
  v20 = v4 ^ (v4 ^ (16 * v19)) & 0x30;
  *(_BYTE *)(a1 + 64) = v20;
  if ( !v18 )
    goto LABEL_20;
  *(_BYTE *)(a1 + 65) &= ~2u;
  *(_BYTE *)(a1 + 65) |= 0x3Du;
  *(_BYTE *)(a1 + 64) = v20 & 0x3F | 0x40;
LABEL_12:
  v5 = 1;
  v6 = 1;
  *v3 = *(float *)(a1 + 48) + *(float *)a2;
  v3[1] = *(float *)(a2 + 4) + *(float *)(a1 + 52);
  v3[2] = *(float *)(a2 + 8) + *(float *)(a1 + 48);
  v3[3] = *(float *)(a2 + 12) + *(float *)(a1 + 52);
LABEL_13:
  v21 = v3;
  v22 = 4;
LABEL_14:
  LODWORD(result) = 0;
  do
  {
    result = (unsigned int)(result + 1);
    ++v21;
  }
  while ( (unsigned int)result < v22 );
  if ( !v6 )
  {
    if ( v5 )
    {
      v37 = *v3;
      v38 = v3[2];
      if ( *v3 > v38 )
      {
        *v3 = v38;
        v3[2] = v37;
      }
      v39 = v3[1];
      v40 = v3[3];
      if ( v39 > v40 )
      {
        v3[1] = v40;
        v3[3] = v39;
      }
    }
    else
    {
      v29 = v43;
      if ( v41 > v43 )
        v30 = v43;
      else
        v30 = v41;
      v31 = v42;
      if ( v42 > v44 )
        v31 = v44;
      if ( v43 <= v41 )
        v29 = v41;
      v32 = v42;
      if ( v44 > v42 )
        v32 = v44;
      if ( v30 > v45 )
        v30 = v45;
      if ( v31 > v46 )
        v31 = v46;
      if ( v45 > v29 )
        v29 = v45;
      if ( v46 > v32 )
        v32 = v46;
      if ( v30 > v47 )
        v30 = v47;
      if ( v31 > v48 )
        v31 = v48;
      if ( v47 > v29 )
        v29 = v47;
      if ( v48 > v32 )
        v32 = v48;
      *v3 = v30;
      v3[1] = v31;
      v3[2] = v29;
      v3[3] = v32;
    }
  }
  return result;
}
