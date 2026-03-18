/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJXZ @ 0x18015B03C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v2; // rax
  unsigned int v4; // [rsp+20h] [rbp-60h]
  __int128 v5; // [rsp+50h] [rbp-30h]
  __int128 v6; // [rsp+60h] [rbp-20h]
  __int128 v7; // [rsp+70h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v2 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v2 + 16) == 52 )
    {
      DWORD2(v7) = 0;
      *(_QWORD *)&v7 = 0LL;
      *(_QWORD *)&v6 = 0LL;
      HIDWORD(v5) = 0;
      LODWORD(v5) = 0;
      *(_QWORD *)((char *)&v5 + 4) = (unsigned int)HIDWORD(*(_QWORD *)v2);
      *((float *)&v7 + 3) = FLOAT_1_0;
      *((_QWORD *)&v6 + 1) = *((unsigned int *)v2 + 2);
      *(_OWORD *)v2 = (unsigned int)*(_QWORD *)v2;
      *((_DWORD *)v2 + 16) = 265;
      *((_OWORD *)v2 + 1) = v5;
      *((_BYTE *)v2 + 68) = 1;
      *((_OWORD *)v2 + 2) = v6;
      *((_OWORD *)v2 + 3) = v7;
      return v1;
    }
    v4 = 6163;
  }
  else
  {
    v4 = 6150;
  }
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v4);
  return v1;
}
