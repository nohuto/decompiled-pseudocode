/*
 * XREFs of ??_ECBitmap@@UEAAPEAXI@Z @ 0x18009BD30
 * Callers:
 *     ??_ECBitmap@@WHA@EAAPEAXI@Z @ 0x180051490 (--_ECBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmap@@UEAA@XZ @ 0x180043CB4 (--1CBitmap@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CBitmap *__fastcall CBitmap::`vector deleting destructor'(CBitmap *this, char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
