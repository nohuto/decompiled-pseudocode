/*
 * XREFs of ?UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x180013BD0
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013444 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?UpdateDisplayId@CBaseRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x18017A750 (-UpdateDisplayId@CBaseRenderTarget@@UEAA_NVDisplayId@@@Z.c)
 */

char __fastcall CHwTextureRenderTarget::UpdateDisplayId(__int64 a1, int a2)
{
  char v2; // bl
  CMILCOMBase *v4; // rcx

  v2 = 0;
  if ( a2 != *(_DWORD *)(a1 + 116) )
  {
    CBaseRenderTarget::UpdateDisplayId();
    v4 = *(CMILCOMBase **)(a1 + 248);
    if ( v4 )
    {
      CMILCOMBase::InternalRelease(v4);
      *(_QWORD *)(a1 + 248) = 0LL;
    }
    return 1;
  }
  return v2;
}
