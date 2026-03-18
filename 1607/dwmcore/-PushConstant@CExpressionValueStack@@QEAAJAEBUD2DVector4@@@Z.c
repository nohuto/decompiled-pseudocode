/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x18015BBB4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?SetVector4Value@CKeyframeAnimation@@UEAAJMMMM@Z @ 0x1801489B0 (-SetVector4Value@CKeyframeAnimation@@UEAAJMMMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x18008C6F4 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2DVector4 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // xmm0

  v4 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x227u);
  }
  else
  {
    ++*((_DWORD *)this + 4);
    v6 = *((_QWORD *)this + 3);
    v7 = 9LL * (unsigned int)(*((_DWORD *)this + 4) - 1);
    *(_DWORD *)(v6 + 8 * v7 + 64) = 69;
    v8 = *(_OWORD *)a2;
    *(_BYTE *)(v6 + 8 * v7 + 68) = 1;
    *(_OWORD *)(v6 + 8 * v7) = v8;
  }
  return v5;
}
