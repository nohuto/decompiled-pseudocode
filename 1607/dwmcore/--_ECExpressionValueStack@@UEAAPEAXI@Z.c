/*
 * XREFs of ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x180158970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CExpressionValueStack@@UEAA@XZ @ 0x180158948 (--1CExpressionValueStack@@UEAA@XZ.c)
 */

CExpressionValueStack *__fastcall CExpressionValueStack::`vector deleting destructor'(
        CExpressionValueStack *this,
        char a2)
{
  CExpressionValueStack::~CExpressionValueStack(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CExpressionValueStack *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
