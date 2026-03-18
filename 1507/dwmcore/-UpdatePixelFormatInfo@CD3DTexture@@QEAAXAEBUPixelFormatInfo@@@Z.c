/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x1800849C8
 * Callers:
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x18001C1EC (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180014DF0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ @ 0x180084708 (-ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ.c)
 */

void __fastcall CD3DTexture::UpdatePixelFormatInfo(CD3DTexture *this, const struct PixelFormatInfo *a2)
{
  bool v2; // zf
  int v5; // ebp
  __int64 i; // rdi
  CD3DSurface *v7; // rcx

  v2 = *((_QWORD *)this + 25) == 0LL;
  v5 = *((_DWORD *)this + 46);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 2);
  if ( !v2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
    {
      v7 = *(CD3DSurface **)(*((_QWORD *)this + 25) + 8 * i);
      if ( v7 )
        CD3DSurface::UpdatePixelFormatInfo(v7, a2);
    }
  }
  if ( v5 != *((_DWORD *)this + 46) )
    CD3DTexture::ReleaseD2DBitmaps(this);
}
