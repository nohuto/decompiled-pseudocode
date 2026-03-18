/*
 * XREFs of ??1CBitmapLock@@UEAA@XZ @ 0x180052464
 * Callers:
 *     ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x180052040 (--_GCBitmapLock@@UEAAPEAXI@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x18014571C (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x1800520A0 (-Unlock@CBitmapLock@@IEAAXXZ.c)
 *     ??1CMTALock@@UEAA@XZ @ 0x1800526DC (--1CMTALock@@UEAA@XZ.c)
 */

void __fastcall CBitmapLock::~CBitmapLock(CBitmapLock *this)
{
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 10) = &CBitmapLock::`vftable'{for `IWICBitmapLock'};
  CBitmapLock::Unlock(this);
  CMTALock::~CMTALock((CBitmapLock *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
