/*
 * XREFs of ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x180146D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180088DA0 (--1CBaseExpression@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBaseExpression *__fastcall CBaseExpression::`vector deleting destructor'(CBaseExpression *this, char a2)
{
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseExpression *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
