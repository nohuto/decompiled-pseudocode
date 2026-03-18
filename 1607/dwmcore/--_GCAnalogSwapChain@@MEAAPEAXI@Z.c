/*
 * XREFs of ??_GCAnalogSwapChain@@MEAAPEAXI@Z @ 0x1801680A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnalogSwapChain@@MEAA@XZ @ 0x180168034 (--1CAnalogSwapChain@@MEAA@XZ.c)
 */

CAnalogSwapChain *__fastcall CAnalogSwapChain::`scalar deleting destructor'(
        CAnalogSwapChain *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CAnalogSwapChain::~CAnalogSwapChain(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
