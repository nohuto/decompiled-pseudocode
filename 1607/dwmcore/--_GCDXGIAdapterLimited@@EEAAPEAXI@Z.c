/*
 * XREFs of ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x1800B2E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x1800B3394 (--1CDXGIAdapterLimited@@EEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDXGIAdapterLimited *__fastcall CDXGIAdapterLimited::`scalar deleting destructor'(CDXGIAdapterLimited *this, char a2)
{
  CDXGIAdapterLimited::~CDXGIAdapterLimited(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDXGIAdapterLimited *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
