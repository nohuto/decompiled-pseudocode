/*
 * XREFs of ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x180082288
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180080D9C (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x180082070 (-IsOpaque@CHwBitmapColorSource@@UEBA_NXZ.c)
 */

void __fastcall CHwBitmapColorSource::UpdateTexturePixelFormatInfo(CHwBitmapColorSource *this)
{
  char IsOpaque; // al
  CD3DTexture *v3; // rcx
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+24h] [rbp-24h]
  __int64 v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+34h] [rbp-14h]

  v4 = *((_DWORD *)this + 58);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  IsOpaque = CHwBitmapColorSource::IsOpaque(this);
  v3 = (CD3DTexture *)*((_QWORD *)this + 20);
  HIDWORD(v5) = *((_DWORD *)this + 25);
  LODWORD(v5) = IsOpaque != 0 ? 3 : 1;
  CD3DTexture::UpdatePixelFormatInfo(v3, (const struct PixelFormatInfo *)&v4);
}
