/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x18011C604
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
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
  unsigned int v13; // [rsp+20h] [rbp-E8h]
  _DWORD v14[16]; // [rsp+30h] [rbp-D8h] BYREF
  CExpressionValue *v15[16]; // [rsp+70h] [rbp-98h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 0x10 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = v15;
    for ( i = 0; i < 16; ++i )
    {
      v7 = (CExpressionValue *)(v4 + 24LL * (i + v1 - 16));
      v8 = *(_DWORD *)v7 == 18;
      *v5 = v7;
      if ( !v8 )
      {
        v13 = 6281;
        goto LABEL_12;
      }
      ++v5;
    }
    for ( j = 0LL; j < 16; ++j )
      v14[j] = *((_DWORD *)v15[j] + 2);
    CExpressionValue::SetMatrix4x4Value(v15[0], (const struct D2DMatrix *)v14);
    v10 = *((_DWORD *)this + 4);
    v11 = 15LL;
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
    v13 = 6266;
LABEL_12:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v13);
  }
  return v2;
}
