/*
 * XREFs of ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801440D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCachedVisualImage::NotifyInvalidResource(CCachedVisualImage *this, const struct IDeviceResource *a2)
{
  CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)((char *)this - 128));
}
