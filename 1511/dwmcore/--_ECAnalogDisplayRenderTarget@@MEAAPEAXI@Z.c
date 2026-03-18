/*
 * XREFs of ??_ECAnalogDisplayRenderTarget@@MEAAPEAXI@Z @ 0x18013DA00
 * Callers:
 *     ??_ECAnalogDisplayRenderTarget@@OHI@EAAPEAXI@Z @ 0x1800BD810 (--_ECAnalogDisplayRenderTarget@@OHI@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CAnalogDisplayRenderTarget@@MEAA@XZ @ 0x18013D918 (--1CAnalogDisplayRenderTarget@@MEAA@XZ.c)
 */

CAnalogDisplayRenderTarget *__fastcall CAnalogDisplayRenderTarget::`vector deleting destructor'(
        CAnalogDisplayRenderTarget *this,
        char a2)
{
  CAnalogDisplayRenderTarget::~CAnalogDisplayRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogDisplayRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
