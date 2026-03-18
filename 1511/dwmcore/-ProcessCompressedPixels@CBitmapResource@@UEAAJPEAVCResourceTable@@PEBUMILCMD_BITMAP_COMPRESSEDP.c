/*
 * XREFs of ?ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDPIXELS@@PEBXI@Z @ 0x18011FB80
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Dispose@CBitmapResource@@IEAAXXZ @ 0x18005C708 (-Dispose@CBitmapResource@@IEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x180152C70 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 */

__int64 __fastcall CBitmapResource::ProcessCompressedPixels(
        CBitmapResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_BITMAP_COMPRESSEDPIXELS *a3,
        const void *a4,
        unsigned int a5)
{
  int v8; // eax
  struct IBitmapSource *v9; // r14
  unsigned int v10; // edi
  int v11; // eax
  enum DXGI_FORMAT v13; // [rsp+28h] [rbp-30h]
  enum DXGI_ALPHA_MODE v14; // [rsp+30h] [rbp-28h]
  struct IBitmapSource *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  CBitmapResource::Dispose(this);
  if ( !a4 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC2u);
    goto LABEL_10;
  }
  v8 = CCompressedSourceBitmap::Create(
         *(struct IWICImagingFactory **)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 64LL),
         a4,
         a5,
         *((double *)a3 + 1),
         *((double *)a3 + 2),
         v13,
         v14,
         &v15);
  v9 = v15;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)v15 + 56LL))(
            v15,
            (char *)this + 56,
            (char *)this + 60);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *((_QWORD *)this + 8) = v9;
      goto LABEL_10;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBBu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB3u);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_10:
  CResource::NotifyOnChanged((_DWORD *)this + 4, 0, 0LL);
  return v10;
}
