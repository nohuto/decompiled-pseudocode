/*
 * XREFs of ?Transform@?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z @ 0x180198C44
 * Callers:
 *     ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$00@@$00$00VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801979D0 (-Transfer@-$CVertexTransfer2@V-$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$00@@$00$0.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$01$00@@$01$00VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197E00 (-Transfer@-$CVertexTransfer2@V-$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$01$00@@$01$0.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$00@@$0A@$00VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180198288 (-Transfer@-$CVertexTransfer2@V-$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$00@@$0A@.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 *__fastcall CScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,1,1>::Transform(
        __m128 *a1,
        __m128 *a2,
        __m128 *a3,
        double a4,
        int a5,
        __m128 *a6)
{
  __m128 v6; // xmm4
  __m128 v7; // xmm6
  __m128 v8; // xmm9
  __m128 v9; // xmm10
  __m128 v10; // xmm11
  __m128 v11; // xmm12
  __m128 v12; // xmm0
  __m128 v13; // xmm13
  __m128 v14; // xmm15
  __m128 v15; // xmm14
  __m128 v16; // xmm4
  __m128 v17; // xmm7
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm7
  __m128 v21; // xmm8
  __m128 v22; // xmm6
  __m128 v23; // xmm3
  __m128 v24; // xmm1
  __m128 *result; // rax
  __m128 v26; // [rsp+0h] [rbp-D8h]
  __m128 v27; // [rsp+10h] [rbp-C8h]
  __m128 v28; // [rsp+20h] [rbp-B8h]

  v7 = *a3;
  v8 = a3[2];
  v27 = a3[1];
  v9 = a1[1];
  v28 = a3[3];
  v10 = *a1;
  v11 = a1[2];
  v12 = _mm_sub_ps(_mm_shuffle_ps(*a2, DirectX::g_XMOne, 228), *a3);
  v13 = a2[1];
  v14 = v6;
  v15 = a2[3];
  v16 = (__m128)DirectX::g_XMOne;
  v26 = *(__m128 *)&a4;
  v17 = _mm_shuffle_ps(a2[2], DirectX::g_XMOne, 228);
  v18 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v9), _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *a1));
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(v18, DirectX::g_XMZero)) & 3) != 3 )
  {
    v19 = _mm_mul_ps(v18, v18);
    v16.m128_f32[0] = 1.0 / fsqrt(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0]);
    v16 = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), _mm_shuffle_ps(v7, v7, 170));
  }
  v20 = _mm_sub_ps(v17, v8);
  v21 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), v9), v11),
            _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v10)),
          _mm_mul_ps(v16, v18));
  v22 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v10), _mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), v9));
  v23 = (__m128)DirectX::g_XMOne;
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(v22, DirectX::g_XMZero)) & 3) != 3 )
  {
    v24 = _mm_mul_ps(v22, v22);
    v23.m128_f32[0] = 1.0 / fsqrt(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0]);
    v23 = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), _mm_shuffle_ps(v8, v8, 170));
  }
  result = a6;
  *a6 = _mm_shuffle_ps(
          v21,
          _mm_or_ps(
            _mm_andnot_ps(
              (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
              _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
            _mm_and_ps(
              _mm_shuffle_ps(v26, v26, 228),
              (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
          228);
  a6[4] = _mm_shuffle_ps(
            _mm_add_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), v9), v11),
                _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v10)),
              _mm_mul_ps(v23, v22)),
            _mm_or_ps(
              _mm_andnot_ps(
                (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
              _mm_and_ps(
                _mm_shuffle_ps(v14, v14, 228),
                (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
            228);
  a6[1] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v13, v27), _mm_shuffle_ps(v16, v16, 0)), v27);
  a6[5] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v15, v28), _mm_shuffle_ps(v23, v23, 0)), v28);
  return result;
}
