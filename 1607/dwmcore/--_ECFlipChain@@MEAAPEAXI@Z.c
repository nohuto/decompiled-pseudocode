/*
 * XREFs of ??_ECFlipChain@@MEAAPEAXI@Z @ 0x180141D34
 * Callers:
 *     ??_ECFlipChain@@OBA@EAAPEAXI@Z @ 0x1800C0520 (--_ECFlipChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x180141BA0 (--1CFlipChain@@MEAA@XZ.c)
 */

CFlipChain *__fastcall CFlipChain::`vector deleting destructor'(CFlipChain *this, char a2)
{
  CFlipChain::~CFlipChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CFlipChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
