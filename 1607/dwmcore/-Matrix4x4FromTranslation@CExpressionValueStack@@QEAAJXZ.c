/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJXZ @ 0x18001A8FC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v2; // rax
  unsigned int v4; // [rsp+20h] [rbp-60h]
  __int128 v5; // [rsp+60h] [rbp-20h]
  __int128 v6; // [rsp+70h] [rbp-10h]

  v1 = 0;
  if ( !*((_DWORD *)this + 4) )
  {
    v4 = 6042;
LABEL_7:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v4);
    return v1;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v2 + 16) != 52 )
  {
    v4 = 6055;
    goto LABEL_7;
  }
  *(_QWORD *)&v5 = 0LL;
  *(_QWORD *)&v6 = *(_QWORD *)v2;
  DWORD2(v6) = *((_DWORD *)v2 + 2);
  *(_OWORD *)v2 = 0x3F800000uLL;
  *((_OWORD *)v2 + 1) = 0x3F80000000000000uLL;
  *((_QWORD *)&v5 + 1) = 1065353216LL;
  HIDWORD(v6) = 1065353216;
  *((_OWORD *)v2 + 2) = v5;
  *((_DWORD *)v2 + 16) = 265;
  *((_OWORD *)v2 + 3) = v6;
  *((_BYTE *)v2 + 68) = 1;
  return v1;
}
