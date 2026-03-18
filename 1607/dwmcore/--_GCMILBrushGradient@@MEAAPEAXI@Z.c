/*
 * XREFs of ??_GCMILBrushGradient@@MEAAPEAXI@Z @ 0x18018C490
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x180017FF8 (--1CMILBrushGradient@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CMILBrushGradient *__fastcall CMILBrushGradient::`scalar deleting destructor'(CMILBrushGradient *this, char a2)
{
  CMILBrushGradient::~CMILBrushGradient(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILBrushGradient *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
