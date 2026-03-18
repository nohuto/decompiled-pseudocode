/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$00@@$00$00VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801979D0
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 *     ?Transform@?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z @ 0x180198C44 (-Transform@-$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$00@@QEAQXPEBT__m128@@0T2@1PE.c)
 */

_UNKNOWN **__fastcall CVertexTransfer2<CScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,1,1>,1,1,CVertexXYWColorDUV2_XYZ_Tangent>::Transfer(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  _UNKNOWN **result; // rax
  struct D2D_POINT_2F *v5; // r15
  const struct D2D_POINT_2F *v7; // r14
  __int64 v9; // r12
  __int64 v10; // rsi
  __m128 v11; // xmm7
  __m128 v12; // xmm8
  __m128 v13; // xmm9
  unsigned int v14; // ebp
  __int128 v15; // xmm11
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  int v20; // edi
  int v21; // r9d
  unsigned int v22; // r9d
  unsigned int v23; // r10d
  __m128 v24; // xmm3
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-C8h]
  __int128 v29; // [rsp+30h] [rbp-B8h] BYREF
  _OWORD v30[9]; // [rsp+40h] [rbp-A8h] BYREF
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF

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
    result = (_UNKNOWN **)CalculateTBNFrame((__int64)&v29, v5, v7, (CMILMatrix *)a3, a4);
    v15 = v29;
  }
  v16 = (__m128)a2[4];
  v17 = (__m128)a2[5];
  v30[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v16), _mm_unpacklo_ps(v17, v17));
  v19 = (__m128)a2[13];
  v30[1] = v18;
  v30[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v19, (__m128)0LL));
  if ( v14 )
  {
    v20 = 0;
    v21 = 6;
    do
    {
      CScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,1,1>::Transform(
        (unsigned int)v30,
        16 * v20 + (_DWORD)v7,
        v9 + 16 * v20,
        v21,
        v28,
        v10 + 16LL * (unsigned int)(v21 - 6));
      v24 = *(__m128 *)&v5[2 * ((unsigned __int64)v23 >> 1)].x;
      v25 = v24;
      if ( a3 )
      {
        v25 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v24, v24, 85), v12), v13),
                _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v11));
        v26 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v24, v24, 255), v12), v13),
                  _mm_mul_ps(_mm_shuffle_ps(v24, v24, 170), v11)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v26 = _mm_shuffle_ps(v24, DirectX::g_XMZero, 238);
      }
      result = (_UNKNOWN **)(2LL * v22);
      v20 += 4;
      *(__m128 *)(v10 + 16LL * (v22 - 4)) = _mm_shuffle_ps(v25, DirectX::g_XMZero, 228);
      *(__m128 *)(v10 + 16LL * v22) = v26;
      *(_OWORD *)(v10 + 16LL * (v22 - 3)) = v15;
      v27 = 2LL * (v22 + 1);
      v21 = v22 + 8;
      *(_OWORD *)(v10 + 8 * v27) = v15;
    }
    while ( v23 + 2 < v14 );
  }
  return result;
}
