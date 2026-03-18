/*
 * XREFs of ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180078AF4
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180078F88 (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180129B54 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

void __fastcall COverlayContext::ResetOverlayCandidatesList(COverlayContext *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 50); ++i )
    COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 22) + 232LL * i));
  *((_DWORD *)this + 50) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 176, 232LL);
}
