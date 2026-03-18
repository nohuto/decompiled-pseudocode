/*
 * XREFs of ??1CExpressionValueStack@@UEAA@XZ @ 0x18010064C
 * Callers:
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801005CC (--1CExpressionManager@@UEAA@XZ.c)
 *     ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x1801006D0 (--_ECExpressionValueStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValueStack::~CExpressionValueStack(void **this)
{
  *this = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
}
