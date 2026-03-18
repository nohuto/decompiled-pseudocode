/*
 * XREFs of ??_ECAnalogCompositorTarget@@EEAAPEAXI@Z @ 0x18013CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CAnalogCompositorTarget@@EEAA@XZ @ 0x18013CD6C (--1CAnalogCompositorTarget@@EEAA@XZ.c)
 */

CAnalogCompositorTarget *__fastcall CAnalogCompositorTarget::`vector deleting destructor'(
        CAnalogCompositorTarget *this,
        char a2)
{
  CAnalogCompositorTarget::~CAnalogCompositorTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogCompositorTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
