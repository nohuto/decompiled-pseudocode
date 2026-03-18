/*
 * XREFs of ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180080FBC
 * Callers:
 *     ??0CImageBrush@@IEAA@PEAVCComposition@@@Z @ 0x180085440 (--0CImageBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x180096D50 (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CMILBrushWithCache@@QEAA@XZ @ 0x180057604 (--0CMILBrushWithCache@@QEAA@XZ.c)
 */

CMILBrushBitmap *__fastcall CMILBrushBitmap::CMILBrushBitmap(CMILBrushBitmap *this, struct CMILFactory *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  _QWORD *v4; // rcx

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILObject::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  CMILBrushWithCache::CMILBrushWithCache((CMILBrushBitmap *)((char *)this + 24));
  *(_DWORD *)(v3 + 120) = v2 + 1;
  *(_QWORD *)v3 = &CMILBrushBitmap::`vftable';
  *v4 = &CMILBrushBitmap::`vftable'{for `CMILBrush'};
  *(_QWORD *)(v3 + 56) = &CMILBrushBitmap::`vftable'{for `CMILResourceCache'};
  *(_DWORD *)(v3 + 124) = v2 + 1;
  *(_DWORD *)(v3 + 188) = 1065353216;
  *(_DWORD *)(v3 + 168) = 1065353216;
  *(_DWORD *)(v3 + 148) = 1065353216;
  *(_DWORD *)(v3 + 128) = 1065353216;
  *(_QWORD *)(v3 + 180) = v2;
  *(_QWORD *)(v3 + 172) = v2;
  *(_QWORD *)(v3 + 160) = v2;
  *(_QWORD *)(v3 + 152) = v2;
  *(_QWORD *)(v3 + 140) = v2;
  *(_QWORD *)(v3 + 132) = v2;
  *(_QWORD *)(v3 + 192) = v2;
  *(_DWORD *)(v3 + 200) = v2;
  *(_DWORD *)(v3 + 220) = 1065353216;
  *(_DWORD *)(v3 + 224) = 1065353216;
  *(_DWORD *)(v3 + 228) = 1065353216;
  *(_QWORD *)(v3 + 232) = 1065353216LL;
  *(_QWORD *)(v3 + 240) = v2;
  *(_DWORD *)(v3 + 248) = v2;
  *(_BYTE *)(v3 + 252) = v2;
  *(_DWORD *)(v3 + 256) = v2;
  *(_DWORD *)(v3 + 260) = 1065353216;
  *(_QWORD *)(v3 + 204) = 0LL;
  *(_QWORD *)(v3 + 212) = 0LL;
  return (CMILBrushBitmap *)v3;
}
