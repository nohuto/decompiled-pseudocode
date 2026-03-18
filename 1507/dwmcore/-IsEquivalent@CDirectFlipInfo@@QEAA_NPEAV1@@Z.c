/*
 * XREFs of ?IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z @ 0x180006214
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDirectFlipInfo::IsEquivalent(CDirectFlipInfo *this, struct CDirectFlipInfo *a2)
{
  return *((_QWORD *)this + 3) == *((_QWORD *)a2 + 3)
      && *((_QWORD *)this + 4) == *((_QWORD *)a2 + 4)
      && *((_QWORD *)this + 10) == *((_QWORD *)a2 + 10);
}
