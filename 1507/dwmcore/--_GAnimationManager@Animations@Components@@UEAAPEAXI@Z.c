/*
 * XREFs of ??_GAnimationManager@Animations@Components@@UEAAPEAXI@Z @ 0x180155C90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180155FF8 (-RemoveAll@-$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXX.c)
 */

Components::Animations::AnimationManager *__fastcall Components::Animations::AnimationManager::`scalar deleting destructor'(
        Components::Animations::AnimationManager *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::AnimationManager::`vftable';
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((char *)this + 168);
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((char *)this + 88);
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((char *)this + 8);
  *(_QWORD *)this = &Components::Animations::Object::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::AnimationManager *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
