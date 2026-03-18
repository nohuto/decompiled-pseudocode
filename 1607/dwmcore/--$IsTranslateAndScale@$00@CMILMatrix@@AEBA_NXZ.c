/*
 * XREFs of ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18001569C
 * Callers:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180058F60 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800594B0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801282A4 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsTranslateAndScale<1>(__int64 a1)
{
  char v1; // r9
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  bool result; // al
  char v11; // cl
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm2_4

  v1 = *(_BYTE *)(a1 + 64);
  if ( v1 >> 6 )
    return v1 >> 6 == 1;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 4) - 0.0)) & _xmm);
  if ( v3 >= 0.00012207031 )
    goto LABEL_9;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 8) - 0.0)) & _xmm);
  if ( v4 >= 0.00012207031 )
    goto LABEL_9;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 12) - 0.0)) & _xmm);
  if ( v5 >= 0.00012207031
    || (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 16) - 0.0)) & _xmm), v6 >= 0.00012207031)
    || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 24) - 0.0)) & _xmm), v7 >= 0.00012207031)
    || (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 28) - 0.0)) & _xmm), v8 >= 0.00012207031)
    || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 32) - 0.0)) & _xmm), v9 >= 0.00012207031)
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 36) - 0.0)) & _xmm), v12 >= 0.00012207031)
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 44) - 0.0)) & _xmm), v13 >= 0.00012207031)
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v14 >= 0.00012207031) )
  {
LABEL_9:
    result = 0;
    v11 = -1;
  }
  else
  {
    result = 1;
    v11 = 1;
  }
  *(_BYTE *)(a1 + 64) = (v11 << 6) | v1 & 0x3F;
  *(_BYTE *)(a1 + 65) &= 0xFCu;
  *(_BYTE *)(a1 + 65) |= (result ? 1 : -1) & 3;
  return result;
}
