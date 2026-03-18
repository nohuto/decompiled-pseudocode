/*
 * XREFs of ?IsAdvancedDirectFlipCompatible@CGdiSpriteBitmap@@WEA@EBA_NXZ @ 0x18009A7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::IsAdvancedDirectFlipCompatible(__int64 a1)
{
  return CImageSource::IsMonitorSpecificContent((CImageSource *)(a1 - 64));
}
