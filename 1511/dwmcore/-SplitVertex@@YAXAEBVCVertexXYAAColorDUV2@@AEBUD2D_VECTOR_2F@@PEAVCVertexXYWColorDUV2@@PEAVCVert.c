/*
 * XREFs of ?SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVertexAAFixupData@@@Z @ 0x18001580C
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180034450 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 * Callees:
 *     ?TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X2_F@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180015964 (-TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall SplitVertex(
        const struct CVertexXYAAColorDUV2 *a1,
        const struct D2D_VECTOR_2F *a2,
        struct CVertexXYWColorDUV2 *a3,
        struct CVertexAAFixupData *a4)
{
  float x; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float y; // xmm0_4
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  const struct CVertexAAFixupData *v13; // rdx
  struct D2D_POINT_2F v14; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_MATRIX_3X2_F v15; // [rsp+38h] [rbp-28h] BYREF

  x = a2->x;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2->x - 1.0)) & _xmm);
  if ( v8 >= 0.0000011920929
    || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2->y - 1.0)) & _xmm), v9 >= 0.0000011920929) )
  {
    y = a2->y;
    v11 = 0LL;
    v12 = 0LL;
    v15.m21 = 0.0;
    v13 = 0LL;
    v15.m22 = y;
    *(_QWORD *)&v15.m11 = LODWORD(x);
    v11.m128_f32[0] = 0.0 - (float)(y * 0.0);
    v12.m128_f32[0] = 0.0 - (float)(x * 0.0);
    *(_QWORD *)&v15.m[2][0] = _mm_unpacklo_ps(v12, v11).m128_u64[0];
    if ( a1 )
      v13 = (const struct CVertexXYAAColorDUV2 *)((char *)a1 + 32);
    TransformAndFillPosXYUV2(a1, v13, &v15, a3, &v14);
    *(struct D2D_POINT_2F *)a4 = v14;
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)a1;
    *((_QWORD *)a3 + 2) = *((_QWORD *)a1 + 2);
    *((_QWORD *)a3 + 3) = *((_QWORD *)a1 + 3);
    *(_QWORD *)a4 = *((_QWORD *)a1 + 4);
  }
  *((_DWORD *)a3 + 2) = *((_DWORD *)a1 + 2);
  *((_DWORD *)a3 + 3) = *((_DWORD *)a1 + 3);
  *((_DWORD *)a4 + 2) = *((_DWORD *)a1 + 10);
  *((_DWORD *)a4 + 3) = *((_DWORD *)a1 + 11);
  *((_QWORD *)a4 + 2) = *((_QWORD *)a1 + 6);
  *((_QWORD *)a4 + 3) = *((_QWORD *)a1 + 7);
}
