/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1801010D0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  int v3; // esi
  CExpressionValue **v4; // r14
  struct CExpressionValue *v5; // rax
  __int64 i; // rdx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-E8h]
  _DWORD v11[16]; // [rsp+30h] [rbp-D8h] BYREF
  CExpressionValue *v12[16]; // [rsp+70h] [rbp-98h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 0x10u )
  {
    v3 = 0;
    v4 = v12;
    do
    {
      v5 = CExpressionValueStack::PeekStackValue(this, v3 - 15);
      *v4 = v5;
      if ( *(_DWORD *)v5 != 17 )
      {
        v10 = 2495;
        goto LABEL_12;
      }
      ++v3;
      ++v4;
    }
    while ( v3 < 16 );
    for ( i = 0LL; i < 16; ++i )
      v11[i] = *((_DWORD *)v12[i] + 2);
    CExpressionValue::SetMatrix4x4Value(v12[0], (const struct D2DMatrix *)v11);
    v7 = *((_DWORD *)this + 4);
    v8 = 15LL;
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
    v10 = 2480;
LABEL_12:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v10);
  }
  return v1;
}
