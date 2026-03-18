/*
 * XREFs of ?Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180116FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008CE0 (-IsSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18002E1C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 *     ?IsReadyToDraw@CCompiledEffect@@QEBA_NXZ @ 0x1801133B0 (-IsReadyToDraw@CCompiledEffect@@QEBA_NXZ.c)
 *     ?CalculateDestinationRect@CPrimitive@@AEBAXAEBUD2D_SIZE_F@@0W4CompositionStretch@Composition@UI@Windows@@MMPEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x18011658C (-CalculateDestinationRect@CPrimitive@@AEBAXAEBUD2D_SIZE_F@@0W4CompositionStretch@Composition@UI@.c)
 *     ?CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180116A08 (-CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CPrimitive::Draw(CPrimitive *this, CDrawingContext *a2, float *a3, bool *a4)
{
  FLOAT v4; // xmm1_4
  unsigned int v9; // edi
  bool v10; // si
  float v11; // xmm0_4
  struct CVisual *CurrentVisual; // r15
  int v13; // eax
  bool IsSwapChain; // al
  __int64 v15; // rcx
  float v16; // xmm1_4
  int v17; // r9d
  __int64 v18; // rcx
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  FLOAT v23; // xmm5_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  int v26; // eax
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  int v29; // r9d
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm5_4
  float v33; // xmm4_4
  FLOAT v34; // xmm7_4
  float v35; // xmm0_4
  unsigned int v36; // xmm5_4
  unsigned int v37; // xmm4_4
  float v38; // xmm0_4
  FLOAT v39; // xmm3_4
  int v40; // eax
  int v41; // eax
  __int64 v43; // [rsp+58h] [rbp-91h] BYREF
  struct D2D_RECT_F v44; // [rsp+60h] [rbp-89h] BYREF
  struct D2D_RECT_F v45; // [rsp+70h] [rbp-79h] BYREF
  struct D2D_MATRIX_3X2_F v46; // [rsp+80h] [rbp-69h] BYREF
  struct D2D_MATRIX_3X2_F v47; // [rsp+98h] [rbp-51h] BYREF

  v4 = *a3;
  v9 = 0;
  v10 = 1;
  if ( *a3 == 0.0 )
    goto LABEL_21;
  v11 = a3[1];
  if ( v11 == 0.0 )
    goto LABEL_21;
  v44.left = 0.0;
  v44.top = 0.0;
  v44.right = v4;
  v44.bottom = v11;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)a2 + 56));
  if ( *((_DWORD *)this + 12) == 1 )
  {
    if ( *((float *)this + 41) > 0.0 )
    {
      *(_QWORD *)&v47.m[2][0] = 0LL;
      *(_OWORD *)&v47.m11 = _xmm;
      v41 = CDrawingContext::DrawPrimitiveMesh(a2, CurrentVisual, this, &v47, &v44);
      v9 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x21Au);
        return v9;
      }
    }
    v10 = *((float *)this + 41) >= 1.0;
    goto LABEL_21;
  }
  if ( *((_DWORD *)this + 12) == 2 )
  {
    IsSwapChain = CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)(*((_QWORD *)this + 7) + 40LL));
    v45 = 0LL;
    if ( IsSwapChain )
    {
      v44.left = 0.0;
      *(_QWORD *)&v46.m[2][0] = 0LL;
      v44.top = 0.0;
      *(_OWORD *)&v46.m11 = _xmm;
      CPrimitive::CalculateSwapChainContentSize(this, (struct D2D_SIZE_F *)&v44, &v46);
      v16 = *((float *)this + 44);
      *(_QWORD *)&v47.m[2][0] = 0LL;
      v17 = *((_DWORD *)this + 46);
      *(_OWORD *)&v47.m11 = _xmm;
      LOBYTE(v43) = 0;
      CPrimitive::CalculateDestinationRect(
        v18,
        &v44.left,
        a3,
        v17,
        v16,
        *((float *)this + 45),
        &v45,
        (__int64)&v47,
        (char *)&v43);
      if ( !(_BYTE)v43 )
      {
        v19 = v47.m21 * v46.m12;
        v20 = v47.m21 * v46.m11;
        v21 = v47.dx * v46.m11;
        v22 = v47.dx * v46.m12;
        v46.m11 = (float)(v46.m11 * v47.m11) + (float)(v46.m21 * v47.m12);
        v46.m12 = (float)(v46.m12 * v47.m11) + (float)(v46.m22 * v47.m12);
        v23 = (float)(v47.m22 * v46.m22) + v19;
        v24 = v47.dy * v46.m21;
        v25 = (float)(v47.dy * v46.m22) + v22;
        v46.m21 = v20 + (float)(v47.m22 * v46.m21);
        v46.m22 = v23;
        v46.dy = v25 + v46.dy;
        v46.dx = (float)(v21 + v24) + v46.dx;
      }
      v26 = CDrawingContext::DrawPrimitiveMesh(a2, CurrentVisual, this, &v46, &v45);
      v9 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x258u);
        return v9;
      }
    }
    else
    {
      v27 = (__m128)*((unsigned int *)this + 20);
      v28 = (__m128)*((unsigned int *)this + 21);
      v28.m128_f32[0] = v28.m128_f32[0] - *((float *)this + 19);
      v27.m128_f32[0] = v27.m128_f32[0] - *((float *)this + 18);
      *(_QWORD *)&v46.m[2][0] = 0LL;
      v29 = *((_DWORD *)this + 46);
      *(_QWORD *)&v44.left = _mm_unpacklo_ps(v27, v28).m128_u64[0];
      v30 = *((float *)this + 45);
      *(_OWORD *)&v46.m11 = _xmm;
      CPrimitive::CalculateDestinationRect(
        v15,
        &v44.left,
        a3,
        v29,
        *((float *)this + 44),
        v30,
        &v45,
        (__int64)&v46,
        0LL);
      v27.m128_f32[0] = v46.dy * *((float *)this + 26);
      v31 = v46.dy * *((float *)this + 27);
      v32 = v46.m22 * *((float *)this + 27);
      v33 = v46.m22 * *((float *)this + 26);
      v34 = (float)(v46.m12 * *((float *)this + 27)) + (float)(*((float *)this + 23) * v46.m11);
      v46.m11 = (float)(v46.m12 * *((float *)this + 26)) + (float)(*((float *)this + 22) * v46.m11);
      v35 = v46.m21 * *((float *)this + 22);
      *(float *)&v36 = v32 + (float)(v46.m21 * *((float *)this + 23));
      v46.m12 = v34;
      *(float *)&v37 = v33 + v35;
      v38 = v46.dx * *((float *)this + 22);
      v28.m128_f32[0] = v46.dx * *((float *)this + 23);
      *(_QWORD *)&v46.m[1][0] = __PAIR64__(v36, v37);
      v39 = (float)(v31 + v28.m128_f32[0]) + *((float *)this + 35);
      v46.dx = (float)(v27.m128_f32[0] + v38) + *((float *)this + 34);
      v46.dy = v39;
      v40 = CDrawingContext::DrawPrimitiveMesh(a2, CurrentVisual, this, &v46, &v45);
      v9 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x276u);
        return v9;
      }
    }
    goto LABEL_21;
  }
  if ( *((_DWORD *)this + 12) != 3 )
    goto LABEL_21;
  if ( !CCompiledEffect::IsReadyToDraw(*((CCompiledEffect **)this + 21)) )
  {
    v10 = 0;
    goto LABEL_21;
  }
  v13 = CDrawingContext::DrawBrushEffect(a2, CurrentVisual, this, *((struct CCompiledEffect **)this + 21), &v44);
  v9 = v13;
  if ( v13 >= 0 )
  {
LABEL_21:
    *a4 = v10;
    return v9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x22Cu);
  return v9;
}
