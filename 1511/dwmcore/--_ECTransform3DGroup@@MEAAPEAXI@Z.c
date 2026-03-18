/*
 * XREFs of ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x1800685E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180068848 (--1CTransform3DGroup@@MEAA@XZ.c)
 */

CTransform3DGroup *__fastcall CTransform3DGroup::`vector deleting destructor'(CTransform3DGroup *this, char a2)
{
  CTransform3DGroup::~CTransform3DGroup(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTransform3DGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
