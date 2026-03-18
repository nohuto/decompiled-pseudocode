/*
 * XREFs of ?GetInputTransform@CCompiledEffect@@QEAAJIAEBUD2D_RECT_F@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180112A08
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008CE0 (-IsSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DD224 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?FindInput@CCompiledEffect@@AEAAPEAVInternalFilterInput@@I@Z @ 0x180112620 (-FindInput@CCompiledEffect@@AEAAPEAVInternalFilterInput@@I@Z.c)
 */

__int64 __fastcall CCompiledEffect::GetInputTransform(
        CCompiledEffect *this,
        int a2,
        const struct D2D_RECT_F *a3,
        struct D2D_RECT_F *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  float v7; // xmm9_4
  float v8; // xmm10_4
  struct InternalFilterInput *Input; // rax
  __int64 v10; // r11
  unsigned int v11; // esi
  struct InternalFilterInput *v12; // r14
  __int64 v13; // rax
  CCompositionSurfaceInfo *v14; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v16; // r12
  float v17; // xmm6_4
  __int64 (__fastcall *v18)(__int64); // rbx
  struct D2D_RECT_F v19; // xmm8
  int v20; // eax
  int v21; // eax
  int v22; // eax
  float m11; // xmm15_4
  float dx; // xmm12_4
  float v25; // xmm13_4
  float m12; // xmm15_4
  float v27; // xmm12_4
  __m128 m21_low; // xmm14
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float bottom; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm9_4
  float v40; // xmm7_4
  float v41; // xmm10_4
  float v42; // xmm8_4
  float v43; // xmm5_4
  float v44; // xmm6_4
  float v45; // xmm9_4
  float v46; // xmm6_4
  float v47; // xmm4_4
  float v48; // xmm10_4
  float v49; // xmm7_4
  float v50; // xmm0_4
  float v51; // xmm8_4
  float v52; // xmm15_4
  __m128 v53; // xmm6
  float v54; // xmm3_4
  float v55; // xmm8_4
  struct D2D_MATRIX_3X2_F *v56; // rax
  __m128 v57; // xmm1
  float v59; // [rsp+30h] [rbp-D0h]
  float v60; // [rsp+34h] [rbp-CCh]
  float dy; // [rsp+38h] [rbp-C8h] BYREF
  float v62; // [rsp+3Ch] [rbp-C4h] BYREF
  float v63; // [rsp+40h] [rbp-C0h]
  float left; // [rsp+44h] [rbp-BCh]
  float v65; // [rsp+48h] [rbp-B8h]
  float v66; // [rsp+4Ch] [rbp-B4h]
  struct D2D_MATRIX_3X2_F *v67; // [rsp+50h] [rbp-B0h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+58h] [rbp-A8h] BYREF
  D2D1_MATRIX_3X2_F v69; // [rsp+70h] [rbp-90h] BYREF
  __int64 v70; // [rsp+88h] [rbp-78h] BYREF
  float v71; // [rsp+90h] [rbp-70h]
  float v72; // [rsp+94h] [rbp-6Ch]

  v7 = a3->right - a3->left;
  v8 = a3->bottom - a3->top;
  v67 = a5;
  Input = CCompiledEffect::FindInput(this, a2);
  v11 = 0;
  v12 = Input;
  if ( !Input )
  {
    v11 = -2147023728;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x1DCu);
    return v11;
  }
  *a4 = 0LL;
  *(_OWORD *)v10 = _xmm;
  *(_QWORD *)(v10 + 16) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v13 = *((_QWORD *)Input + 6);
  v70 = v13;
  if ( v13 )
  {
    v14 = *(CCompositionSurfaceInfo **)(v13 + 432);
    if ( v14 )
    {
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v14);
      v16 = (__int64)RenderingRealizationNoRef;
      if ( RenderingRealizationNoRef )
      {
        (*(void (__fastcall **)(__int64, float *, float *))(*((_QWORD *)RenderingRealizationNoRef + 14) + 24LL))(
          (__int64)RenderingRealizationNoRef + 112,
          &dy,
          &v62);
        v17 = FLOAT_1_0;
        if ( !CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)(v70 + 40)) )
        {
          v29 = 1.0 / (float)SLODWORD(dy);
          v30 = 1.0 / (float)SLODWORD(v62);
          v31 = (float)*((int *)v12 + 2);
          matrix.m11 = (float)*((int *)v12 + 1) * v29;
          v32 = (float)*((int *)v12 + 3);
          matrix.m12 = v31 * v30;
          v33 = (float)*((int *)v12 + 4);
          matrix.m21 = v32 * v29;
          matrix.m22 = v33 * v30;
          v19 = (struct D2D_RECT_F)_mm_loadu_si128((const __m128i *)&matrix);
          *(_OWORD *)&matrix.m11 = _xmm;
          v60 = *((float *)&_xmm + 2);
          v59 = *(float *)&_xmm;
          goto LABEL_17;
        }
        CBitmapRealization::GetSourceRect(v16, (__int64)&v70);
        *(_QWORD *)&matrix.m11 = 0LL;
        v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 104LL);
        matrix.m21 = (float)(v71 - *(float *)&v70) / (float)SLODWORD(dy);
        matrix.m22 = (float)(v72 - *((float *)&v70 + 1)) / (float)SLODWORD(v62);
        v19 = (struct D2D_RECT_F)_mm_loadu_si128((const __m128i *)&matrix);
        v20 = v18(v16) - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
                goto LABEL_11;
              D2D1MakeRotateMatrix(270.0, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL), &matrix);
              m11 = matrix.m11;
              dx = matrix.dx;
              v59 = (float)(matrix.m12 * 0.0) + matrix.m11;
              v17 = FLOAT_1_0;
              v25 = (float)((float)(matrix.dy * 0.0) + matrix.dx) + 0.0;
            }
            else
            {
              D2D1MakeRotateMatrix(180.0, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL), &matrix);
              m11 = matrix.m11;
              dx = matrix.dx;
              v59 = (float)(matrix.m12 * 0.0) + matrix.m11;
              v17 = FLOAT_1_0;
              v25 = (float)((float)(matrix.dy * 0.0) + matrix.dx) + 1.0;
            }
            m21_low = (__m128)LODWORD(matrix.m21);
            m12 = (float)(m11 * 0.0) + matrix.m12;
            v27 = (float)((float)(dx * 0.0) + matrix.dy) + v17;
            m21_low.m128_f32[0] = (float)(matrix.m21 * 0.0) + matrix.m22;
            v60 = (float)(matrix.m22 * 0.0) + matrix.m21;
          }
          else
          {
            D2D1MakeRotateMatrix(90.0, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL), &matrix);
            m21_low = (__m128)LODWORD(matrix.m21);
            m12 = (float)(matrix.m11 * 0.0) + matrix.m12;
            v59 = (float)(matrix.m12 * 0.0) + matrix.m11;
            v17 = FLOAT_1_0;
            v27 = (float)((float)(matrix.dx * 0.0) + matrix.dy) + 0.0;
            m21_low.m128_f32[0] = (float)(matrix.m21 * 0.0) + matrix.m22;
            v60 = (float)(matrix.m22 * 0.0) + matrix.m21;
            v25 = (float)((float)(matrix.dy * 0.0) + matrix.dx) + 1.0;
          }
LABEL_18:
          *a4 = v19;
          v34 = a4->right - a4->left;
          left = a4->left;
          bottom = a4->bottom;
          v63 = v34;
          v36 = bottom - a4->top;
          *(FLOAT *)&v70 = a4->top;
          *(_OWORD *)&v69.m11 = *(_OWORD *)((char *)v12 + 20);
          v66 = v36;
          *(_QWORD *)&v69.m[2][0] = *(_QWORD *)((char *)v12 + 36);
          if ( D2D1InvertMatrix(&v69) )
          {
            dy = v69.dy;
            v62 = v69.dx;
          }
          else
          {
            *(_OWORD *)&v69.m11 = _xmm;
            v62 = 0.0;
            dy = 0.0;
          }
          v37 = v17 / v7;
          v38 = v17 / v8;
          v39 = v38 * a3->top;
          LODWORD(v40) = COERCE_UNSIGNED_INT(v37 * a3->left) ^ _xmm;
          v41 = (float)(v69.m11 * v37) + (float)(v69.m21 * 0.0);
          v42 = (float)(v37 * v69.m12) + (float)(v69.m22 * 0.0);
          v43 = (float)(v38 * v69.m21) + (float)(v69.m11 * 0.0);
          v65 = (float)(v38 * v69.m22) + (float)(v69.m12 * 0.0);
          LODWORD(v44) = LODWORD(v39) ^ _xmm;
          v45 = (float)((float)(COERCE_FLOAT(LODWORD(v39) ^ _xmm) * v69.m22) + (float)(v40 * v69.m12)) + dy;
          v46 = (float)((float)(v44 * v69.m21) + (float)(v69.m11 * v40)) + v62;
          v47 = (float)(v59 * v41) + (float)(v60 * v42);
          v48 = (float)(v41 * m12) + (float)(m21_low.m128_f32[0] * v42);
          v49 = (float)(v59 * v43) + (float)(v60 * v65);
          v50 = m12 * v43;
          v51 = (float)(v59 * v46) + (float)(v60 * v45);
          v52 = m12 * v46;
          v53 = (__m128)LODWORD(v66);
          v54 = (float)(m21_low.m128_f32[0] * v65) + v50;
          v55 = v51 + v25;
          m21_low.m128_f32[0] = (float)((float)(m21_low.m128_f32[0] * v45) + v52) + v27;
          v69.m11 = (float)(v47 * v63) + (float)(v48 * 0.0);
          v56 = v67;
          v69.m12 = (float)(v66 * v48) + (float)(v47 * 0.0);
          v69.m21 = (float)(v63 * v49) + (float)(v54 * 0.0);
          v57 = m21_low;
          v53.m128_f32[0] = (float)((float)(v66 * m21_low.m128_f32[0]) + (float)(v55 * 0.0)) + *(float *)&v70;
          v57.m128_f32[0] = (float)((float)(m21_low.m128_f32[0] * 0.0) + (float)(v63 * v55)) + left;
          v69.m22 = (float)(v66 * v54) + (float)(v49 * 0.0);
          *(_OWORD *)&v67->m11 = *(_OWORD *)&v69.m11;
          *(_QWORD *)&v56->m[2][0] = _mm_unpacklo_ps(v57, v53).m128_u64[0];
          return v11;
        }
LABEL_11:
        *(_OWORD *)&matrix.m11 = _xmm;
        v59 = *(float *)&_xmm;
        v17 = FLOAT_1_0;
        v60 = *((float *)&_xmm + 2);
LABEL_17:
        m21_low = (__m128)LODWORD(matrix.m22);
        v25 = 0.0;
        m12 = matrix.m12;
        v27 = 0.0;
        goto LABEL_18;
      }
    }
  }
  return v11;
}
