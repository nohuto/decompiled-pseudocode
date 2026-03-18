/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$00@@$0A@$00VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197228
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 *     ?Transform@?$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z @ 0x180198B94 (-Transform@-$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$00@@QEAQXPEBT__m128@@0T2.c)
 */

_UNKNOWN **__fastcall CVertexTransfer2<CNonScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0,1>,0,1,CVertexXYWColorDUV2_XYZ_Tangent>::Transfer(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  _UNKNOWN **result; // rax
  struct D2D_POINT_2F *v5; // r15
  const struct D2D_POINT_2F *v7; // rbp
  __int64 v9; // r12
  __int64 v10; // rdi
  __m128 v11; // xmm6
  __m128 v12; // xmm7
  __m128 v13; // xmm8
  unsigned int v14; // r14d
  __int128 v15; // xmm9
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  unsigned int v20; // esi
  int v21; // r11d
  int v22; // r10d
  unsigned int v23; // r10d
  int v24; // r11d
  __m128 v25; // xmm3
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  __int64 v28; // rcx
  int v29; // [rsp+20h] [rbp-A8h]
  __int128 v30; // [rsp+30h] [rbp-98h] BYREF
  _OWORD v31[7]; // [rsp+40h] [rbp-88h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = *(struct D2D_POINT_2F **)(a1 + 16);
  v7 = *(const struct D2D_POINT_2F **)a1;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = (__m128)DirectX::g_XMZero;
  v12 = (__m128)DirectX::g_XMZero;
  v13 = (__m128)DirectX::g_XMZero;
  if ( a3 )
  {
    v11 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v12 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v13 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v14 = *(_DWORD *)(a1 + 36);
  v15 = _xmm;
  if ( a3 )
  {
    result = (_UNKNOWN **)CalculateTBNFrame((__int64)&v30, v5, v7, (CMILMatrix *)a3, a4);
    v15 = v30;
  }
  v16 = (__m128)a2[5];
  v31[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v17 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v16, (__m128)0LL));
  v18 = (__m128)a2[13];
  v31[1] = v17;
  v19 = (__m128)a2[12];
  v20 = 0;
  v31[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v18, (__m128)0LL));
  if ( v14 )
  {
    v21 = 0;
    v22 = 6;
    do
    {
      CNonScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0,1>::Transform(
        (unsigned int)v31,
        16 * v21 + (_DWORD)v7,
        v9 + 16 * v21,
        v10 + 16 * (v22 - 6),
        v29,
        v10 + 16LL * (unsigned int)(v22 - 6));
      v25 = *(__m128 *)&v5[2 * ((unsigned __int64)v20 >> 1)].x;
      v26 = v25;
      if ( a3 )
      {
        v26 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v25, v25, 85), v12), v13),
                _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v11));
        v27 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v25, v25, 255), v12), v13),
                  _mm_mul_ps(_mm_shuffle_ps(v25, v25, 170), v11)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v27 = _mm_shuffle_ps(v25, DirectX::g_XMZero, 238);
      }
      result = (_UNKNOWN **)(2LL * v23);
      v20 += 2;
      v21 = v24 + 4;
      *(__m128 *)(v10 + 16LL * (v23 - 4)) = _mm_shuffle_ps(v26, DirectX::g_XMZero, 228);
      *(__m128 *)(v10 + 16LL * v23) = v27;
      *(_OWORD *)(v10 + 16LL * (v23 - 3)) = v15;
      v28 = 2LL * (v23 + 1);
      v22 = v23 + 8;
      *(_OWORD *)(v10 + 8 * v28) = v15;
    }
    while ( v20 < v14 );
  }
  return result;
}
