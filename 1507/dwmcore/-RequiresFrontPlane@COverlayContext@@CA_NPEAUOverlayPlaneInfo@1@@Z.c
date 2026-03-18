/*
 * XREFs of ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x1800F7634
 * Callers:
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z @ 0x1800073A4 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800126A4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180012740 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_NPEA_N2@Z @ 0x1800F63E0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverla.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1800F7114 (-IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall COverlayContext::RequiresFrontPlane(struct COverlayContext::OverlayPlaneInfo *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_BYTE *)a1 + 153) )
  {
    if ( *((_BYTE *)a1 + 155) )
      return *((_BYTE *)a1 + 157) == 0;
  }
  return result;
}
