/*
 * XREFs of ??_GCAtlasedRects@@MEAAPEAXI@Z @ 0x18012B630
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRects@@MEAA@XZ @ 0x18009C4C0 (--1CAtlasedRects@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CAtlasedRects *__fastcall CAtlasedRects::`scalar deleting destructor'(CAtlasedRects *this, char a2)
{
  CAtlasedRects::~CAtlasedRects(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAtlasedRects *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
