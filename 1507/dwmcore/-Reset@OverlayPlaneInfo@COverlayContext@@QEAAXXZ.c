/*
 * XREFs of ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x1800F77B8
 * Callers:
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x1800123CC (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18001240C (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18001244C (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012890 (-NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall COverlayContext::OverlayPlaneInfo::Reset(COverlayContext::OverlayPlaneInfo *this)
{
  __int64 v2; // rsi
  CMILCOMBase *v3; // rcx

  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    CMILCOMBase::InternalRelease(v3);
    *((_QWORD *)this + 2) = 0LL;
  }
}
