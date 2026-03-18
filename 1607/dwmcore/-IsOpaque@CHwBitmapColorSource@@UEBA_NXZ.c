/*
 * XREFs of ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x180082070
 * Callers:
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x180082288 (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180082C1C (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

char __fastcall CHwBitmapColorSource::IsOpaque(CHwBitmapColorSource *this)
{
  int v1; // eax
  __int64 v2; // rdx
  char v3; // cl

  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    return 0;
  if ( (*((_BYTE *)this + 92) & 1) != 0 )
    return 1;
  v1 = HasAlphaChannel((enum DXGI_FORMAT)*((_DWORD *)this + 58));
  v3 = 0;
  if ( !v1 || *(_DWORD *)(v2 + 96) == 3 )
    return 1;
  return v3;
}
