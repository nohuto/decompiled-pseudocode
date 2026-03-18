/*
 * XREFs of ??1CExpressionValueStack@@UEAA@XZ @ 0x1801194D4
 * Callers:
 *     ??1CExpressionManager@@UEAA@XZ @ 0x180119450 (--1CExpressionManager@@UEAA@XZ.c)
 *     ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x180119550 (--_ECExpressionValueStack@@UEAAPEAXI@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18012C220 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValueStack::~CExpressionValueStack(void **this)
{
  *this = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
}
