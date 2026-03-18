/*
 * XREFs of ?ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDPIXELS@@PEBXI@Z @ 0x1801379E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Dispose@CBitmapResource@@IEAAXXZ @ 0x1800AEBC4 (-Dispose@CBitmapResource@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1801839A8 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 */

__int64 __fastcall CBitmapResource::ProcessCompressedPixels(
        CBitmapResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_BITMAP_COMPRESSEDPIXELS *a3,
        const void *a4,
        unsigned int a5)
{
  struct IBitmapSource *v5; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  enum DXGI_FORMAT v13; // [rsp+28h] [rbp-20h]
  enum DXGI_ALPHA_MODE v14; // [rsp+30h] [rbp-18h]
  struct IBitmapSource *v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v15 = 0LL;
  CBitmapResource::Dispose(this);
  if ( a4 )
  {
    v9 = CCompressedSourceBitmap::Create(
           *(struct IWICImagingFactory **)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 64LL),
           a4,
           a5,
           *((double *)a3 + 1),
           *((double *)a3 + 2),
           v13,
           v14,
           &v15);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB3u);
      v5 = v15;
    }
    else
    {
      v5 = v15;
      v11 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)v15 + 56LL))(
              v15,
              (char *)this + 128,
              (char *)this + 132);
      v10 = v11;
      if ( v11 >= 0 )
      {
        *((_QWORD *)this + 17) = v5;
        goto LABEL_10;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBBu);
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC2u);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_10:
  CResource::NotifyOnChanged((_DWORD *)this + 4, 0, 0LL);
  return v10;
}
