/*
 * XREFs of ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x180113320
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CGeometry2D@@MEAA@XZ @ 0x180112D18 (--1CGeometry2D@@MEAA@XZ.c)
 */

CGeometry2D *__fastcall CGeometry2D::`scalar deleting destructor'(CGeometry2D *this, char a2)
{
  CGeometry2D::~CGeometry2D(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGeometry2D *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
