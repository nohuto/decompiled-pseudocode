/*
 * XREFs of ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x18008BDC8
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019620 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180087EB4 (--0CExpressionManager@@AEAA@XZ.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A36B8 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CExpressionValueStack *__fastcall CExpressionValueStack::CExpressionValueStack(
        CExpressionValueStack *this,
        struct CExpressionManager *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 24, 0LL, 0LL);
  return this;
}
