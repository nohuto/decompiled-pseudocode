/*
 * XREFs of ??_EObject@Animations@Components@@UEAAPEAXI@Z @ 0x1801559D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

Components::Animations::Object *__fastcall Components::Animations::Object::`vector deleting destructor'(
        Components::Animations::Object *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::Object::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::Object *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
