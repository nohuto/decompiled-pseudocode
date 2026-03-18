/*
 * XREFs of ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x180183200
 * Callers:
 *     ??_ECBitmapLockUnaligned@@WBA@EAAPEAXI@Z @ 0x1800C1CF0 (--_ECBitmapLockUnaligned@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1801831B4 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 */

CBitmapLockUnaligned *__fastcall CBitmapLockUnaligned::`scalar deleting destructor'(
        CBitmapLockUnaligned *this,
        char a2)
{
  CBitmapLockUnaligned::~CBitmapLockUnaligned(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapLockUnaligned *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
