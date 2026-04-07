/*
 * XREFs of ??_GCAnimatedGlassSheet@@UEAAPEAXI@Z @ 0x1800834D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x180083414 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 */

CAnimatedGlassSheet *__fastcall CAnimatedGlassSheet::`scalar deleting destructor'(CAnimatedGlassSheet *this, char a2)
{
  CAnimatedGlassSheet::~CAnimatedGlassSheet(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimatedGlassSheet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
