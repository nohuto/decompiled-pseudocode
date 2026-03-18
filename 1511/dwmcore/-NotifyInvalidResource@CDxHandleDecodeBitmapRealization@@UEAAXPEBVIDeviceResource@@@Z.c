/*
 * XREFs of ?NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015FE40
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z @ 0x18015FDD4 (-InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z.c)
 *     ?ReleaseVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAXXZ @ 0x18015FEE4 (-ReleaseVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleDecodeBitmapRealization::NotifyInvalidResource(
        CDxHandleDecodeBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  CDxHandleDecodeBitmapRealization::ReleaseVidMemOnlyTexture((CDxHandleDecodeBitmapRealization *)((char *)this - 24));
  CDxHandleDecodeBitmapRealization::InvalidateDecodeBitmap((CDxHandleDecodeBitmapRealization *)((char *)this - 24), 1);
  CBitmapRealization::NotifyInvalidResource(this, a2);
}
