/*
 * XREFs of ??_GCDisplay@@EEAAPEAXI@Z @ 0x180070720
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDisplay@@EEAA@XZ @ 0x180070CEC (--1CDisplay@@EEAA@XZ.c)
 */

CDisplay *__fastcall CDisplay::`scalar deleting destructor'(CDisplay *this, char a2)
{
  CDisplay::~CDisplay(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDisplay *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
