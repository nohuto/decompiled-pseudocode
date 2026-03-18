/*
 * XREFs of ??_ECColorBrush@@UEAAPEAXI@Z @ 0x18012B6D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CColorBrush@@UEAA@XZ @ 0x18012B1C4 (--1CColorBrush@@UEAA@XZ.c)
 */

CColorBrush *__fastcall CColorBrush::`vector deleting destructor'(CColorBrush *this, char a2)
{
  CColorBrush::~CColorBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CColorBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
