/*
 * XREFs of ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180084750
 * Callers:
 *     ??0CTileLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x180024BA4 (--0CTileLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAPEAV1@@Z @ 0x1800B76C8 (-Create@CMILBrushBitmap@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CMILBrushWithCache@@QEAA@XZ @ 0x1800AAD14 (--0CMILBrushWithCache@@QEAA@XZ.c)
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
  *(_OWORD *)(v3 + 128) = _xmm;
  *(_DWORD *)(v3 + 192) = v2;
  *(_WORD *)(v3 + 192) = 32085;
  *(_OWORD *)(v3 + 144) = _xmm;
  *(_OWORD *)(v3 + 160) = _xmm;
  *(_OWORD *)(v3 + 176) = _xmm;
  *(_QWORD *)(v3 + 200) = v2;
  *(_DWORD *)(v3 + 208) = v2;
  *(_DWORD *)(v3 + 228) = 1065353216;
  *(_DWORD *)(v3 + 232) = 1065353216;
  *(_DWORD *)(v3 + 236) = 1065353216;
  *(_QWORD *)(v3 + 240) = 1065353216LL;
  *(_QWORD *)(v3 + 248) = v2;
  *(_DWORD *)(v3 + 256) = v2;
  *(_BYTE *)(v3 + 260) = v2;
  *(_DWORD *)(v3 + 264) = v2;
  *(_DWORD *)(v3 + 268) = 1065353216;
  *(_QWORD *)(v3 + 212) = 0LL;
  *(_QWORD *)(v3 + 220) = 0LL;
  return (CMILBrushBitmap *)v3;
}
