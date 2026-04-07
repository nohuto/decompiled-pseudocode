/*
 * XREFs of ??0CBitmapLock@@QEAA@XZ @ 0x180043240
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180043D70 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 * Callees:
 *     ??0CMTALock@@QEAA@XZ @ 0x180044234 (--0CMTALock@@QEAA@XZ.c)
 */

CBitmapLock *__fastcall CBitmapLock::CBitmapLock(CBitmapLock *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  CMTALock::CMTALock((CBitmapLock *)((char *)this + 16));
  *((_WORD *)this + 44) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 10) = &CBitmapLock::`vftable'{for `IWICBitmapLock'};
  return this;
}
