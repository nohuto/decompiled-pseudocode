/*
 * XREFs of ??_EAnimation@Animations@Components@@UEAAPEAXI@Z @ 0x1801608E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1Animation@Animations@Components@@UEAA@XZ @ 0x180160C94 (--1Animation@Animations@Components@@UEAA@XZ.c)
 */

Components::Animations::Animation *__fastcall Components::Animations::Animation::`vector deleting destructor'(
        Components::Animations::Animation *this,
        char a2)
{
  Components::Animations::Animation::~Animation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::Animation *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
