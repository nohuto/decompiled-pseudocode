/*
 * XREFs of ?IsDynamicBitmap@CGdiSpriteBitmap@@WII@EBA_NXZ @ 0x1800C04A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::IsDynamicBitmap(__int64 a1)
{
  return CImageSource::IsMonitorSpecificContent((CImageSource *)(a1 - 136));
}
