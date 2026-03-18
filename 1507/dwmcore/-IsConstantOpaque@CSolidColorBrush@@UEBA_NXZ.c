/*
 * XREFs of ?IsConstantOpaque@CSolidColorBrush@@UEBA_NXZ @ 0x180083DD0
 * Callers:
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x180020570 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetDefaultRealizationFormat@CBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180083690 (-GetDefaultRealizationFormat@CBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSolidColorBrush::IsConstantOpaque(CSolidColorBrush *this)
{
  return !*((_QWORD *)this + 8) && *((double *)this + 7) == 1.0 && *((float *)this + 25) == 1.0;
}
