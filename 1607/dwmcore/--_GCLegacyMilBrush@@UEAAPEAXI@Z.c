/*
 * XREFs of ??_GCLegacyMilBrush@@UEAAPEAXI@Z @ 0x180121590
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyMilBrush@@UEAA@XZ @ 0x18002EF00 (--1CLegacyMilBrush@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CLegacyMilBrush *__fastcall CLegacyMilBrush::`scalar deleting destructor'(CLegacyMilBrush *this, char a2)
{
  CLegacyMilBrush::~CLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLegacyMilBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
