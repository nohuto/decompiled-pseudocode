/*
 * XREFs of ?SetToInverse@?$CMatrix@UDeviceHPC@CoordinateSpace@@UPageInPixels@2@@@QEAAHAEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x180110A58
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 */

_BOOL8 __fastcall CMatrix<CoordinateSpace::DeviceHPC,CoordinateSpace::PageInPixels>::SetToInverse(
        CMILMatrix *a1,
        const struct CMILMatrix *a2)
{
  return CMILMatrix::SetToInverse(a1, a2);
}
