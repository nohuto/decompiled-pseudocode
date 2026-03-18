/*
 * XREFs of ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x180124850
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CVisualGroup@@EEAA@XZ @ 0x180124820 (--1CVisualGroup@@EEAA@XZ.c)
 */

CVisualGroup *__fastcall CVisualGroup::`scalar deleting destructor'(CVisualGroup *this, char a2)
{
  CVisualGroup::~CVisualGroup(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CVisualGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
