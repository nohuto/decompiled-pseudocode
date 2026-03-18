/*
 * XREFs of ??_ECAnalogCompositorTarget@@EEAAPEAXI@Z @ 0x180166ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnalogCompositorTarget@@EEAA@XZ @ 0x180166E60 (--1CAnalogCompositorTarget@@EEAA@XZ.c)
 */

CAnalogCompositorTarget *__fastcall CAnalogCompositorTarget::`vector deleting destructor'(
        CAnalogCompositorTarget *this,
        char a2)
{
  CAnalogCompositorTarget::~CAnalogCompositorTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogCompositorTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
