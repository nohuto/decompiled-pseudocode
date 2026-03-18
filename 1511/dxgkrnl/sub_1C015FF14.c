/*
 * XREFs of sub_1C015FF14 @ 0x1C015FF14
 * Callers:
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C015FF34 (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C0160204 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0164410 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0164A80 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall sub_1C015FF14(void **a1)
{
  operator delete(*a1);
  operator delete(a1[1]);
}
