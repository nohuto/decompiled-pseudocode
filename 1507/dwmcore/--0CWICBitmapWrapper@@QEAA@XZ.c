/*
 * XREFs of ??0CWICBitmapWrapper@@QEAA@XZ @ 0x180070210
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18005EF94 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x18007FF6C (--0CBitmap@@QEAA@XZ.c)
 */

CWICBitmapWrapper *__fastcall CWICBitmapWrapper::CWICBitmapWrapper(CWICBitmapWrapper *this)
{
  CBitmap::CBitmap(this);
  *((_QWORD *)this + 32) = 0LL;
  *(_QWORD *)this = &CWICBitmapWrapper::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CWICBitmapWrapper::`vftable'{for `CMTALock'};
  return this;
}
