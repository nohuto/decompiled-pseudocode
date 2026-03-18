/*
 * XREFs of ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x1801538AC
 * Callers:
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180152534 (-HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800A2308 (--0CBitmapLock@@QEAA@XZ.c)
 */

CBitmapLockUnaligned *__fastcall CBitmapLockUnaligned::CBitmapLockUnaligned(CBitmapLockUnaligned *this)
{
  CBitmapLock::CBitmapLock(this);
  *((_QWORD *)this + 18) = 0LL;
  *(_QWORD *)this = &CBitmapLockUnaligned::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLockUnaligned::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CBitmapLockUnaligned::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 10) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  return this;
}
