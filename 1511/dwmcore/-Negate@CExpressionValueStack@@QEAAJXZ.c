/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x18011D2C0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x1800BEA28 (--GD2DMatrix@@QEBA-AU0@XZ.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  const struct D2DMatrix *Matrix4x4Value; // rax
  D2DMatrix *v5; // rax
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  __m128 v7; // xmm3
  CExpressionValue *v8; // rcx
  __int64 i; // rcx
  __m128 v10; // xmm6
  __m128 v11; // xmm7
  FLOAT m21; // eax
  __m128 v13; // xmm7
  __m128 v14; // xmm6
  int v15; // xmm6_4
  unsigned int v17; // [rsp+28h] [rbp-59h]
  __int64 v18; // [rsp+48h] [rbp-39h]
  struct D2D_MATRIX_3X2_F v19; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v20[64]; // [rsp+68h] [rbp-19h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v17 = 1183;
    goto LABEL_10;
  }
  v3 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1);
  switch ( *(_DWORD *)v3 )
  {
    case 0x12:
      v15 = *(_DWORD *)(v3 + 8);
      CExpressionValue::SetDataType(v3);
      *(_DWORD *)(v3 + 8) = v15 ^ _xmm;
      goto LABEL_19;
    case 0x23:
      v13 = _mm_xor_ps((__m128)*(unsigned int *)(v3 + 8), (__m128)_xmm);
      v14 = _mm_xor_ps((__m128)*(unsigned int *)(v3 + 12), (__m128)_xmm);
      CExpressionValue::SetDataType(v3);
      *(_QWORD *)(v3 + 8) = _mm_unpacklo_ps(v13, v14).m128_u64[0];
      goto LABEL_19;
    case 0x34:
      v10 = (__m128)*(unsigned int *)(v3 + 12);
      v11 = _mm_xor_ps((__m128)*(unsigned int *)(v3 + 8), (__m128)(unsigned int)_xmm);
      LODWORD(v19.m21) = *(_DWORD *)(v3 + 16) ^ _xmm;
      CExpressionValue::SetDataType(v3);
      m21 = v19.m21;
      *(_QWORD *)(v3 + 8) = _mm_unpacklo_ps(v11, _mm_xor_ps(v10, (__m128)(unsigned int)_xmm)).m128_u64[0];
      *(FLOAT *)(v3 + 16) = m21;
LABEL_19:
      *(_BYTE *)(v3 + 4) = 1;
      return v2;
    case 0x45:
      for ( i = 0LL; i < 4; ++i )
        *((_DWORD *)&v19.m11 + i) = *(_DWORD *)((char *)&v19.m11 + 4 * i + v3 + 8 - (_QWORD)&v19) ^ _xmm;
      CExpressionValue::SetDataType(v3);
      *(_OWORD *)(v3 + 8) = *(_OWORD *)&v19.m11;
      goto LABEL_19;
    case 0x68:
      Matrix3x2Value = CExpressionValue::GetMatrix3x2Value((CExpressionValue *)v3);
      v7 = *(__m128 *)&Matrix3x2Value->m11;
      v18 = *(_QWORD *)&Matrix3x2Value->m[2][0];
      LODWORD(v19.m11) = *(_OWORD *)&Matrix3x2Value->m11 ^ _xmm;
      LODWORD(v19.m21) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0] ^ _xmm;
      LODWORD(v19.m12) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0] ^ _xmm;
      LODWORD(v19.dx) = v18 ^ _xmm;
      LODWORD(v19.m22) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0] ^ _xmm;
      LODWORD(v19.dy) = HIDWORD(v18) ^ _xmm;
      CExpressionValue::SetMatrix3x2Value(v8, &v19);
      return v2;
    case 0x109:
      Matrix4x4Value = CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v3);
      v5 = D2DMatrix::operator-(Matrix4x4Value, (D2DMatrix *)v20);
      CExpressionValue::SetMatrix4x4Value((CExpressionValue *)v3, v5);
      return v2;
  }
  v17 = 1245;
LABEL_10:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v17);
  return v2;
}
