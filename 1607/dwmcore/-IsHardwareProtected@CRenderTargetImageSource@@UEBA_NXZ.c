/*
 * XREFs of ?IsHardwareProtected@CRenderTargetImageSource@@UEBA_NXZ @ 0x180131E50
 * Callers:
 *     ?IsHardwareProtected@CRenderTargetImageSource@@WHI@EBA_NXZ @ 0x1800BFFB0 (-IsHardwareProtected@CRenderTargetImageSource@@WHI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetImageSource::IsHardwareProtected(CRenderTargetImageSource *this)
{
  return CRenderTargetBitmap::IsHardwareProtected((CRenderTargetImageSource *)((char *)this + 120));
}
