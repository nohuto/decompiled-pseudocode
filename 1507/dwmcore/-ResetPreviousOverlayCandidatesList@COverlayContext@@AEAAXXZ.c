/*
 * XREFs of ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18001240C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x1800F77B8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

void __fastcall COverlayContext::ResetPreviousOverlayCandidatesList(COverlayContext *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 48); ++i )
    COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 21) + 240LL * i));
  *((_DWORD *)this + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 168, 240LL);
}
