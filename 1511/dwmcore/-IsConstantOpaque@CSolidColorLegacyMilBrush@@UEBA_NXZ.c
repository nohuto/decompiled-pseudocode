/*
 * XREFs of ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x180058B30
 * Callers:
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800563C0 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005D5E0 (-GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSolidColorLegacyMilBrush::IsConstantOpaque(CSolidColorLegacyMilBrush *this)
{
  return !*((_QWORD *)this + 8) && *((double *)this + 7) == 1.0 && *((float *)this + 25) == 1.0;
}
