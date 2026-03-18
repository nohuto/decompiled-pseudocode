/*
 * XREFs of ??1CBitmapLock@@UEAA@XZ @ 0x1800A22A4
 * Callers:
 *     ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x1800A1E40 (--_GCBitmapLock@@UEAAPEAXI@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1801538FC (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x1800A1EB0 (-Unlock@CBitmapLock@@IEAAXXZ.c)
 *     ??1CMTALock@@UEAA@XZ @ 0x1800A251C (--1CMTALock@@UEAA@XZ.c)
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
