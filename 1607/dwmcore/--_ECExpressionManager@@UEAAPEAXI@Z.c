/*
 * XREFs of ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x1801377D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801376EC (--1CExpressionManager@@UEAA@XZ.c)
 */

CExpressionManager *__fastcall CExpressionManager::`vector deleting destructor'(CExpressionManager *this, char a2)
{
  CExpressionManager::~CExpressionManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CExpressionManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
