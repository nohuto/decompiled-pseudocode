/*
 * XREFs of ?UnregisterSources@CKeyframeAnimation@@MEAAXXZ @ 0x180086920
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800872CC (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterSourcesForAnimation@CExpression@@QEAAXPEAVCBaseExpression@@@Z @ 0x18008B520 (-UnregisterSourcesForAnimation@CExpression@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

void __fastcall CKeyframeAnimation::UnregisterSources(CKeyframeAnimation *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); i = (unsigned int)(i + 1) )
    CExpression::UnregisterSourcesForAnimation(*(CExpression **)(*((_QWORD *)this + 42) + 8 * i), this);
  *((_BYTE *)this + 276) = 0;
}
