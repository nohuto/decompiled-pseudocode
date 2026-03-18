/*
 * XREFs of ??1CMTALock@@UEAA@XZ @ 0x1800526DC
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x180052464 (--1CBitmapLock@@UEAA@XZ.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x18008009C (--1CBitmap@@UEAA@XZ.c)
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180145D2C (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_ECMTALock@@UEAAPEAXI@Z @ 0x18014A290 (--_ECMTALock@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMTALock::~CMTALock(CMTALock *this)
{
  *(_QWORD *)this = &CMTALock::`vftable';
  CCriticalSection::DeInit((CMTALock *)((char *)this + 8));
}
