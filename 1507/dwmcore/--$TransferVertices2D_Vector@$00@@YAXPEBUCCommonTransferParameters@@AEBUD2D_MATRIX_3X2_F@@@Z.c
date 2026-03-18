/*
 * XREFs of ??$TransferVertices2D_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000D954
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18003E010 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall TransferVertices2D_Vector<1>(__int64 *a1, unsigned int *a2)
{
  _UNKNOWN **result; // rax
  int v3; // r8d
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // r9
  __m128 v7; // xmm10
  unsigned int v8; // ecx
  __m128 v9; // xmm7
  __m128 v10; // xmm8
  __m128 v11; // xmm9
  __m128 v12; // xmm10
  unsigned int v13; // r8d
  __m128 v14; // xmm4
  __int64 v15; // r10
  __int64 v16; // rdx
  __m128 v17; // xmm11
  __m128 v18; // xmm3
  __m128 v19; // xmm5
  __m128 v20; // xmm1
  __m128 v21; // xmm3
  __m128i v22; // xmm2
  __m128i v23; // xmm2
  __m128 v24; // xmm2
  __m128 v25; // xmm12
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __m128 v28; // xmm6
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *((_DWORD *)a1 + 7);
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = (__m128)*((unsigned int *)a1 + 6);
  v8 = 0;
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[2], (__m128)a2[2]), _mm_unpacklo_ps((__m128)a2[3], (__m128)a2[3]));
  v11 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v12 = _mm_shuffle_ps(v7, v7, 0);
  v13 = 2 * v3;
  if ( v13 )
  {
    do
    {
      v14 = (__m128)DirectX::g_XMOne;
      v15 = 2LL * (v8 + 1);
      v16 = 2LL * v8;
      v17 = *(__m128 *)(v5 + 16LL * (v8 + 1));
      v18 = *(__m128 *)(v4 + 16LL * v8);
      v19 = *(__m128 *)(v5 + 16LL * v8);
      v20 = _mm_cvtepi32_ps(_mm_xor_si128(_mm_and_si128((__m128i)_mm_shuffle_ps(v18, v18, 255), g_MaskA8B8G8R8), g_FlipA8R8G8B8));
      v21 = _mm_sub_ps(_mm_shuffle_ps(v18, DirectX::g_XMOne, 228), v19);
      v22 = _mm_cvttps_epi32(_mm_mul_ps(_mm_mul_ps(_mm_add_ps(v20, g_FixAA8R8G8B8), g_NormalizeA8R8G8B8), v12));
      v23 = _mm_packs_epi32(v22, v22);
      v24 = (__m128)_mm_packus_epi16(v23, v23);
      v25 = _mm_or_ps(
              _mm_andnot_ps(
                (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
              _mm_and_ps(
                _mm_shuffle_ps(v24, v24, 228),
                (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      v26 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v10), _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v9));
      result = (_UNKNOWN **)(_mm_movemask_ps(_mm_cmpeq_ps(v26, DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result != 3 )
      {
        v27 = _mm_mul_ps(v26, v26);
        v14.m128_f32[0] = 1.0 / fsqrt(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0]);
        v14 = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), _mm_shuffle_ps(v19, v19, 170));
      }
      v28 = _mm_sub_ps(*(__m128 *)(v4 + 16LL * (v8 + 1)), v17);
      v8 += 2;
      *(__m128 *)(v6 + 8 * v16) = _mm_shuffle_ps(
                                    _mm_add_ps(
                                      _mm_add_ps(
                                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v10), v11),
                                        _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v9)),
                                      _mm_mul_ps(v14, v26)),
                                    v25,
                                    228);
      *(__m128 *)(v6 + 8 * v15) = _mm_add_ps(_mm_mul_ps(v28, _mm_shuffle_ps(v14, v14, 0)), v17);
    }
    while ( v8 < v13 );
  }
  return result;
}
