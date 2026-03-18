/*
 * XREFs of ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x1800851E0
 * Callers:
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x180055AB8 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18005C3E0 (-GetAlphaMode@CBitmapResource@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 */

bool __fastcall CImageSource::IsOpaque(CImageSource *this)
{
  enum DXGI_ALPHA_MODE (__fastcall *v1)(CBitmapResource *); // rdi
  enum DXGI_ALPHA_MODE AlphaMode; // eax

  v1 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmapResource *))(*((_QWORD *)this - 1) + 32LL);
  if ( v1 == CBitmapResource::GetAlphaMode )
    AlphaMode = CBitmapResource::GetAlphaMode((CImageSource *)((char *)this - 8));
  else
    AlphaMode = v1((CImageSource *)((char *)this - 8));
  return AlphaMode == DXGI_ALPHA_MODE_IGNORE;
}
