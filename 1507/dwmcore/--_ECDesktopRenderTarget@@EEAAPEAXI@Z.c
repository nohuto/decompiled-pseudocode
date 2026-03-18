/*
 * XREFs of ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x1800EB000
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1800EAEC0 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 */

CDesktopRenderTarget *__fastcall CDesktopRenderTarget::`vector deleting destructor'(
        CDesktopRenderTarget *this,
        char a2)
{
  CDesktopRenderTarget::~CDesktopRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDesktopRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
