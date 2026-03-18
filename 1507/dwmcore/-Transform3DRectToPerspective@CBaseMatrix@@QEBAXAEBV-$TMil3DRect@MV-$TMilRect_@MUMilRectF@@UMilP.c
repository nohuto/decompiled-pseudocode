/*
 * XREFs of ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180003A74
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18002A1D4 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800DF624 (-CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180022410 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

float *__fastcall CBaseMatrix::Transform3DRectToPerspective(float *a1, float *a2, float *a3)
{
  float v3; // xmm9_4
  float v4; // xmm8_4
  float v5; // xmm10_4
  float v6; // xmm2_4
  float v7; // xmm15_4
  float v8; // xmm13_4
  float v9; // xmm4_4
  float v10; // xmm12_4
  float v11; // xmm14_4
  float v12; // xmm1_4
  float v13; // xmm11_4
  float v14; // xmm3_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm15_4
  float *result; // rax
  float *v19; // rcx
  _DWORD *v20; // r8
  float *v21; // r9
  float *v22; // r10
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm1_4
  float v32; // xmm7_4
  float v33; // xmm4_4
  float v34; // xmm8_4
  float v35; // xmm10_4
  float v36; // xmm11_4
  float v37; // xmm2_4
  float v38; // xmm9_4
  float v39; // xmm7_4
  float v40; // xmm8_4
  float v41; // xmm5_4
  float v42; // xmm6_4
  int v43; // xmm1_4
  __int64 v44; // rcx
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // [rsp+20h] [rbp-F8h]
  float v49; // [rsp+24h] [rbp-F4h]
  float v50; // [rsp+28h] [rbp-F0h]
  float v51; // [rsp+2Ch] [rbp-ECh]
  float v52; // [rsp+30h] [rbp-E8h]
  float v53; // [rsp+34h] [rbp-E4h]
  float v54; // [rsp+38h] [rbp-E0h]
  float v55; // [rsp+3Ch] [rbp-DCh]
  float v56; // [rsp+40h] [rbp-D8h]
  _DWORD v57[8]; // [rsp+48h] [rbp-D0h] BYREF

  v3 = a2[2];
  v4 = a2[3];
  v5 = a1[2] * *a2;
  v6 = *a1 * *a2;
  v7 = a1[4] * a2[1];
  v8 = a1[8] * a2[4];
  v9 = a1[1] * *a2;
  v10 = v7 + v6;
  v11 = a1[9] * a2[4];
  v12 = v4 * a1[4];
  v13 = (float)(a1[5] * a2[1]) + v9;
  v14 = v4 * a1[5];
  v15 = v4 * a1[6];
  v48 = v3 * *a1;
  v49 = v3 * a1[1];
  v56 = a1[10] * a2[4];
  v50 = v3 * a1[2];
  v16 = a2[5];
  v54 = a1[6] * a2[1];
  v51 = a1[5] * a2[1];
  v52 = v16 * a1[8];
  v53 = v16 * a1[9];
  v55 = v16 * a1[10];
  *a3 = (float)((float)(v7 + v6) + v8) + a1[12];
  a3[1] = (float)(v13 + v11) + a1[13];
  a3[2] = (float)((float)(v54 + v5) + v56) + a1[14];
  a3[3] = (float)((float)(v12 + v6) + v8) + a1[12];
  a3[4] = (float)((float)(v14 + v9) + v11) + a1[13];
  a3[5] = (float)((float)(v15 + v5) + v56) + a1[14];
  a3[6] = (float)((float)(v48 + v12) + v8) + a1[12];
  a3[7] = (float)((float)(v49 + v14) + v11) + a1[13];
  a3[8] = (float)((float)(v50 + v15) + v56) + a1[14];
  v17 = v48 + v7;
  a3[9] = (float)(v17 + v8) + a1[12];
  a3[10] = (float)((float)(v49 + v51) + v11) + a1[13];
  a3[11] = (float)((float)(v50 + v54) + v56) + a1[14];
  a3[12] = (float)(v10 + v52) + a1[12];
  a3[13] = (float)(v13 + v53) + a1[13];
  a3[14] = (float)((float)(v54 + v5) + v55) + a1[14];
  a3[15] = (float)((float)(v12 + v6) + v52) + a1[12];
  a3[16] = (float)((float)(v14 + v9) + v53) + a1[13];
  a3[17] = (float)((float)(v15 + v5) + v55) + a1[14];
  a3[18] = (float)((float)(v48 + v12) + v52) + a1[12];
  a3[19] = (float)((float)(v49 + v14) + v53) + a1[13];
  a3[20] = (float)((float)(v50 + v15) + v55) + a1[14];
  a3[21] = (float)(v17 + v52) + a1[12];
  a3[22] = (float)((float)(v49 + v51) + v53) + a1[13];
  a3[23] = (float)((float)(v50 + v54) + v55) + a1[14];
  result = (float *)CBaseMatrix::Is2DAffine((CBaseMatrix *)a1, 0);
  if ( !(_DWORD)result )
  {
    v23 = v19[15];
    v24 = v19[3];
    v25 = v24 * v22[2];
    v26 = v19[7] * v22[1];
    v27 = v24 * *v22;
    v28 = v19[7] * v22[3];
    v29 = v28 + v25;
    v30 = v26 + v25;
    v31 = v19[11] * v22[4];
    v32 = v26 + v27;
    v33 = v19[11] * v22[5];
    v34 = v28 + v27;
    v35 = (float)(v29 + v31) + v23;
    v36 = (float)(v32 + v31) + v23;
    v37 = (float)(v30 + v31) + v23;
    v38 = (float)(v34 + v31) + v23;
    v39 = (float)(v32 + v33) + v23;
    *(float *)&v57[2] = v35;
    *(float *)v57 = v36;
    *(float *)&v57[3] = v37;
    *(float *)&v57[1] = v38;
    *(float *)&v57[4] = v39;
    v40 = (float)(v34 + v33) + v23;
    v41 = (float)(v29 + v33) + v23;
    v42 = (float)(v30 + v33) + v23;
    *(float *)&v57[5] = v40;
    *(float *)&v57[6] = v41;
    *(float *)&v57[7] = v42;
    if ( v36 < 0.00012207031
      || v38 < 0.00012207031
      || v35 < 0.00012207031
      || v37 < 0.00012207031
      || v39 < 0.00012207031
      || v40 < 0.00012207031
      || v41 < 0.00012207031
      || v42 < 0.00012207031 )
    {
      if ( v36 >= -0.00012207031
        || v38 >= -0.00012207031
        || v35 >= -0.00012207031
        || v37 >= -0.00012207031
        || v39 >= -0.00012207031
        || v40 >= -0.00012207031
        || v41 >= -0.00012207031
        || v42 >= -0.00012207031 )
      {
        v20[15] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v20[12] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v20[3] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *v20 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v20[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v20[11] = qword_180190C98;
        v20[8] = qword_180190C98;
        v20[5] = qword_180190C98;
        *(_DWORD *)v21 = qword_180190C98;
        v20[23] = HIDWORD(qword_180190C98);
        v20[20] = HIDWORD(qword_180190C98);
        v20[17] = HIDWORD(qword_180190C98);
        v43 = HIDWORD(qword_180190C98);
      }
      else
      {
        v20[15] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v20[12] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v20[3] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *v20 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v20[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v20[11] = qword_180190C70;
        v20[8] = qword_180190C70;
        v20[5] = qword_180190C70;
        *(_DWORD *)v21 = qword_180190C70;
        v20[23] = HIDWORD(qword_180190C70);
        v20[20] = HIDWORD(qword_180190C70);
        v20[17] = HIDWORD(qword_180190C70);
        v43 = HIDWORD(qword_180190C70);
      }
      v20[14] = v43;
    }
    else
    {
      result = (float *)v57;
      v44 = 8LL;
      do
      {
        v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*result - 1.0)) & _xmm);
        if ( v45 >= 0.00012207031 )
        {
          v46 = *(v21 - 1) / *result;
          *(v21 - 2) = *(v21 - 2) / *result;
          v47 = *v21 / *result;
          *(v21 - 1) = v46;
          *v21 = v47;
        }
        ++result;
        v21 += 3;
        --v44;
      }
      while ( v44 );
    }
  }
  return result;
}
