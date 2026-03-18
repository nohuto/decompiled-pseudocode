/*
 * XREFs of ??$TransferVertices2D_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC06C
 * Callers:
 *     ?TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@MI@Z @ 0x1800330E0 (-TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEB.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall TransferVertices2D_Vector<0>(__int64 *a1, unsigned int *a2)
{
  _UNKNOWN **result; // rax
  int v3; // r8d
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned int v7; // ecx
  __m128 v8; // xmm6
  __m128 v9; // xmm7
  __m128 v10; // xmm8
  unsigned int v11; // r8d
  __m128 v12; // xmm4
  __int64 v13; // r10
  __int64 v14; // rdx
  __m128 v15; // xmm11
  __m128 v16; // xmm3
  __m128 v17; // xmm5
  __m128 v18; // xmm10
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm9
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *((_DWORD *)a1 + 7);
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = 0;
  v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[2], (__m128)a2[2]), _mm_unpacklo_ps((__m128)a2[3], (__m128)a2[3]));
  v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v11 = 2 * v3;
  if ( v11 )
  {
    do
    {
      v12 = (__m128)DirectX::g_XMOne;
      v13 = 2LL * (v7 + 1);
      v14 = 2LL * v7;
      v15 = *(__m128 *)(v5 + 16LL * (v7 + 1));
      v16 = *(__m128 *)(v4 + 16LL * v7);
      v17 = *(__m128 *)(v5 + 16LL * v7);
      v18 = _mm_or_ps(
              _mm_andnot_ps(
                (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
              _mm_and_ps(
                _mm_shuffle_ps(v16, v16, 228),
                (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      v19 = _mm_sub_ps(_mm_shuffle_ps(v16, DirectX::g_XMOne, 228), v17);
      v20 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v9), _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v8));
      result = (_UNKNOWN **)(_mm_movemask_ps(_mm_cmpeq_ps(v20, (__m128)DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result != 3 )
      {
        v21 = _mm_mul_ps(v20, v20);
        v12.m128_f32[0] = 1.0 / fsqrt(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0]);
        v12 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_shuffle_ps(v17, v17, 170));
      }
      v22 = _mm_sub_ps(*(__m128 *)(v4 + 16LL * (v7 + 1)), v15);
      v7 += 2;
      *(__m128 *)(v6 + 8 * v14) = _mm_shuffle_ps(
                                    _mm_add_ps(
                                      _mm_add_ps(
                                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v9), v10),
                                        _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v8)),
                                      _mm_mul_ps(v12, v20)),
                                    v18,
                                    228);
      *(__m128 *)(v6 + 8 * v13) = _mm_add_ps(_mm_mul_ps(v22, _mm_shuffle_ps(v12, v12, 0)), v15);
    }
    while ( v7 < v11 );
  }
  return result;
}
