/*
 * XREFs of ??_GDwm__Rendering__AsyncAnimationCallback@Animations@Components@@UEAAPEAXI@Z @ 0x180160940
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
