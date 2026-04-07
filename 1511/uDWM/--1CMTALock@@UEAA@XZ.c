/*
 * XREFs of ??1CMTALock@@UEAA@XZ @ 0x180042BC8
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x180041998 (--1CBitmapLock@@UEAA@XZ.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x1800427EC (--1CBitmap@@UEAA@XZ.c)
 *     ??_ECMTALock@@UEAAPEAXI@Z @ 0x1800A03E0 (--_ECMTALock@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMTALock::~CMTALock(CMTALock *this)
{
  *(_QWORD *)this = &CMTALock::`vftable';
  CCriticalSection::DeInit((CMTALock *)((char *)this + 8));
}
