/*
 * XREFs of ??_GCSwapChainBase@@MEAAPEAXI@Z @ 0x18017A760
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x180079F9C (--1CSwapChainBase@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CSwapChainBase *__fastcall CSwapChainBase::`scalar deleting destructor'(CSwapChainBase *this, __int64 a2, __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CSwapChainBase::~CSwapChainBase(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSwapChainBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
