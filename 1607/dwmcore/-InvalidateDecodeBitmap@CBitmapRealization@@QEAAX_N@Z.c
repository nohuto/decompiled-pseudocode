/*
 * XREFs of ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x18010EEB8
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180055080 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180191400 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180191850 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18001EC44 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 */

void __fastcall CBitmapRealization::InvalidateDecodeBitmap(CBitmapRealization *this, char a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)this + 45);
  if ( v2 )
  {
    if ( a2 )
      CRenderTargetBitmap::ReleaseRenderTargetBitmap(*((CRenderTargetBitmap **)this + 45));
    *(_BYTE *)(v2 + 237) = 0;
  }
}
