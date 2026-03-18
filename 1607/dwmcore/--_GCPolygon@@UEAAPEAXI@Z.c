/*
 * XREFs of ??_GCPolygon@@UEAAPEAXI@Z @ 0x180153650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CPolygon@@UEAA@XZ @ 0x1801535BC (--1CPolygon@@UEAA@XZ.c)
 */

CPolygon *__fastcall CPolygon::`scalar deleting destructor'(CPolygon *this, char a2)
{
  CPolygon::~CPolygon(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPolygon *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
