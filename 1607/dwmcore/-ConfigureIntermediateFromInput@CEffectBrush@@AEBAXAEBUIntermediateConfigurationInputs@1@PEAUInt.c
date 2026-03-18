/*
 * XREFs of ?ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18013B4D4
 * Callers:
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 *     ?RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013CFC0 (-RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C0DCC (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180110A0C (--4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetSurfaceSize@CEffectBrush@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18013BF88 (-GetSurfaceSize@CEffectBrush@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 *     RoundIntermediateSize @ 0x18013DFC4 (RoundIntermediateSize.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x180163EF4 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 */

void __fastcall CEffectBrush::ConfigureIntermediateFromInput(
        CEffectBrush *this,
        const struct CEffectBrush::IntermediateConfigurationInputs *a2,
        struct CEffectBrush::IntermediateConfigurationOutputs *a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  struct D2D_SIZE_F SurfaceSize; // rax
  float *v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __int128 v21; // xmm7
  __m128 v22; // xmm6
  __int64 v23; // rcx
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  __int64 v26; // kr00_8
  __int128 v27; // [rsp+28h] [rbp-69h]
  __int128 v28; // [rsp+38h] [rbp-59h] BYREF
  __int128 v29; // [rsp+48h] [rbp-49h]
  int v30; // [rsp+58h] [rbp-39h]
  float v31[10]; // [rsp+60h] [rbp-31h] BYREF
  float width; // [rsp+88h] [rbp-9h] BYREF
  int v33; // [rsp+8Ch] [rbp-5h]
  int v34; // [rsp+90h] [rbp-1h]
  FLOAT height; // [rsp+94h] [rbp+3h]
  float v36; // [rsp+98h] [rbp+7h]
  float v37; // [rsp+9Ch] [rbp+Bh]

  v3 = *((_QWORD *)a2 + 3);
  v5 = *(_QWORD *)a3;
  if ( *(_BYTE *)(v3 + 8) )
  {
    v7 = *(_OWORD *)(v3 + 12);
    v8 = *(_OWORD *)(v3 + 28);
    v30 = *(_DWORD *)(v3 + 44);
    v28 = v7;
    v29 = v8;
  }
  else
  {
    Matrix3x3::operator=(&v28, (_DWORD *)(*((_QWORD *)this + 37) + 88LL + 304LL * *(unsigned int *)(v3 + 12)));
  }
  SurfaceSize = CEffectBrush::GetSurfaceSize(*(struct IImageSource **)v3);
  v33 = 0;
  v34 = 0;
  height = SurfaceSize.height;
  width = SurfaceSize.width;
  v36 = 0.0 - (float)(SurfaceSize.width * 0.0);
  v37 = 0.0 - (float)(SurfaceSize.height * 0.0);
  v10 = Matrix3x3::operator*((float *)&v28, v31, &width);
  v11 = *(_OWORD *)v10;
  v12 = *((_OWORD *)v10 + 1);
  *(float *)&v10 = v10[8];
  v28 = v11;
  v30 = (int)v10;
  v29 = v12;
  *((_QWORD *)a3 + 4) = **(_QWORD **)&Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)&v28);
  v14 = *((float *)a3 + 8);
  v15 = *((float *)a2 + 2) / v14;
  if ( v15 < 1.0 )
    v14 = v14 * v15;
  v16 = *((float *)a3 + 9);
  v17 = *((float *)a2 + 3) / v16;
  if ( v17 < 1.0 )
    v16 = v16 * v17;
  v18 = (__m128)*((unsigned int *)a3 + 6);
  v18.m128_f32[0] = fmaxf(v18.m128_f32[0], v14 * *((float *)a2 + 4));
  v19 = (__m128)*((unsigned int *)a3 + 7);
  v19.m128_f32[0] = fmaxf(v19.m128_f32[0], v16 * *((float *)a2 + 5));
  *((_QWORD *)a3 + 3) = _mm_unpacklo_ps(v18, v19).m128_u64[0];
  v20 = (__m128)*(unsigned int *)a2;
  v21 = *((unsigned int *)a3 + 7);
  *(double *)v20.m128_u64 = RoundIntermediateSize(v13);
  v22 = v20;
  v20.m128_u64[1] = *((_QWORD *)&v21 + 1);
  *(double *)v20.m128_u64 = RoundIntermediateSize(v23);
  *(_QWORD *)&v27 = 0LL;
  v33 = 0;
  v34 = 0;
  *((_QWORD *)a3 + 1) = _mm_unpacklo_ps(v22, v20).m128_u64[0];
  v24 = (__m128)*((unsigned int *)a3 + 2);
  v24.m128_f32[0] = v24.m128_f32[0] / *(float *)a2;
  v25 = (__m128)*((unsigned int *)a3 + 3);
  v25.m128_f32[0] = v25.m128_f32[0] / *((float *)a2 + 1);
  *((_QWORD *)a3 + 2) = _mm_unpacklo_ps(v24, v25).m128_u64[0];
  v26 = *((_QWORD *)a3 + 1);
  *((_QWORD *)&v27 + 1) = v26;
  *(_OWORD *)(v5 + 48) = v27;
  v24.m128_f32[0] = *((float *)a3 + 7) / *((float *)a3 + 3);
  width = *((float *)a3 + 6) / *((float *)a3 + 2);
  height = v24.m128_f32[0];
  v36 = 0.0 - (float)(width * 0.0);
  v37 = 0.0 - (float)(v24.m128_f32[0] * 0.0);
  Matrix3x3::operator=((_DWORD *)(v5 + 12), &width);
}
