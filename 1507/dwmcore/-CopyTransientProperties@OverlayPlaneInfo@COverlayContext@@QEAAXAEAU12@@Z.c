/*
 * XREFs of ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEAU12@@Z @ 0x18009A04C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
        COverlayContext::OverlayPlaneInfo *this,
        struct COverlayContext::OverlayPlaneInfo *a2)
{
  *((_BYTE *)this + 168) = *((_BYTE *)a2 + 168);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  *((_BYTE *)this + 176) = *((_BYTE *)a2 + 176);
  *((_BYTE *)this + 177) = *((_BYTE *)a2 + 177);
  *((_QWORD *)this + 23) = *((_QWORD *)a2 + 23);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_BYTE *)this + 204) = *((_BYTE *)a2 + 204);
  *((_BYTE *)this + 205) = *((_BYTE *)a2 + 205);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_BYTE *)this + 216) = *((_BYTE *)a2 + 216);
  *((_QWORD *)this + 28) = *((_QWORD *)a2 + 28);
  *((_BYTE *)this + 232) = *((_BYTE *)a2 + 232);
}
