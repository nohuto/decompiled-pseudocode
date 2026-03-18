/*
 * XREFs of ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007EAC0
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007F050 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180111A90 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

void __fastcall COverlayContext::ResetOverlayCandidatesList(COverlayContext *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 40); ++i )
    COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 17) + 224LL * i));
  *((_DWORD *)this + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 17, 0xE0u);
}
