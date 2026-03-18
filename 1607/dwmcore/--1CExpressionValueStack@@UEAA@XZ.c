/*
 * XREFs of ??1CExpressionValueStack@@UEAA@XZ @ 0x180158948
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019620 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801376EC (--1CExpressionManager@@UEAA@XZ.c)
 *     ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x180158970 (--_ECExpressionValueStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValueStack::~CExpressionValueStack(CExpressionValueStack *this)
{
  *(_QWORD *)this = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 24);
}
