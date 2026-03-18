/*
 * XREFs of ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x18000662C
 * Callers:
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x18000F8C8 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_NPEBVCRegion@@@Z @ 0x180006530 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::CDirectFlipInfo(CDirectFlipInfo *this, struct COverlayContext **a2)
{
  *((_QWORD *)this + 8) = -1LL;
  *(_QWORD *)this = &CDirectFlipInfo::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_WORD *)this + 44) = 0;
  *((_BYTE *)this + 90) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  CDirectFlipInfo::Init(this, a2[1], a2[2], a2[3], a2[4], 0, 0LL);
  return this;
}
