/*
 * XREFs of ??_ECAnalogTextureTarget@@EEAAPEAXI@Z @ 0x180165FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnalogTextureTarget@@EEAA@XZ @ 0x180165F38 (--1CAnalogTextureTarget@@EEAA@XZ.c)
 */

CAnalogTextureTarget *__fastcall CAnalogTextureTarget::`vector deleting destructor'(
        CAnalogTextureTarget *this,
        char a2)
{
  CAnalogTextureTarget::~CAnalogTextureTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogTextureTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
