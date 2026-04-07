/*
 * XREFs of ??_GCDWMDXGIEnumeration@@MEAAPEAXI@Z @ 0x18003DE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMDXGIEnumeration@@MEAA@XZ @ 0x18003E210 (--1CDWMDXGIEnumeration@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CDWMDXGIEnumeration *__fastcall CDWMDXGIEnumeration::`scalar deleting destructor'(CDWMDXGIEnumeration *this, char a2)
{
  CDWMDXGIEnumeration::~CDWMDXGIEnumeration(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMDXGIEnumeration *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
