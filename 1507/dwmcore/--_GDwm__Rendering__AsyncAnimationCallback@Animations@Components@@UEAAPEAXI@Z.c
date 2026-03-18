/*
 * XREFs of ??_GDwm__Rendering__AsyncAnimationCallback@Animations@Components@@UEAAPEAXI@Z @ 0x180153980
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

Components::Animations::Dwm__Rendering__AsyncAnimationCallback *__fastcall Components::Animations::Dwm__Rendering__AsyncAnimationCallback::`scalar deleting destructor'(
        Components::Animations::Dwm__Rendering__AsyncAnimationCallback *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::Dwm__Rendering__AsyncAnimationCallback::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::Dwm__Rendering__AsyncAnimationCallback *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
