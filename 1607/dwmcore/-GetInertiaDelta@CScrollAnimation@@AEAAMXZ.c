/*
 * XREFs of ?GetInertiaDelta@CScrollAnimation@@AEAAMXZ @ 0x18015DEE8
 * Callers:
 *     ?CalculateDeltaForState@CScrollAnimation@@QEAAMW4ScrollState@@@Z @ 0x18015D8E4 (-CalculateDeltaForState@CScrollAnimation@@QEAAMW4ScrollState@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInertiaValue@CScrollAnimation@@AEAAMXZ @ 0x18015DF38 (-GetInertiaValue@CScrollAnimation@@AEAAMXZ.c)
 */

float __fastcall CScrollAnimation::GetInertiaDelta(CScrollAnimation *this)
{
  float result; // xmm0_4

  result = CScrollAnimation::GetInertiaValue(this);
  (*(void (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 208LL))(this);
  *((float *)this + 125) = result;
  return result;
}
