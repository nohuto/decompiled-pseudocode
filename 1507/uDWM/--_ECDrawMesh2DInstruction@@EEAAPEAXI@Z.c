/*
 * XREFs of ??_ECDrawMesh2DInstruction@@EEAAPEAXI@Z @ 0x18006D3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CDrawMesh2DInstruction@@EEAA@XZ @ 0x18006D3A0 (--1CDrawMesh2DInstruction@@EEAA@XZ.c)
 */

CDrawMesh2DInstruction *__fastcall CDrawMesh2DInstruction::`vector deleting destructor'(
        CDrawMesh2DInstruction *this,
        char a2)
{
  CDrawMesh2DInstruction::~CDrawMesh2DInstruction(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDrawMesh2DInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
