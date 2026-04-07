/*
 * XREFs of ??_ECDrawMesh2DInstruction@@EEAAPEAXI@Z @ 0x1800773C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??1CDrawMesh2DInstruction@@EEAA@XZ @ 0x180077370 (--1CDrawMesh2DInstruction@@EEAA@XZ.c)
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
