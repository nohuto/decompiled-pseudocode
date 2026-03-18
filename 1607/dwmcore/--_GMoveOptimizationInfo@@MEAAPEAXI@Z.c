/*
 * XREFs of ??_GMoveOptimizationInfo@@MEAAPEAXI@Z @ 0x180121670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1MoveOptimizationInfo@@MEAA@XZ @ 0x1801213B4 (--1MoveOptimizationInfo@@MEAA@XZ.c)
 */

MoveOptimizationInfo *__fastcall MoveOptimizationInfo::`scalar deleting destructor'(
        MoveOptimizationInfo *this,
        char a2)
{
  MoveOptimizationInfo::~MoveOptimizationInfo(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, MoveOptimizationInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
