/*
 * XREFs of ??_EInput@Animations@Components@@MEAAPEAXI@Z @ 0x180165440
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

Components::Animations::Input *__fastcall Components::Animations::Input::`vector deleting destructor'(
        Components::Animations::Input *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::Input::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::Input *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
