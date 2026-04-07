/*
 * XREFs of ??_ECImmersiveWindowIconic@@MEAAPEAXI@Z @ 0x18007A750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x18007A708 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 */

CImmersiveWindowIconic *__fastcall CImmersiveWindowIconic::`vector deleting destructor'(
        CImmersiveWindowIconic *this,
        char a2)
{
  CImmersiveWindowIconic::~CImmersiveWindowIconic(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImmersiveWindowIconic *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
