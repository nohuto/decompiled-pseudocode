/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@$01$00VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x18019769C
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     ?Transform@?$CScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z @ 0x18001B1A0 (-Transform@-$CScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z.c)
 */

__m128 *__fastcall CVertexTransfer2<CScale2DOperator<CVertexXYWColorDUV2,2,1>,2,1,CVertexXYWColorDUV2>::Transfer(
        __int64 *a1,
        unsigned int *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __m128 v6; // xmm0
  __m128 v7; // xmm2
  __m128 v8; // xmm10
  __m128 *result; // rax
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __m128 v12; // xmm10
  __m128 v13; // xmm10
  __int64 v14; // r8
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  int v17; // r9d
  __int64 v18; // r10
  int v19; // [rsp+20h] [rbp-98h]
  __m128 v20[8]; // [rsp+30h] [rbp-88h] BYREF

  v2 = 0;
  v3 = *a1;
  v4 = a1[1];
  v5 = a1[3];
  v6 = (__m128)a2[4];
  v7 = (__m128)a2[5];
  v20[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v8 = (__m128)*((unsigned int *)a1 + 8);
  result = (__m128 *)*((unsigned int *)a1 + 9);
  v10 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, v6), _mm_unpacklo_ps(v7, v7));
  v11 = (__m128)a2[13];
  v20[1] = v10;
  v20[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v11, (__m128)0LL));
  v12 = _mm_shuffle_ps(v8, v8, 0);
  if ( (_DWORD)result )
  {
    v13 = _mm_shuffle_ps(v12, v12, 228);
    do
    {
      v14 = 16LL * v2;
      v15 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128(
                          (__m128i)_mm_shuffle_ps(*(__m128 *)(v14 + v3), *(__m128 *)(v14 + v3), 255),
                          g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                _mm_or_ps(
                  _mm_and_ps(
                    _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228),
                    (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask),
                  _mm_andnot_ps((__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask, v13))));
      v16 = _mm_packs_epi32(v15, v15);
      result = CScale2DOperator<CVertexXYWColorDUV2,2,1>::Transform(
                 v20,
                 (__m128 *)(v14 + v3),
                 (__m128 *)(v4 + v14),
                 *(double *)_mm_packus_epi16(v16, v16).m128i_i64,
                 v19,
                 (__m128 *)(v14 + v5));
      v2 = v17 + 4;
    }
    while ( v18 != 1 );
  }
  return result;
}
