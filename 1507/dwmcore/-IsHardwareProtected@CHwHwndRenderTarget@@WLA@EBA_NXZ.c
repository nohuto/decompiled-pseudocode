/*
 * XREFs of ?IsHardwareProtected@CHwHwndRenderTarget@@WLA@EBA_NXZ @ 0x18009B5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwHwndRenderTarget::IsHardwareProtected(__int64 a1)
{
  return CImageSource::IsMonitorSpecificContent((CImageSource *)(a1 - 176));
}
