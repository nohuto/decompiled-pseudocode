/*
 * XREFs of ??_GAnimationManager@Animations@Components@@UEAAPEAXI@Z @ 0x180163960
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveAll@?$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180160BD0 (-RemoveAll@-$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXX.c)
 */

Components::Animations::AnimationManager *__fastcall Components::Animations::AnimationManager::`scalar deleting destructor'(
        Components::Animations::AnimationManager *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::AnimationManager::`vftable';
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((__int64)this + 168);
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((__int64)this + 88);
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((__int64)this + 8);
  *(_QWORD *)this = &Components::Animations::Object::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::AnimationManager *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
