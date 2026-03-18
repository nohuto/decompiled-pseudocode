/*
 * XREFs of ??$TransferVertices2D_NoAAFixup_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180032FB0
 * Callers:
 *     ?TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@MI@Z @ 0x1800330E0 (-TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEB.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TransferVertices2D_NoAAFixup_Vector<0>(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // r11
  __int64 v3; // rbx
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  __m128 v6; // xmm8
  unsigned int v7; // edi
  unsigned int v8; // r10d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __m128 v13; // xmm2
  __m128 v14; // xmm4
  __int128 v15; // xmm3
  __int64 result; // rax

  v2 = a1[2];
  v3 = *a1;
  v4 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v5 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[2], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[3], (__m128)0LL));
  v6 = _mm_unpacklo_ps(
         _mm_unpacklo_ps((__m128)a2[4], (__m128)LODWORD(FLOAT_1_0)),
         _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v7 = 2 * *((_DWORD *)a1 + 7);
  if ( v7 )
  {
    v8 = 1;
    do
    {
      v9 = 2LL * (v8 - 1);
      v10 = 2LL * (v8 + 1);
      v11 = 2LL * v8;
      v12 = 2LL * (v8 + 2);
      v8 += 4;
      v13 = *(__m128 *)(v3 + 8 * v9);
      v14 = *(__m128 *)(v3 + 8 * v10);
      v15 = *(_OWORD *)(v3 + 8 * v12);
      result = v8 - 1;
      *(_OWORD *)(v2 + 8 * v11) = *(_OWORD *)(v3 + 8 * v11);
      *(_OWORD *)(v2 + 8 * v12) = v15;
      *(__m128 *)(v2 + 8 * v9) = _mm_shuffle_ps(
                                   _mm_add_ps(
                                     _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 85), v5), v6),
                                     _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v4)),
                                   v13,
                                   228);
      *(__m128 *)(v2 + 8 * v10) = _mm_shuffle_ps(
                                    _mm_add_ps(
                                      _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 85), v5), v6),
                                      _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v4)),
                                    v14,
                                    228);
    }
    while ( (unsigned int)result < v7 );
  }
  return result;
}
