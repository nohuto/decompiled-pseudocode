/*
 * XREFs of ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18002D990
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013444 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180080D9C (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwTextureRenderTarget::UpdatePixelFormatInfo(
        CHwTextureRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  CMILCOMBase *v4; // rcx
  CD3DTexture *v5; // rcx

  *(_OWORD *)((char *)this + 216) = *(_OWORD *)a2;
  *((_QWORD *)this + 29) = *((_QWORD *)a2 + 2);
  v4 = (CMILCOMBase *)*((_QWORD *)this + 31);
  if ( v4 )
  {
    CMILCOMBase::InternalRelease(v4);
    *((_QWORD *)this + 31) = 0LL;
  }
  v5 = (CD3DTexture *)*((_QWORD *)this + 26);
  if ( v5 )
    CD3DTexture::UpdatePixelFormatInfo(v5, a2);
  CHwSurfaceRenderTarget::UpdatePixelFormatInfo(this, a2);
}
