/*
 * XREFs of ??_ECAnalogDisplayRenderTarget@@UEAAPEAXI@Z @ 0x180127A50
 * Callers:
 *     ??_ECHwHwndRenderTarget@@WHI@EAAPEAXI@Z @ 0x18009ABB0 (--_ECHwHwndRenderTarget@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x18008AF50 (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CAnalogDisplayRenderTarget *__fastcall CAnalogDisplayRenderTarget::`vector deleting destructor'(
        CAnalogDisplayRenderTarget *this,
        char a2)
{
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogDisplayRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
