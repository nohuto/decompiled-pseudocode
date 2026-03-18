/*
 * XREFs of ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x180113400
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18013546C (--1CGeometryGroup@@MEAA@XZ.c)
 */

CGeometryGroup *__fastcall CGeometryGroup::`vector deleting destructor'(CGeometryGroup *this, char a2)
{
  CGeometryGroup::~CGeometryGroup(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGeometryGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
