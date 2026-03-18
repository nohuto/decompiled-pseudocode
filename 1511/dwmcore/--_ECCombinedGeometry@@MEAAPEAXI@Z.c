/*
 * XREFs of ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x18001CE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18001D0A8 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::`vector deleting destructor'(CCombinedGeometry *this, char a2)
{
  CCombinedGeometry::~CCombinedGeometry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCombinedGeometry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
