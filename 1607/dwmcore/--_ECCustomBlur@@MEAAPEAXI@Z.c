/*
 * XREFs of ??_ECCustomBlur@@MEAAPEAXI@Z @ 0x180169800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CCustomBlur@@MEAA@XZ @ 0x18016978C (--1CCustomBlur@@MEAA@XZ.c)
 */

CCustomBlur *__fastcall CCustomBlur::`vector deleting destructor'(CCustomBlur *this, char a2)
{
  CCustomBlur::~CCustomBlur(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCustomBlur *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
