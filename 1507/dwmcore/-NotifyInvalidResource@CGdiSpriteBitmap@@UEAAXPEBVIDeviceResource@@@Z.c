/*
 * XREFs of ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180108300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::NotifyInvalidResource(CGdiSpriteBitmap *this, const struct IDeviceResource *a2)
{
  CGdiSpriteBitmap::ReleaseDeviceResources((CGdiSpriteBitmap *)((char *)this - 80));
}
