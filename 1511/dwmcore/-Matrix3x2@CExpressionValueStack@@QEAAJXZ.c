/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x18011C36C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // ebx
  __int64 v4; // r10
  CExpressionValue **v5; // r8
  int i; // edx
  CExpressionValue *v7; // rcx
  bool v8; // zf
  __int64 j; // rdx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-68h]
  struct D2D_MATRIX_3X2_F v14; // [rsp+30h] [rbp-58h] BYREF
  CExpressionValue *v15[6]; // [rsp+48h] [rbp-40h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 6 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = v15;
    for ( i = 0; i < 6; ++i )
    {
      v7 = (CExpressionValue *)(v4 + 24LL * (i + v1 - 6));
      v8 = *(_DWORD *)v7 == 18;
      *v5 = v7;
      if ( !v8 )
      {
        v13 = 6215;
        goto LABEL_12;
      }
      ++v5;
    }
    for ( j = 0LL; j < 6; ++j )
      *((_DWORD *)&v14.m11 + j) = *((_DWORD *)v15[j] + 2);
    CExpressionValue::SetMatrix3x2Value(v15[0], &v14);
    v10 = *((_DWORD *)this + 4);
    v11 = 5LL;
    do
    {
      --v10;
      --v11;
    }
    while ( v11 );
    *((_DWORD *)this + 4) = v10;
  }
  else
  {
    v13 = 6200;
LABEL_12:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v13);
  }
  return v2;
}
