/*
 * XREFs of ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x180006FF0
 * Callers:
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x18001D988 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_NPEBVCRegion@@@Z @ 0x180006EF4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::CDirectFlipInfo(CDirectFlipInfo *this, struct COverlayContext **a2)
{
  *(_QWORD *)this = &CDirectFlipInfo::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  CDirectFlipInfo::Init(this, a2[1], a2[2], a2[3], a2[4], 0, 0LL);
  return this;
}
