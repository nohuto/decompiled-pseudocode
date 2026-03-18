/*
 * XREFs of ?NeedsCachedRenderingRealizationUpdate@CGdiSpriteBitmap@@WEA@EBA_NXZ @ 0x1800BD420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::NeedsCachedRenderingRealizationUpdate(__int64 a1)
{
  return CImageSource::IsMonitorSpecificContent((CImageSource *)(a1 - 64));
}
