/*
 * XREFs of ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180136498
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18015733C (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 */

char __fastcall CExpressionValue::operator==(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v4; // al
  CExpressionValue *v5; // r9
  const struct D2DMatrix *Matrix4x4Value; // rax
  const void *v7; // rdx
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  __int128 v10; // xmm6
  CExpressionValue *v11; // rdx
  const struct D2D_MATRIX_3X2_F *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __m128i v17; // xmm1
  __int64 v18; // rax
  __m128i v20; // [rsp+20h] [rbp-50h]
  struct D2D_MATRIX_3X2_F v21; // [rsp+38h] [rbp-38h]

  v2 = 0;
  if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
    return v2;
  v4 = *(_BYTE *)(a1 + 4);
  if ( v4 != *(_BYTE *)(a2 + 4) )
    return v2;
  if ( !v4 )
    return 1;
  switch ( *(_DWORD *)a1 )
  {
    case 0x12:
      if ( *(float *)(a1 + 8) != *(float *)(a2 + 8) )
        return v2;
      return 1;
    case 0x23:
      return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
    case 0x34:
      v16 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a2 + 8);
      if ( !v16 )
        v16 = *(unsigned int *)(a1 + 16) - (unsigned __int64)*(unsigned int *)(a2 + 16);
      return v16 == 0;
    case 0x45:
      v18 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a2 + 8);
      if ( !v18 )
        v18 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a2 + 16);
      return v18 == 0;
    case 0x46:
      v17 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      v20 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v16 = v20.m128i_i64[0] - v17.m128i_i64[0];
      if ( v20.m128i_i64[0] == v17.m128i_i64[0] )
        v16 = v20.m128i_i64[1] - v17.m128i_i64[1];
      return v16 == 0;
    case 0x47:
      return (unsigned int)D2DQuaternion::operator==(a1 + 8, a2 + 8, (unsigned int)(*(_DWORD *)a1 - 71), a1) != 0;
    case 0x68:
      Matrix3x2Value = CExpressionValue::GetMatrix3x2Value((CExpressionValue *)a1);
      v10 = *(_OWORD *)&Matrix3x2Value->m11;
      v21 = *Matrix3x2Value;
      v12 = CExpressionValue::GetMatrix3x2Value(v11);
      v13 = *(_OWORD *)&v12->m11;
      v14 = *(_QWORD *)&v12->m[2][0];
      v15 = *(_QWORD *)&v12->m11;
      v16 = v10 - v15;
      if ( (_QWORD)v10 == v15 )
      {
        v16 = *(_QWORD *)&v21.m[1][0] - *((_QWORD *)&v13 + 1);
        if ( *(_QWORD *)&v21.m[1][0] == *((_QWORD *)&v13 + 1) )
          v16 = *(_QWORD *)&v21.m[2][0] - v14;
      }
      return v16 == 0;
    case 0x109:
      CExpressionValue::GetMatrix4x4Value((CExpressionValue *)a2);
      Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(v5);
      return memcmp_0(Matrix4x4Value, v7, 0x40uLL) == 0;
  }
  return v2;
}
