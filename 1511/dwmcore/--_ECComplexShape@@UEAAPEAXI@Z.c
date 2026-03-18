/*
 * XREFs of ??_ECComplexShape@@UEAAPEAXI@Z @ 0x1800B02F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CComplexShape@@UEAA@XZ @ 0x1800B0520 (--1CComplexShape@@UEAA@XZ.c)
 */

CComplexShape *__fastcall CComplexShape::`vector deleting destructor'(CComplexShape *this, char a2)
{
  CComplexShape::~CComplexShape(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CComplexShape *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
