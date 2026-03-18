/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18002D93C
 * Callers:
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x180031344 (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ @ 0x18002D67C (-ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ.c)
 */

void __fastcall CD3DTexture::UpdatePixelFormatInfo(CD3DTexture *this, const struct PixelFormatInfo *a2)
{
  bool v2; // zf
  int v5; // r12d
  __int64 i; // rbp
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // edx
  __int64 v10; // r15

  v2 = *((_QWORD *)this + 25) == 0LL;
  v5 = *((_DWORD *)this + 46);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 2);
  if ( !v2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 25) + 8 * i);
      if ( v7 )
      {
        v8 = *((_DWORD *)a2 + 1);
        v9 = *(_DWORD *)(v7 + 192);
        *(_DWORD *)(v7 + 192) = v8;
        *(_DWORD *)(v7 + 196) = *((_DWORD *)a2 + 2);
        if ( v9 != v8 )
        {
          v10 = *(_QWORD *)(v7 + 216);
          if ( v10 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*(_QWORD *)(v7 + 216));
            *(_QWORD *)(v7 + 216) = 0LL;
          }
        }
      }
    }
  }
  if ( v5 != *((_DWORD *)this + 46) )
    CD3DTexture::ReleaseD2DBitmaps(this);
}
