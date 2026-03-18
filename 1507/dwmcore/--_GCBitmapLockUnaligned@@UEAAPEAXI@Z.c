/*
 * XREFs of ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x180145770
 * Callers:
 *     ??_ECBitmapLockUnaligned@@WBA@EAAPEAXI@Z @ 0x18009B860 (--_ECBitmapLockUnaligned@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x18014571C (--1CBitmapLockUnaligned@@UEAA@XZ.c)
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
