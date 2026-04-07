/*
 * XREFs of ??0CBitmap@@QEAA@XZ @ 0x180043B84
 * Callers:
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x180043A94 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1800445AC (--0CWICBitmapWrapper@@QEAA@XZ.c)
 * Callees:
 *     ??0CMTALock@@QEAA@XZ @ 0x180044234 (--0CMTALock@@QEAA@XZ.c)
 */

CBitmap *__fastcall CBitmap::CBitmap(CBitmap *this)
{
  CBitmap *result; // rax

  *(_QWORD *)this = &CMILCOMBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 42) = 1;
  *((_QWORD *)this + 2) = &IBitmapSource::`vftable';
  *((_QWORD *)this + 3) = &IBitmapDest::`vftable';
  *((_QWORD *)this + 4) = &IBitmapUnlock::`vftable';
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 2;
  *(_QWORD *)((char *)this + 76) = 2LL;
  *((_QWORD *)this + 6) = &CMILResourceCache::`vftable';
  *((_DWORD *)this + 26) = 0;
  CMTALock::CMTALock((CBitmap *)((char *)this + 112));
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CBitmap::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CBitmap::`vftable'{for `CMTALock'};
  result = this;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_BYTE *)this + 252) = 0;
  *((_DWORD *)this + 62) = 0;
  return result;
}
