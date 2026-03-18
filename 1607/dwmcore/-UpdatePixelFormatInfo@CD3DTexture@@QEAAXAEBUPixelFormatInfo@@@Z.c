/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180080D9C
 * Callers:
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18002D990 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x180082288 (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180082C1C (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 * Callees:
 *     ?ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ @ 0x180081008 (-ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::UpdatePixelFormatInfo(CD3DTexture *this, const struct PixelFormatInfo *a2)
{
  bool v2; // zf
  int v5; // r14d
  __int64 i; // rsi
  __int64 v7; // rdi
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rcx

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
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            *(_QWORD *)(v7 + 216) = 0LL;
          }
        }
      }
    }
  }
  if ( v5 != *((_DWORD *)this + 46) )
    CD3DTexture::ReleaseD2DBitmaps(this);
}
