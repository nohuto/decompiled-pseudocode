/*
 * XREFs of ??_GCCrossFade@@UEAAPEAXI@Z @ 0x180001190
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStoryboard@@UEAA@XZ @ 0x18000F688 (--1CStoryboard@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CCrossFade *__fastcall CCrossFade::`scalar deleting destructor'(CCrossFade *this, char a2)
{
  CStoryboard::~CStoryboard(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCrossFade *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
