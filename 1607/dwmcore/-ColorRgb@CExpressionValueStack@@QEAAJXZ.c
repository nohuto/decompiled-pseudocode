/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x180159708
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorRgb(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  struct CExpressionValue *v3; // rsi
  CExpressionValueStack *v4; // r9
  CExpressionValueStack *v5; // r9
  struct CExpressionValue *v6; // rdi
  CExpressionValueStack *v7; // r9
  struct CExpressionValue *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  float v11; // xmm0_4
  unsigned int v13; // [rsp+20h] [rbp-28h]
  float v14[6]; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 4u )
  {
    v13 = 5561;
    v2 = 0LL;
LABEL_9:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v13);
    return v1;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, -3);
  CExpressionValueStack::PeekStackValue(v4, -2);
  v6 = CExpressionValueStack::PeekStackValue(v5, -1);
  v8 = CExpressionValueStack::PeekStackValue(v7, 0);
  if ( *((_DWORD *)v3 + 16) != 18
    || *(_DWORD *)(v10 + 64) != 18
    || *((_DWORD *)v6 + 16) != 18
    || *((_DWORD *)v8 + 16) != 18 )
  {
    v13 = 5580;
    goto LABEL_9;
  }
  v14[0] = fmaxf(fminf(*(float *)v10, 255.0), 0.0) / 255.0;
  v11 = fminf(*(float *)v6, 255.0);
  v14[2] = fmaxf(fminf(*(float *)v8, 255.0), 0.0) / 255.0;
  *((_DWORD *)v3 + 16) = 70;
  *((_BYTE *)v3 + 68) = 1;
  v14[1] = fmaxf(v11, 0.0) / 255.0;
  v14[3] = fmaxf(fminf(*(float *)v3, 255.0), 0.0) / 255.0;
  *(_OWORD *)v3 = *(_OWORD *)v14;
  *(_DWORD *)(v9 + 16) -= 3;
  return v1;
}
