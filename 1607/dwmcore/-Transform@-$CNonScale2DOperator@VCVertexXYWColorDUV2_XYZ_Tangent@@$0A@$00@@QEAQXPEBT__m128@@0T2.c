/*
 * XREFs of ?Transform@?$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z @ 0x180198B94
 * Callers:
 *     ?Transfer@?$CVertexTransfer2@V?$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$00@@$00$00VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801968E0 (-Transfer@-$CVertexTransfer2@V-$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$00@@$0.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$01$00@@$01$00VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180196D58 (-Transfer@-$CVertexTransfer2@V-$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$01$00@@$0.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$00@@$0A@$00VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197228 (-Transfer@-$CVertexTransfer2@V-$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$00@@$.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CNonScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0,1>::Transform(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        int a5,
        __int64 a6)
{
  __m128 v6; // xmm4
  __int64 result; // rax
  __int128 v8; // xmm6
  __m128 v9; // xmm2
  __int128 v10; // xmm7
  __m128 v11; // xmm5

  result = a6;
  v8 = *(_OWORD *)(a2 + 48);
  v9 = _mm_add_ps(
         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*(__m128 *)(a2 + 32), *(__m128 *)(a2 + 32), 85), a1[1]), a1[2]),
         _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)(a2 + 32), *(__m128 *)(a2 + 32), 0), *a1));
  v10 = *(_OWORD *)(a2 + 16);
  v11 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 85), a1[1]), a1[2]),
          _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 0), *a1));
  *(__m128 *)a6 = _mm_or_ps(
                    _mm_andnot_ps(
                      (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                      _mm_shuffle_ps(v11, v11, 228)),
                    _mm_and_ps(
                      _mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 228),
                      (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
  *(_OWORD *)(a6 + 16) = v10;
  *(_OWORD *)(a6 + 80) = v8;
  *(__m128 *)(a6 + 64) = _mm_or_ps(
                           _mm_andnot_ps(
                             (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                             _mm_shuffle_ps(v9, v9, 228)),
                           _mm_and_ps(
                             _mm_shuffle_ps(v6, v6, 228),
                             (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
  return result;
}
