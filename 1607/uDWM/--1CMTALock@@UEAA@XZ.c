/*
 * XREFs of ??1CMTALock@@UEAA@XZ @ 0x180044284
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x180043178 (--1CBitmapLock@@UEAA@XZ.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x180043CB4 (--1CBitmap@@UEAA@XZ.c)
 *     ??_ECMTALock@@UEAAPEAXI@Z @ 0x18009CDD0 (--_ECMTALock@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMTALock::~CMTALock(CMTALock *this)
{
  *(_QWORD *)this = &CMTALock::`vftable';
  CCriticalSection::DeInit((CMTALock *)((char *)this + 8));
}
