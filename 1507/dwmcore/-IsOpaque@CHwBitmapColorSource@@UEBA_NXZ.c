/*
 * XREFs of ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x18001C000
 * Callers:
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x18001C1EC (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x18001CA7C (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

char __fastcall CHwBitmapColorSource::IsOpaque(CHwBitmapColorSource *this)
{
  BOOL v1; // eax
  __int64 v2; // rdx
  char v3; // cl

  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    return 0;
  if ( (*((_BYTE *)this + 92) & 1) != 0 )
    return 1;
  v1 = HasAlphaChannel(*((_DWORD *)this + 58));
  v3 = 0;
  if ( !v1 || *(_DWORD *)(v2 + 96) == 3 )
    return 1;
  return v3;
}
