/*
 * XREFs of ??1CMTALock@@UEAA@XZ @ 0x18009E9FC
 * Callers:
 *     ??1CBitmap@@UEAA@XZ @ 0x180085264 (--1CBitmap@@UEAA@XZ.c)
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18009E914 (--1CBitmapLock@@UEAA@XZ.c)
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180184324 (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_ECMTALock@@UEAAPEAXI@Z @ 0x180189850 (--_ECMTALock@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMTALock::~CMTALock(CMTALock *this)
{
  *(_QWORD *)this = &CMTALock::`vftable';
  CCriticalSection::DeInit((CMTALock *)((char *)this + 8));
}
