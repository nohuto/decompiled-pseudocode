/*
 * XREFs of ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014240
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18003EDDC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180049DC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800FD044 (-CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

float *__fastcall CBaseMatrix::Transform3DRectToPerspective(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm12_4
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm11_4
  float v8; // xmm13_4
  float v9; // xmm15_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm10_4
  float v14; // xmm12_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm9_4
  float v23; // xmm8_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm1_4
  float v29; // xmm8_4
  float v30; // xmm4_4
  float v31; // xmm9_4
  float v32; // xmm13_4
  float v33; // xmm0_4
  float v34; // xmm12_4
  float v35; // xmm2_4
  float v36; // xmm10_4
  float v37; // xmm11_4
  float v38; // xmm8_4
  float v39; // xmm9_4
  float *v40; // rcx
  __int64 v41; // rdx
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm3_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm3_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  float v61; // xmm1_4
  float v62; // xmm1_4
  float v63; // xmm3_4
  float v64; // xmm1_4
  float v65; // xmm1_4
  int v66; // xmm1_4
  float v67; // xmm1_4
  float v68; // [rsp+4h] [rbp-104h]
  float v69; // [rsp+8h] [rbp-100h]
  float v70; // [rsp+Ch] [rbp-FCh]
  float v71; // [rsp+18h] [rbp-F0h]
  float v72; // [rsp+24h] [rbp-E4h]
  float v73; // [rsp+28h] [rbp-E0h]
  float v74; // [rsp+2Ch] [rbp-DCh]
  float v75; // [rsp+30h] [rbp-D8h]
  float v76[7]; // [rsp+34h] [rbp-D4h] BYREF

  result = a3 + 2;
  v4 = a2[3];
  v5 = a1[8];
  v6 = a1[9];
  v7 = *a1 * *a2;
  v8 = a1[1] * *a2;
  v9 = a1[2] * *a2;
  v10 = a2[1];
  v68 = a1[5] * v10;
  v72 = a1[4] * v10;
  v11 = a1[6] * v10;
  v12 = a2[4];
  v69 = a1[10] * v12;
  v13 = v4 * a1[4];
  v14 = v4 * a1[6];
  v15 = a2[3] * a1[5];
  v16 = a2[2];
  v71 = v16 * *a1;
  v74 = v16 * a1[1];
  v17 = a2[5];
  v70 = v16 * a1[2];
  v73 = v17 * a1[10];
  *a3 = (float)((float)(v72 + v7) + (float)(v5 * v12)) + a1[12];
  a3[1] = (float)((float)(v68 + v8) + (float)(v6 * v12)) + a1[13];
  a3[2] = (float)((float)(v11 + v9) + v69) + a1[14];
  a3[3] = (float)((float)(v13 + v7) + (float)(v5 * v12)) + a1[12];
  a3[4] = (float)((float)(v15 + v8) + (float)(v6 * v12)) + a1[13];
  a3[5] = (float)((float)(v14 + v9) + v69) + a1[14];
  a3[6] = (float)((float)(v71 + v13) + (float)(v5 * v12)) + a1[12];
  a3[7] = (float)((float)(v74 + v15) + (float)(v6 * v12)) + a1[13];
  a3[8] = (float)((float)(v70 + v14) + v69) + a1[14];
  a3[9] = (float)((float)(v71 + v72) + (float)(v5 * v12)) + a1[12];
  a3[10] = (float)((float)(v74 + v68) + (float)(v6 * v12)) + a1[13];
  a3[11] = (float)((float)(v70 + v11) + v69) + a1[14];
  a3[12] = (float)((float)(v72 + v7) + (float)(v17 * v5)) + a1[12];
  a3[13] = (float)((float)(v68 + v8) + (float)(v17 * v6)) + a1[13];
  a3[14] = (float)((float)(v11 + v9) + v73) + a1[14];
  a3[15] = (float)((float)(v13 + v7) + (float)(v17 * v5)) + a1[12];
  a3[16] = (float)((float)(v15 + v8) + (float)(v17 * v6)) + a1[13];
  a3[17] = (float)((float)(v14 + v9) + v73) + a1[14];
  a3[18] = (float)((float)(v71 + v13) + (float)(v17 * v5)) + a1[12];
  a3[19] = (float)((float)(v74 + v15) + (float)(v17 * v6)) + a1[13];
  a3[20] = (float)((float)(v70 + v14) + v73) + a1[14];
  a3[21] = (float)((float)(v71 + v72) + (float)(v17 * v5)) + a1[12];
  a3[22] = (float)((float)(v74 + v68) + (float)(v17 * v6)) + a1[13];
  a3[23] = (float)((float)(v70 + v11) + v73) + a1[14];
  v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[2]) & _xmm);
  if ( v18 >= 0.00012207031 )
    goto LABEL_4;
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[6]) & _xmm);
  if ( v19 >= 0.00012207031 )
    goto LABEL_4;
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[8]) & _xmm);
  if ( v20 >= 0.00012207031 )
    goto LABEL_4;
  v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[9]) & _xmm);
  if ( v58 >= 0.00012207031 )
    goto LABEL_4;
  v59 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[10] - 1.0)) & _xmm);
  if ( v59 >= 0.00012207031 )
  {
    v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[10]) & _xmm);
    if ( v67 >= 0.00012207031 )
      goto LABEL_4;
  }
  v60 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[11]) & _xmm);
  if ( v60 >= 0.00012207031
    || (v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[14]) & _xmm), v61 >= 0.00012207031)
    || (v62 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[3]) & _xmm),
        v63 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[7]) & _xmm) * 40960.0) + (float)(v62 * 40960.0),
        v64 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[15]) & _xmm),
        v65 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v63 + v64) - 1.0)) & _xmm),
        v65 >= 0.00012207031) )
  {
LABEL_4:
    v21 = a1[15];
    v22 = a1[7] * a2[1];
    v23 = a1[7] * a2[3];
    v24 = a1[3] * *a2;
    v25 = a1[3] * a2[2];
    v26 = v22 + v24;
    v27 = v23 + v24;
    v28 = a1[11] * a2[4];
    v29 = v23 + v25;
    v30 = a1[11] * a2[5];
    v31 = v22 + v25;
    v32 = (float)(v26 + v28) + v21;
    v33 = (float)(v27 + v28) + v21;
    v34 = (float)(v29 + v28) + v21;
    v75 = v32;
    v35 = (float)(v31 + v28) + v21;
    v76[0] = v33;
    v36 = (float)(v26 + v30) + v21;
    v37 = (float)(v27 + v30) + v21;
    v38 = (float)(v29 + v30) + v21;
    v39 = (float)(v31 + v30) + v21;
    v76[1] = v34;
    v76[2] = v35;
    v76[3] = v36;
    v76[4] = v37;
    v76[5] = v38;
    v76[6] = v39;
    if ( v32 < 0.00012207031
      || v33 < 0.00012207031
      || v34 < 0.00012207031
      || v35 < 0.00012207031
      || v36 < 0.00012207031
      || v37 < 0.00012207031
      || v38 < 0.00012207031
      || v39 < 0.00012207031 )
    {
      if ( v32 >= -0.00012207031
        || v33 >= -0.00012207031
        || v34 >= -0.00012207031
        || v35 >= -0.00012207031
        || v36 >= -0.00012207031
        || v37 >= -0.00012207031
        || v38 >= -0.00012207031
        || v39 >= -0.00012207031 )
      {
        *((_DWORD *)a3 + 15) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *((_DWORD *)a3 + 12) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *((_DWORD *)a3 + 3) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_DWORD *)a3 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        a3[21] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 2);
        a3[18] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 2);
        a3[9] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 2);
        a3[6] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 2);
        a3[22] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 1);
        a3[13] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 1);
        a3[10] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 1);
        a3[1] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 1);
        a3[19] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 3);
        a3[16] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 3);
        a3[7] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 3);
        a3[4] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 3);
        *((_DWORD *)a3 + 11) = qword_1801A05A0;
        *((_DWORD *)a3 + 8) = qword_1801A05A0;
        *((_DWORD *)a3 + 5) = qword_1801A05A0;
        *(_DWORD *)result = qword_1801A05A0;
        a3[23] = *((float *)&qword_1801A05A0 + 1);
        a3[20] = *((float *)&qword_1801A05A0 + 1);
        a3[17] = *((float *)&qword_1801A05A0 + 1);
        v66 = HIDWORD(qword_1801A05A0);
      }
      else
      {
        *((_DWORD *)a3 + 15) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *((_DWORD *)a3 + 12) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *((_DWORD *)a3 + 3) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *(_DWORD *)a3 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        a3[21] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 2);
        a3[18] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 2);
        a3[9] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 2);
        a3[6] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 2);
        a3[22] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 1);
        a3[13] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 1);
        a3[10] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 1);
        a3[1] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 1);
        a3[19] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 3);
        a3[16] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 3);
        a3[7] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 3);
        a3[4] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 3);
        *((_DWORD *)a3 + 11) = qword_1801A0578;
        *((_DWORD *)a3 + 8) = qword_1801A0578;
        *((_DWORD *)a3 + 5) = qword_1801A0578;
        *(_DWORD *)result = qword_1801A0578;
        a3[23] = *((float *)&qword_1801A0578 + 1);
        a3[20] = *((float *)&qword_1801A0578 + 1);
        a3[17] = *((float *)&qword_1801A0578 + 1);
        v66 = HIDWORD(qword_1801A0578);
      }
      *((_DWORD *)a3 + 14) = v66;
    }
    else
    {
      v40 = v76;
      v41 = 2LL;
      do
      {
        v42 = *(v40 - 1);
        v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v42 - 1.0)) & _xmm);
        if ( v43 >= 0.00012207031 )
        {
          v44 = *(result - 1) / v42;
          *(result - 2) = *(result - 2) / v42;
          v45 = *result / v42;
          *(result - 1) = v44;
          *result = v45;
        }
        v46 = *v40;
        v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v40 - 1.0)) & _xmm);
        if ( v47 >= 0.00012207031 )
        {
          v48 = result[2] / v46;
          result[1] = result[1] / v46;
          v49 = result[3] / v46;
          result[2] = v48;
          result[3] = v49;
        }
        v50 = v40[1];
        v51 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v50 - 1.0)) & _xmm);
        if ( v51 >= 0.00012207031 )
        {
          v52 = result[5] / v50;
          result[4] = result[4] / v50;
          v53 = result[6] / v50;
          result[5] = v52;
          result[6] = v53;
        }
        v54 = v40[2];
        v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v54 - 1.0)) & _xmm);
        if ( v55 >= 0.00012207031 )
        {
          v56 = result[8] / v54;
          result[7] = result[7] / v54;
          v57 = result[9] / v54;
          result[8] = v56;
          result[9] = v57;
        }
        v40 += 4;
        result += 12;
        --v41;
      }
      while ( v41 );
    }
  }
  return result;
}
