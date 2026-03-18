/*
 * XREFs of ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x1801809C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CBitmapColorKey@@EEAA@XZ @ 0x1801808D0 (--1CBitmapColorKey@@EEAA@XZ.c)
 */

CBitmapColorKey *__fastcall CBitmapColorKey::`scalar deleting destructor'(CBitmapColorKey *this, char a2)
{
  CBitmapColorKey::~CBitmapColorKey(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapColorKey *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
