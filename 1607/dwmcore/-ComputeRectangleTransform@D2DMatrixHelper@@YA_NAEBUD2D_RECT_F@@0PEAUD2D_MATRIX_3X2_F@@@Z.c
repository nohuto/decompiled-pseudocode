/*
 * XREFs of ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801642D0
 * Callers:
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 * Callees:
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800AE65C (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 */

char __fastcall D2DMatrixHelper::ComputeRectangleTransform(
        const struct D2D_RECT_F *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  __int64 v4; // rdx
  float *v5; // rcx
  __int64 v6; // r8
  char v7; // r9
  __int128 v8; // xmm0
  unsigned __int64 v9; // xmm1_8
  __m128 v10; // xmm5
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  __m128 v14; // xmm3
  __m128 v15; // xmm5
  float v16; // xmm6_4
  float v17; // xmm2_4
  __m128 v18; // xmm1
  __int128 v20; // [rsp+20h] [rbp-38h]

  if ( AreEqual(this, a2) )
  {
    v8 = _xmm;
    v9 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
LABEL_7:
    *(_OWORD *)v6 = v8;
    *(_QWORD *)(v6 + 16) = v9;
    return v7;
  }
  v10 = (__m128)*(unsigned int *)v5;
  v11 = v5[1];
  v12 = v5[2] - v10.m128_f32[0];
  v13 = v5[3] - v11;
  if ( v12 != 0.0 || v13 != 0.0 )
  {
    v14 = (__m128)*(unsigned int *)(v4 + 12);
    v15 = _mm_xor_ps(v10, (__m128)_xmm);
    LODWORD(v16) = LODWORD(v11) ^ _xmm;
    v14.m128_f32[0] = (float)(v14.m128_f32[0] - *(float *)(v4 + 4)) / v13;
    v17 = (float)(*(float *)(v4 + 8) - *(float *)v4) / v12;
    *(float *)&v20 = v17 + 0.0;
    *((float *)&v20 + 1) = (float)(v14.m128_f32[0] * 0.0) + 0.0;
    *((float *)&v20 + 3) = v14.m128_f32[0] + 0.0;
    *((float *)&v20 + 2) = (float)(v17 * 0.0) + 0.0;
    v18 = v15;
    v8 = v20;
    v18.m128_f32[0] = (float)((float)(v15.m128_f32[0] * v17) + (float)(v16 * 0.0)) + *(float *)v4;
    v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] * v16) + (float)(v15.m128_f32[0] * 0.0)) + *(float *)(v4 + 4);
    v9 = _mm_unpacklo_ps(v18, v14).m128_u64[0];
    goto LABEL_7;
  }
  return 0;
}
