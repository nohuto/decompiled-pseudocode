/*
 * XREFs of ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x18015B4BC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     fmodf_0 @ 0x1800BF626 (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Modulus(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v3; // rdx
  struct CExpressionValue *v4; // rsi
  struct CExpressionValue *v5; // rax
  int v6; // ecx
  float v7; // xmm1_4
  float v8; // xmm0_4
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    v4 = CExpressionValueStack::PeekStackValue(this, -1);
    v5 = CExpressionValueStack::PeekStackValue(this, 0);
    v6 = *((_DWORD *)v4 + 16);
    if ( v6 == *((_DWORD *)v5 + 16) )
    {
      if ( v6 == 18 )
      {
        v7 = *(float *)v5;
        if ( *(float *)v5 > 0.0 )
        {
          v8 = *(float *)v4;
          *((_DWORD *)v4 + 16) = 18;
          *(float *)v4 = fmodf_0(v8, v7);
          *((_BYTE *)v4 + 68) = 1;
          --*((_DWORD *)this + 4);
          return v1;
        }
        v10 = 1526;
      }
      else
      {
        v10 = 1542;
      }
    }
    else
    {
      v10 = 1511;
    }
  }
  else
  {
    v10 = 1487;
    v3 = 0LL;
  }
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v10);
  return v1;
}
