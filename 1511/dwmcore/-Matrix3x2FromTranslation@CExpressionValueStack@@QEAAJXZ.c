/*
 * XREFs of ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJXZ @ 0x18011C53C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromTranslation(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  CExpressionValue *v3; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-38h]
  struct D2D_MATRIX_3X2_F v7; // [rsp+38h] [rbp-30h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (CExpressionValue *)(*((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1));
    if ( *(_DWORD *)v3 == 35 )
    {
      v6 = *((_QWORD *)v3 + 1);
      *(_OWORD *)&v7.m11 = _xmm;
      *(_QWORD *)&v7.m[2][0] = v6;
      v4 = CExpressionValue::SetMatrix3x2Value(v3, &v7);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x18D0u);
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x18CAu);
    }
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x18BDu);
  }
  return v2;
}
