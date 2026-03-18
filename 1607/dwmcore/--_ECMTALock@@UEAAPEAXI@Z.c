/*
 * XREFs of ??_ECMTALock@@UEAAPEAXI@Z @ 0x180189850
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMTALock@@UEAA@XZ @ 0x18009E9FC (--1CMTALock@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CMTALock *__fastcall CMTALock::`vector deleting destructor'(CMTALock *this, char a2)
{
  CMTALock::~CMTALock(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMTALock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
