/*
 * XREFs of ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x18011A290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180116584 (--1CComposition@@MEAA@XZ.c)
 */

CCrossThreadComposition *__fastcall CCrossThreadComposition::`vector deleting destructor'(
        CCrossThreadComposition *this,
        char a2)
{
  CComposition::~CComposition(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCrossThreadComposition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
