/*
 * XREFs of ?UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x180001F40
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180003348 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180056350 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

char __fastcall CHwTextureRenderTarget::UpdateDisplayId(__int64 a1, int a2)
{
  char v3; // bl
  DisplayId *v4; // rcx
  bool IsSpecific; // al
  CMILCOMBase *v7; // rcx

  v3 = 0;
  v4 = (DisplayId *)(a1 + 112);
  if ( a2 != *(_DWORD *)v4 )
  {
    *(_DWORD *)v4 = a2;
    IsSpecific = DisplayId::IsSpecific(v4);
    v7 = *(CMILCOMBase **)(a1 + 232);
    *(_BYTE *)(a1 + 240) = IsSpecific;
    if ( v7 )
    {
      CMILCOMBase::InternalRelease(v7);
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return 1;
  }
  return v3;
}
