/*
 * XREFs of ??1CMTALock@@UEAA@XZ @ 0x18003F010
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18003DDE8 (--1CBitmapLock@@UEAA@XZ.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x18003EC3C (--1CBitmap@@UEAA@XZ.c)
 *     ??_ECMTALock@@UEAAPEAXI@Z @ 0x18009EE60 (--_ECMTALock@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMTALock::~CMTALock(CMTALock *this)
{
  *(_QWORD *)this = &CMTALock::`vftable';
  CCriticalSection::DeInit((CMTALock *)((char *)this + 8));
}
