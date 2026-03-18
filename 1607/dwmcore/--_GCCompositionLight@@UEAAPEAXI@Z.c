/*
 * XREFs of ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x180150010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x18014FFC4 (--1CCompositionLight@@UEAA@XZ.c)
 */

CCompositionLight *__fastcall CCompositionLight::`scalar deleting destructor'(CCompositionLight *this, char a2)
{
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCompositionLight *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
