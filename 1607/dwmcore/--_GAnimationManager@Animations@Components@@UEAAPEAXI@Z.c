/*
 * XREFs of ??_GAnimationManager@Animations@Components@@UEAAPEAXI@Z @ 0x180194750
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x18001D854 (-RemoveAll@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

Components::Animations::AnimationManager *__fastcall Components::Animations::AnimationManager::`scalar deleting destructor'(
        Components::Animations::AnimationManager *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::AnimationManager::`vftable';
  Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAll((__int64)this + 88);
  Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAll((__int64)this + 8);
  *(_QWORD *)this = &Components::Animations::Object::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::AnimationManager *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
