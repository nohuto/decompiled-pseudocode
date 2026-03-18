/*
 * XREFs of ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180152890
 * Callers:
 *     ?SetResolution@CBitmap@@WBA@EAAJNN@Z @ 0x1800BCBE0 (-SetResolution@CBitmap@@WBA@EAAJNN@Z.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x180152C70 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800A2498 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::SetResolution(CBitmap *this, double a2, double a3)
{
  char *v4; // rcx
  bool v5; // zf
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8; // eax
  char *v10; // [rsp+50h] [rbp+8h] BYREF

  if ( this == (CBitmap *)24 )
    v4 = 0LL;
  else
    v4 = (char *)this + 88;
  v5 = v4[48] == 0;
  v10 = v4;
  if ( !v5 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v6 = a2;
  v7 = a3;
  *((float *)this + 42) = v6;
  *((float *)this + 43) = v7;
  v8 = ++*((_DWORD *)this + 36);
  if ( !v8 )
    v8 = 1;
  *((_DWORD *)this + 36) = v8;
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v10);
  return 0LL;
}
