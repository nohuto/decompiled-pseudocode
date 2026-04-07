/*
 * XREFs of ??_GCMagnifier@@EEAAPEAXI@Z @ 0x18007B0D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??1CMagnifier@@EEAA@XZ @ 0x18007B038 (--1CMagnifier@@EEAA@XZ.c)
 */

CMagnifier *__fastcall CMagnifier::`scalar deleting destructor'(CMagnifier *this, char a2)
{
  CMagnifier::~CMagnifier(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMagnifier *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
