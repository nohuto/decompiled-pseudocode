/*
 * XREFs of ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x180131EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmapCache::NotifyInvalidResource(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  CD2DBitmapCache::ClearCache((CD2DBitmapCache *)((char *)this - 24));
}
