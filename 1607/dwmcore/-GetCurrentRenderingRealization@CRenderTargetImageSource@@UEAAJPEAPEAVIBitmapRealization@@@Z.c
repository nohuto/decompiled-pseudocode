/*
 * XREFs of ?GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180131D50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

__int64 __fastcall CRenderTargetImageSource::GetCurrentRenderingRealization(
        CRenderTargetImageSource *this,
        struct IBitmapRealization **a2)
{
  struct IBitmapRealization *v2; // rax

  v2 = 0LL;
  if ( this )
    v2 = (CRenderTargetImageSource *)((char *)this + 120);
  *a2 = v2;
  CBitmapOfDeviceBitmaps::AddRef((CRenderTargetImageSource *)((char *)this + 8));
  return 0LL;
}
