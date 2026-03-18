/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJXZ @ 0x18011C450
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  CExpressionValue *v3; // rcx
  __int64 v4; // xmm0_8
  int v5; // eax
  struct D2D_MATRIX_3X2_F v7; // [rsp+38h] [rbp-30h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (CExpressionValue *)(*((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1));
    if ( *(_DWORD *)v3 == 35 )
    {
      v4 = *((_QWORD *)v3 + 1);
      v7.m21 = 0.0;
      *(_QWORD *)&v7.m11 = (unsigned int)v4;
      v7.m22 = *((FLOAT *)&v4 + 1);
      v7.dx = 0.0 - (float)(*(float *)&v4 * 0.0);
      v7.dy = 0.0 - (float)(*((float *)&v4 + 1) * 0.0);
      v5 = CExpressionValue::SetMatrix3x2Value(v3, &v7);
      v2 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x193Du);
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1937u);
    }
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x192Au);
  }
  return v2;
}
