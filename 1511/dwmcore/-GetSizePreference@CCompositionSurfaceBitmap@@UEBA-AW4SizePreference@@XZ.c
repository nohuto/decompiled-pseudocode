/*
 * XREFs of ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x18002E610
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18001B4BC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18002E3E0 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetSizePreference(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 408);
  result = 1LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 148);
  return result;
}
