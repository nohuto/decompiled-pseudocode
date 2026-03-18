/*
 * XREFs of ??_ECAnalogExclusiveView@@EEAAPEAXI@Z @ 0x18013B250
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CAnalogExclusiveView@@EEAA@XZ @ 0x18013B22C (--1CAnalogExclusiveView@@EEAA@XZ.c)
 */

CAnalogExclusiveView *__fastcall CAnalogExclusiveView::`vector deleting destructor'(
        CAnalogExclusiveView *this,
        char a2)
{
  CAnalogExclusiveView::~CAnalogExclusiveView(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogExclusiveView *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
