/*
 * XREFs of ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x180148BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180148A50 (--1CConditionalExpression@@UEAA@XZ.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::`vector deleting destructor'(
        CConditionalExpression *this,
        char a2)
{
  CConditionalExpression::~CConditionalExpression(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CConditionalExpression *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
