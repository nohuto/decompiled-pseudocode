/*
 * XREFs of ?IsHardwareProtected@CAnalogDisplayRenderTarget@@WLA@EBA_NXZ @ 0x1800C10C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAnalogDisplayRenderTarget::IsHardwareProtected(__int64 a1)
{
  return CImageSource::IsMonitorSpecificContent((CImageSource *)(a1 - 176));
}
