/*
 * XREFs of ?AnInitializeEngine@@YAXXZ @ 0x1800AD104
 * Callers:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180087A80 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18015D508 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?PreInitClass@Time@Animations@Components@@SAJXZ @ 0x1800AD4A8 (-PreInitClass@Time@Animations@Components@@SAJXZ.c)
 */

void AnInitializeEngine(void)
{
  if ( !byte_1801F026C )
  {
    byte_1801F026C = 1;
    Components::Animations::Time::PreInitClass();
    Components::Animations::AnimationManager::InitClass();
  }
}
