/*
 * XREFs of ??_ECMILFactory@@MEAAPEAXI@Z @ 0x18018C290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CMILFactory@@MEAA@XZ @ 0x18018C234 (--1CMILFactory@@MEAA@XZ.c)
 */

CMILFactory *__fastcall CMILFactory::`vector deleting destructor'(CMILFactory *this, char a2)
{
  CMILFactory::~CMILFactory(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILFactory *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
