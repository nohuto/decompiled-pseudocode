/*
 * XREFs of ?Round@CExpressionValueStack@@QEAAJXZ @ 0x18015BF58
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Round(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  const int *v2; // rdx
  struct CExpressionValue *v3; // rax
  struct CExpressionValue *v4; // rbx
  float v5; // xmm6_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  unsigned int v11; // [rsp+20h] [rbp-28h]
  float Y; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 4) )
  {
    v11 = 4781;
    v2 = 0LL;
LABEL_3:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v11);
    return v1;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, 0);
  v4 = v3;
  if ( *((_DWORD *)v3 + 16) != 18 )
  {
    v11 = 4826;
    goto LABEL_3;
  }
  v5 = *(float *)v3;
  v6 = modff(*(float *)v3, &Y);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(Y) & _xmm);
  if ( (unsigned int)(int)v7 % 2LL || (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm), v8 != 0.5) )
  {
    if ( v5 < 0.0 )
      v9 = ceilf_0(v5 - 0.5);
    else
      v9 = floorf_0(v5 + 0.5);
  }
  else if ( v5 < 0.0 )
  {
    v9 = ceilf_0(v5 - 0.5) + 1.0;
  }
  else
  {
    v9 = floorf_0(v5 + 0.5) - 1.0;
  }
  *(float *)v4 = v9;
  *((_BYTE *)v4 + 68) = 1;
  *((_DWORD *)v4 + 16) = 18;
  return v1;
}
