/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x180100FE4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180121494 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  int v3; // esi
  CExpressionValue **v4; // r14
  struct CExpressionValue *v5; // rax
  __int64 i; // rdx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-68h]
  struct D2D_MATRIX_3X2_F v11; // [rsp+30h] [rbp-58h] BYREF
  CExpressionValue *v12[6]; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 6u )
  {
    v3 = 0;
    v4 = v12;
    do
    {
      v5 = CExpressionValueStack::PeekStackValue(this, v3 - 5);
      *v4 = v5;
      if ( *(_DWORD *)v5 != 17 )
      {
        v10 = 2429;
        goto LABEL_12;
      }
      ++v3;
      ++v4;
    }
    while ( v3 < 6 );
    for ( i = 0LL; i < 6; ++i )
      *((_DWORD *)&v11.m11 + i) = *((_DWORD *)v12[i] + 2);
    CExpressionValue::SetMatrix3x2Value(v12[0], &v11);
    v7 = *((_DWORD *)this + 4);
    v8 = 5LL;
    do
    {
      --v7;
      --v8;
    }
    while ( v8 );
    *((_DWORD *)this + 4) = v7;
  }
  else
  {
    v10 = 2414;
LABEL_12:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v10);
  }
  return v1;
}
