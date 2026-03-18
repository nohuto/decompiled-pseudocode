/*
 * XREFs of ??_ECRemoteApplicationWindowSet@@UEAAPEAXI@Z @ 0x180161D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CRemoteApplicationWindowSet@@UEAA@XZ @ 0x180161D44 (--1CRemoteApplicationWindowSet@@UEAA@XZ.c)
 */

CRemoteApplicationWindowSet *__fastcall CRemoteApplicationWindowSet::`vector deleting destructor'(
        CRemoteApplicationWindowSet *this,
        char a2)
{
  CRemoteApplicationWindowSet::~CRemoteApplicationWindowSet(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRemoteApplicationWindowSet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
