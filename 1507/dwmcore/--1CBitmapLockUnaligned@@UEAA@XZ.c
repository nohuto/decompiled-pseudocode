/*
 * XREFs of ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x18014571C
 * Callers:
 *     ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x180145770 (--_GCBitmapLockUnaligned@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x180145A98 (-UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ.c)
 */

void __fastcall CBitmapLockUnaligned::~CBitmapLockUnaligned(CBitmapLockUnaligned *this)
{
  *(_QWORD *)this = &CBitmapLockUnaligned::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLockUnaligned::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CBitmapLockUnaligned::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 10) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  CBitmapLockUnaligned::UnlockUnaligned(this);
  CBitmapLock::~CBitmapLock(this);
}
