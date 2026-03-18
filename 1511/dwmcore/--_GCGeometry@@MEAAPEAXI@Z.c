/*
 * XREFs of ??_GCGeometry@@MEAAPEAXI@Z @ 0x18010EE90
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x180064360 (--1CGeometry@@MEAA@XZ.c)
 */

CGeometry *__fastcall CGeometry::`scalar deleting destructor'(CGeometry *this, char a2)
{
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGeometry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
