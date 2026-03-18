/*
 * XREFs of ??0CScrollPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18015F99C
 * Callers:
 *     ?EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ @ 0x18014A474 (-EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18015D508 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 */

CScrollPositionAnimation *__fastcall CScrollPositionAnimation::CScrollPositionAnimation(
        CScrollPositionAnimation *this,
        struct CComposition *a2)
{
  CScrollAnimation::CScrollAnimation(this, a2);
  *(_QWORD *)this = &CScrollPositionAnimation::`vftable';
  return this;
}
