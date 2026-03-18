/*
 * XREFs of ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x18001A760
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  CExpressionValueStack *v2; // r9
  struct CExpressionValue *v3; // rdi
  CExpressionValueStack *v4; // r9
  struct CExpressionValue *v5; // rax
  const int *v6; // rdx
  __int64 v7; // r9
  unsigned int *v8; // r10
  unsigned int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-28h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v11 = 5427;
    v6 = 0LL;
    goto LABEL_9;
  }
  CExpressionValueStack::PeekStackValue(this, -2);
  v3 = CExpressionValueStack::PeekStackValue(v2, -1);
  v5 = CExpressionValueStack::PeekStackValue(v4, 0);
  if ( v8[16] != 18 || *((_DWORD *)v3 + 16) != 18 || *((_DWORD *)v5 + 16) != 18 )
  {
    v11 = 5444;
LABEL_9:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v6, 0, -2147467259, v11);
    return v1;
  }
  v9 = *(_DWORD *)v5;
  *(_QWORD *)v8 = _mm_unpacklo_ps((__m128)*v8, (__m128)*(unsigned int *)v3).m128_u64[0];
  v8[2] = v9;
  v8[16] = 52;
  *((_BYTE *)v8 + 68) = 1;
  *(_DWORD *)(v7 + 16) -= 2;
  return v1;
}
