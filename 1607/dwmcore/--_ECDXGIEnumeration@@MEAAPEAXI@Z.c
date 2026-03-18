/*
 * XREFs of ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x180036D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x180036BA0 (--1CDXGIEnumeration@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDXGIEnumeration *__fastcall CDXGIEnumeration::`vector deleting destructor'(
        CDXGIEnumeration *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CDXGIEnumeration::~CDXGIEnumeration(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDXGIEnumeration *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
