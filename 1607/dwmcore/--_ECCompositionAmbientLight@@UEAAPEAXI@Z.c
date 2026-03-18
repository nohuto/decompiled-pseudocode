/*
 * XREFs of ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x180150430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x18014FFC4 (--1CCompositionLight@@UEAA@XZ.c)
 */

CCompositionAmbientLight *__fastcall CCompositionAmbientLight::`vector deleting destructor'(
        CCompositionAmbientLight *this,
        char a2)
{
  *(_QWORD *)this = &CCompositionAmbientLight::`vftable';
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCompositionAmbientLight *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
