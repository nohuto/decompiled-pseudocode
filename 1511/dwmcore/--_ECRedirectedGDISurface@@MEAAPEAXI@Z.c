/*
 * XREFs of ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x1800A55A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1800A56BC (--1CRedirectedGDISurface@@MEAA@XZ.c)
 */

CRedirectedGDISurface *__fastcall CRedirectedGDISurface::`vector deleting destructor'(
        CRedirectedGDISurface *this,
        char a2)
{
  CRedirectedGDISurface::~CRedirectedGDISurface(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRedirectedGDISurface *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
