/*
 * XREFs of ??$TransferVertices2D_NoAAFixup_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800155E4
 * Callers:
 *     ?TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@MI@Z @ 0x1800330E0 (-TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEB.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall TransferVertices2D_NoAAFixup_Vector<1>(__int64 *a1, unsigned int *a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __m128 v5; // xmm11
  __m128 v6; // xmm12
  __m128 v7; // xmm13
  __m128 v8; // xmm14
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __m128 v15; // xmm1
  __m128 v16; // xmm6
  __int128 v17; // xmm10
  __int128 v18; // xmm9
  __m128 v19; // xmm8
  __m128 v20; // xmm7
  __m128i v21; // xmm5
  __m128i v22; // xmm5
  __m128 v23; // xmm5
  __m128i v24; // xmm2
  __m128i v25; // xmm2
  __m128 v26; // xmm2
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a1[2];
  v4 = *a1;
  v5 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[2], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[3], (__m128)0LL));
  v7 = _mm_unpacklo_ps(
         _mm_unpacklo_ps((__m128)a2[4], (__m128)LODWORD(FLOAT_1_0)),
         _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v8 = _mm_shuffle_ps((__m128)*((unsigned int *)a1 + 6), (__m128)*((unsigned int *)a1 + 6), 0);
  v9 = 2 * *((_DWORD *)a1 + 7);
  if ( v9 )
  {
    v10 = 1;
    do
    {
      v11 = 2LL * (v10 - 1);
      v12 = 2LL * (v10 + 1);
      v13 = 2LL * v10;
      v14 = 2LL * (v10 + 2);
      v10 += 4;
      v15 = *(__m128 *)(v4 + 8 * v11);
      v16 = *(__m128 *)(v4 + 8 * v12);
      v17 = *(_OWORD *)(v4 + 8 * v13);
      v18 = *(_OWORD *)(v4 + 8 * v14);
      result = (_UNKNOWN **)(v10 - 1);
      v19 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v15, v15, 85), v6), v7),
              _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v5));
      v20 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v6), v7),
              _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v5));
      v21 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(v15, v15, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v8));
      v22 = _mm_packs_epi32(v21, v21);
      v23 = (__m128)_mm_packus_epi16(v22, v22);
      *(__m128 *)(v3 + 8 * v11) = _mm_or_ps(
                                    _mm_andnot_ps(
                                      (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                                      _mm_shuffle_ps(v19, v19, 228)),
                                    _mm_and_ps(
                                      _mm_shuffle_ps(v23, v23, 228),
                                      (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      v24 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(v16, v16, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v8));
      v25 = _mm_packs_epi32(v24, v24);
      v26 = (__m128)_mm_packus_epi16(v25, v25);
      *(_OWORD *)(v3 + 8 * v13) = v17;
      *(__m128 *)(v3 + 8 * v12) = _mm_or_ps(
                                    _mm_andnot_ps(
                                      (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                                      _mm_shuffle_ps(v20, v20, 228)),
                                    _mm_and_ps(
                                      _mm_shuffle_ps(v26, v26, 228),
                                      (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      *(_OWORD *)(v3 + 8 * v14) = v18;
    }
    while ( (unsigned int)result < v9 );
  }
  return result;
}
