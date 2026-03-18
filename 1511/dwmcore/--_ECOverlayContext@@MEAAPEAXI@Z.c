/*
 * XREFs of ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x18007E950
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x18007F2B8 (--1COverlayContext@@MEAA@XZ.c)
 */

COverlayContext *__fastcall COverlayContext::`vector deleting destructor'(COverlayContext *this, char a2)
{
  COverlayContext::~COverlayContext(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, COverlayContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
