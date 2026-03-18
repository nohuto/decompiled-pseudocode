/*
 * XREFs of ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180120FD4
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180099BAE (memcmp_0.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x18012135C (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x1801213A8 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 */

char __fastcall CExpressionValue::operator==(CExpressionValue *this, CExpressionValue *a2)
{
  int v2; // eax
  char v3; // bl
  char v5; // cl
  CExpressionValue *v6; // r8
  const struct D2DMatrix *Matrix4x4Value; // rax
  const void *v8; // rdx
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  __int128 v11; // xmm3
  CExpressionValue *v12; // rdx
  const struct D2D_MATRIX_3X2_F *v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  struct D2D_MATRIX_3X2_F v20; // [rsp+20h] [rbp-48h]

  v2 = *(_DWORD *)this;
  v3 = 0;
  if ( *(_DWORD *)this != *(_DWORD *)a2 )
    return v3;
  v5 = *((_BYTE *)this + 4);
  if ( v5 != *((_BYTE *)a2 + 4) )
    return v3;
  if ( !v5 )
    return 1;
  switch ( v2 )
  {
    case 17:
      if ( *((float *)this + 2) != *((float *)a2 + 2) )
        return v3;
      return 1;
    case 34:
      return *((_QWORD *)this + 1) == *((_QWORD *)a2 + 1);
    case 51:
      v17 = *((_QWORD *)this + 1) - *((_QWORD *)a2 + 1);
      if ( !v17 )
        v17 = *((unsigned int *)this + 4) - (unsigned __int64)*((unsigned int *)a2 + 4);
      return v17 == 0;
    case 68:
      v18 = *((_QWORD *)this + 1) - *((_QWORD *)a2 + 1);
      if ( !v18 )
        v18 = *((_QWORD *)this + 2) - *((_QWORD *)a2 + 2);
      return v18 == 0;
    case 101:
      Matrix3x2Value = CExpressionValue::GetMatrix3x2Value(this);
      v11 = *(_OWORD *)&Matrix3x2Value->m11;
      v20 = *Matrix3x2Value;
      v13 = CExpressionValue::GetMatrix3x2Value(v12);
      v14 = *(_OWORD *)&v13->m11;
      v15 = *(_QWORD *)&v13->m[2][0];
      v16 = *(_QWORD *)&v13->m11;
      v17 = v11 - v16;
      if ( (_QWORD)v11 == v16 )
      {
        v17 = *(_QWORD *)&v20.m[1][0] - *((_QWORD *)&v14 + 1);
        if ( *(_QWORD *)&v20.m[1][0] == *((_QWORD *)&v14 + 1) )
          v17 = *(_QWORD *)&v20.m[2][0] - v15;
      }
      return v17 == 0;
    case 262:
      CExpressionValue::GetMatrix4x4Value(a2);
      Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(v6);
      return memcmp_0(Matrix4x4Value, v8, 0x40uLL) == 0;
  }
  return v3;
}
