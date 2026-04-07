/*
 * XREFs of ??_ECTransitionWindowSnapshot@@MEAAPEAXI@Z @ 0x18003D3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18003D86C (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CTransitionWindowSnapshot *__fastcall CTransitionWindowSnapshot::`vector deleting destructor'(
        CTransitionWindowSnapshot *this,
        char a2)
{
  CTransitionWindowSnapshot::~CTransitionWindowSnapshot(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTransitionWindowSnapshot *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
