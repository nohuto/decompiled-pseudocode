/*
 * XREFs of ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008F40
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800085B0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x1801119C4 (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::IsOpaque(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // dl
  int v3; // eax
  int v4; // ecx

  v1 = *((_QWORD *)this + 50);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 128);
    v4 = 3;
    if ( v3 )
      v4 = v3;
    return v4 == 3;
  }
  return v2;
}
