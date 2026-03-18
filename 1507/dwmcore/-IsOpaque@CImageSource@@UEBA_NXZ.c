/*
 * XREFs of ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x180070DE0
 * Callers:
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18001FC34 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 * Callees:
 *     ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800826C0 (-GetAlphaMode@CBitmapResource@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CImageSource::IsOpaque(CImageSource *this)
{
  enum DXGI_ALPHA_MODE (__fastcall *v1)(CBitmapResource *__hidden); // rdi
  enum DXGI_ALPHA_MODE AlphaMode; // eax

  v1 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmapResource *__hidden))(*((_QWORD *)this - 1) + 32LL);
  if ( v1 == CBitmapResource::GetAlphaMode )
    AlphaMode = CBitmapResource::GetAlphaMode((CImageSource *)((char *)this - 8));
  else
    AlphaMode = v1((CImageSource *)((char *)this - 8));
  return AlphaMode == DXGI_ALPHA_MODE_IGNORE;
}
