/*
 * XREFs of ??1CMTALock@@UEAA@XZ @ 0x1800A251C
 * Callers:
 *     ??1CBitmap@@UEAA@XZ @ 0x180089124 (--1CBitmap@@UEAA@XZ.c)
 *     ??1CBitmapLock@@UEAA@XZ @ 0x1800A22A4 (--1CBitmapLock@@UEAA@XZ.c)
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180153F0C (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_ECMTALock@@UEAAPEAXI@Z @ 0x180158710 (--_ECMTALock@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMTALock::~CMTALock(CMTALock *this)
{
  *(_QWORD *)this = &CMTALock::`vftable';
  CCriticalSection::DeInit((CMTALock *)((char *)this + 8));
}
