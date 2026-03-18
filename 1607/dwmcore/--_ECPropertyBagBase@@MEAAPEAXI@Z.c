/*
 * XREFs of ??_ECPropertyBagBase@@MEAAPEAXI@Z @ 0x18014E980
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPropertyBagBase@@MEAA@XZ @ 0x18008CA08 (--1CPropertyBagBase@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CPropertyBagBase *__fastcall CPropertyBagBase::`vector deleting destructor'(
        CPropertyBagBase *this,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  char v4; // bl

  v4 = a2;
  CPropertyBagBase::~CPropertyBagBase(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPropertyBagBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
