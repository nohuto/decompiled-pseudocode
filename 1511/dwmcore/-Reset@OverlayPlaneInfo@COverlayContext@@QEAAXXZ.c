/*
 * XREFs of ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180111A90
 * Callers:
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x18007EA40 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007EA80 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007EAC0 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EEE0 (-NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall COverlayContext::OverlayPlaneInfo::Reset(COverlayContext::OverlayPlaneInfo *this)
{
  __int64 v2; // rsi
  CMILCOMBase *v3; // rcx
  __int64 v4; // rsi

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
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
}
